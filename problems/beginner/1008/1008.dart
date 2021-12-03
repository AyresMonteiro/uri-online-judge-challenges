import 'dart:convert';
import 'dart:io';

String input() {
  return (stdin.readLineSync(encoding: utf8) as String);
}

double doubleInput() {
  return double.parse(input().trim());
}

int intInput() {
  return int.parse(input().trim());
}

void main() {
  var employee_id = intInput();
  var employee_worked_hours = intInput();
  var employee_hour_value = doubleInput();

  var salary = employee_worked_hours.toDouble() * employee_hour_value;

  print("NUMBER = ${employee_id}");
  print("SALARY = U\$ ${salary.toStringAsFixed(2)}");
}
