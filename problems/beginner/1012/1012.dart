import 'dart:convert';
import 'dart:io';

String input() {
  return (stdin.readLineSync(encoding: utf8) as String);
}

List<String> multipleInputsInLine() {
  return input().trim().split(' ');
}

double getDoubleFromString(String string_to_be_parsed) {
  return double.parse(string_to_be_parsed.trim());
}

double getAreaOfTriangle(double base, double height) {
  return (base * height) / 2.0;
}

double getAreaOfCircle(double radius) {
  const PI = 3.14159;

  return PI * radius * radius;
}

double getAreaOfTrapezium(double base_1, double base_2, double height) {
  return (base_1 + base_2) * height / 2.0;
}

double getAreaOfSquare(double side) {
  return side * side;
}

double getAreaOfRectangle(double base, double height) {
  return base * height;
}

void main() {
  List<String> inputs = multipleInputsInLine();

  double a = getDoubleFromString(inputs[0]);
  double b = getDoubleFromString(inputs[1]);
  double c = getDoubleFromString(inputs[2]);

  print('TRIANGULO: ${getAreaOfTriangle(a, c).toStringAsFixed(3)}');
  print('CIRCULO: ${getAreaOfCircle(c).toStringAsFixed(3)}');
  print('TRAPEZIO: ${getAreaOfTrapezium(a, b, c).toStringAsFixed(3)}');
  print('QUADRADO: ${getAreaOfSquare(b).toStringAsFixed(3)}');
  print('RETANGULO: ${getAreaOfRectangle(a, b).toStringAsFixed(3)}');
}
