import 'dart:convert';
import 'dart:io';

String input() {
  return (stdin.readLineSync(encoding: utf8) as String);
}

double doubleInput() {
  return double.parse(input().trim());
}

void main() {
  input();
  var base_salary = doubleInput();
  var sales_value = doubleInput();

  var salary = base_salary + (sales_value * 15.0) / 100.0;

  print("TOTAL = R\$ ${salary.toStringAsFixed(2)}");
}
