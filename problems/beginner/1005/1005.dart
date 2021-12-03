import 'dart:convert';
import 'dart:io';

String input() {
  return (stdin.readLineSync(encoding: utf8) as String);
}

double doubleInput() {
  return double.parse(input().trim());
}

double weightedAverage(double a, double b) {
  const FIRST_WEIGHT = 3.5;
  const SECOND_WEIGHT = 7.5;
  const TOTAL_WEIGHT = FIRST_WEIGHT + SECOND_WEIGHT;

  return (a * FIRST_WEIGHT + b * SECOND_WEIGHT) / TOTAL_WEIGHT;
}

void main() {
  var a = doubleInput();
  var b = doubleInput();

  print('MEDIA = ${weightedAverage(a, b).toStringAsFixed(5)}');
}
