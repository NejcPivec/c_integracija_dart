import 'dart:convert';

import 'package:ffi/ffi.dart';
import 'package:flutter/material.dart';
import 'package:qr_integracija/custom_expansion_tile.dart';
import 'package:qr_integracija/qr.dart';

import 'package:tree_view/tree_view.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'QR Integracija',
      debugShowCheckedModeBanner: false,
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: MyHomePage(),
    );
  }
}

class MyHomePage extends StatefulWidget {
  MyHomePage({Key key}) : super(key: key);

  @override
  _MyHomePageState createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  List ids = [];
  List contents = [];
  @override
  Widget build(BuildContext context) {
    var inputs = [
      'F22:1:3:0.00%M:0.00%M:9.00%M:9.00%M:9.00%M:9.00%M+3Y31',
      'F20:1:1:\$3E199.9M:525+246Z/F23:1:0.001%M:0::3.50%M:+A1/I3:1+CSA'
    ];

/* Drevesna struktura */
    var treeView = TreeView(
      parentList: [
        Parent(
          parent: CustomExpansionTile(
            leading: Icon(Icons.apps),
            title: Text('QR decoded results'),
            children: [
              ChildList(
                children: <Widget>[
                  for (var i = 0; i < ids.length; i++)
                    Parent(
                      parent: Padding(
                        padding: const EdgeInsets.only(left: 20.0),
                        child: Card(
                          child: CustomExpansionTile(
                            leading: Icon(Icons.class_),
                            title: Text('Measurement id ${ids[i]}'),
                            children: [
                              ChildList(
                                children: <Widget>[
                                  for (var content in contents[i])
                                    Measurement(
                                      icon: Icon(Icons.done),
                                      parameter: '${content['type']}',
                                      measurement: '${content['value']}',
                                    ),
                                ],
                              ),
                            ],
                          ),
                        ),
                      ),
                    ),
                ],
              ),
            ],
          ),
        ),
      ],
    );

    return Scaffold(
      appBar: AppBar(
        title: Text('C integracija'),
      ),
      body: Column(
        children: [
          Row(
            children: [
              MainButton(
                title: 'DECODE MEASUREMENTS',
                onPressed: () {
                  inputs.forEach((input) {
                    var result = Utf8.fromUtf8(hello(Utf8.toUtf8(input), 12));
                    var decodedResult = json.decode(result);

                    setState(() {
                      ids.add(decodedResult['DDid']);
                      contents.add(decodedResult['content']);
                    });
                  });
                },
              ),
              MainButton(
                title: 'TEST NATIVE CALLBACK',
                onPressed: () {
                  print('TEST NATIVE CALLBACK');
                },
              ),
            ],
          ),
          Divider(
            color: Colors.black,
          ),
          ids.length == 0
              ? Text('Nothing Yet')
              : Expanded(
                  child: Container(
                    height: MediaQuery.of(context).size.height,
                    child: treeView,
                  ),
                ),
        ],
      ),
    );
  }
}

/* Gumb */
class MainButton extends StatelessWidget {
  final String title;
  final Function onPressed;

  const MainButton({Key key, this.title, this.onPressed}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Expanded(
      child: Padding(
        padding: const EdgeInsets.all(8.0),
        child: FlatButton(
          onPressed: onPressed,
          child: Padding(
            padding: const EdgeInsets.all(8.0),
            child: Text(
              title,
              style: TextStyle(
                fontSize: 15.0,
              ),
              textAlign: TextAlign.center,
            ),
          ),
          color: Colors.blue,
          textColor: Colors.white,
        ),
      ),
    );
  }
}

/* Narejena kartica za posamezne meritve */
class Measurement extends StatelessWidget {
  final Icon icon;
  final String parameter;
  final String measurement;

  const Measurement({
    Key key,
    this.icon,
    this.parameter,
    this.measurement,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.only(left: 20.0),
      child: CustomExpansionTile(
        leading: icon,
        title: Text('$parameter -> $measurement'),
      ),
    );
  }
}
