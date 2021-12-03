import 'dart:convert';
import 'dart:io';

String input() {
  return (stdin.readLineSync(encoding: utf8) as String);
}

double doubleInput() {
  return double.parse(input().trim());
}

void main() {
  const PI = 3.14159;

  var r = doubleInput();

  var volume = (4.0 * PI * r * r * r) / 3.0;

  print("VOLUME = ${volume.toStringAsFixed(3)}");
}
