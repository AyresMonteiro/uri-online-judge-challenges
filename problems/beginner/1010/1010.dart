import 'dart:convert';
import 'dart:io';

String input() {
  return (stdin.readLineSync(encoding: utf8) as String);
}

List<String> multipleInputsInLine() {
  return input().trim().split(' ');
}

double getPriceOfAnItem(List<String> items) {
  var amount = int.parse(items[1]).toDouble();
  var unit_price = double.parse(items[2]);

  return amount * unit_price;
}

void main() {
  var first_price = getPriceOfAnItem(multipleInputsInLine());
  var second_price = getPriceOfAnItem(multipleInputsInLine());

  var total_price = first_price + second_price;

  print("VALOR A PAGAR: R\$ ${total_price.toStringAsFixed(2)}");
}
