use std::io;

fn get_number_from_stdin() -> f64 {
	let mut num = String::new();

	io::stdin()
		.read_line(&mut num)
		.expect("Error while reading from stdin");

	let num: f64 = num
		.trim()
		.parse()
		.expect("Error while parsing string into number");

	num
}

fn main() {
	const PI: f64 = 3.14159;

	let num = get_number_from_stdin();

	println!("A={:.4}", num * num * PI);
}
