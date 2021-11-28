use std::io;

fn read_line_from_stdin() -> String {
	let mut string = String::new();

	io::stdin()
		.read_line(&mut string)
		.expect("Error while reading from stdin");

	string
}

fn get_i32_from_stdin() -> i32 {
	let num: i32 = read_line_from_stdin()
		.trim()
		.parse()
		.expect("Error while converting String into i32");

	num
}

fn get_f64_from_stdin() -> f64 {
	let num: f64 = read_line_from_stdin()
		.trim()
		.parse()
		.expect("Error while converting String into f64");

	num
}

fn main () {
	let employee_id = get_i32_from_stdin();
	let hours_worked = get_i32_from_stdin();
	let hour_value = get_f64_from_stdin();
	
	println!("NUMBER = {}", employee_id);
	println!("SALARY = U$ {:.2}", (hours_worked as f64) * hour_value);
}
