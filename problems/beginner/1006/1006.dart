import 'dart:convert';
import 'dart:io';

String input() {
  return (stdin.readLineSync(encoding: utf8) as String);
}

double doubleInput() {
  return double.parse(input().trim());
}

double weightedAverage(double a, double b, double c) {
  const FIRST_WEIGHT = 2.0;
  const SECOND_WEIGHT = 3.0;
  const THIRD_WEIGHT = 5.0;

  const TOTAL_WEIGHT = FIRST_WEIGHT + SECOND_WEIGHT + THIRD_WEIGHT;

  var summation = a * FIRST_WEIGHT + b * SECOND_WEIGHT + c * THIRD_WEIGHT;

  return summation / TOTAL_WEIGHT;
}

void main() {
  var a = doubleInput();
  var b = doubleInput();
  var c = doubleInput();

  print('MEDIA = ${weightedAverage(a, b, c).toStringAsFixed(1)}');
}
