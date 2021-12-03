import 'dart:convert';
import 'dart:io';

String input() {
  return (stdin.readLineSync(encoding: utf8) as String);
}

int intInput() {
  return int.parse(input().trim());
}

void main() {
  var a = intInput();
  var b = intInput();
  var c = intInput();
  var d = intInput();

  print('DIFERENCA = ${a * b - c * d}');
}
