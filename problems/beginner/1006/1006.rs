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
	const FIRST_WEIGHT: f64 = 2.0; 
	const SECOND_WEIGHT: f64 = 3.0; 
	const THIRD_WEIGHT: f64 = 5.0; 
	const TOTAL_WEIGHT: f64 = 10 as f64; 

	let a = get_number_from_stdin();
	let b = get_number_from_stdin();
	let c = get_number_from_stdin();

	let result: f64 = (a * FIRST_WEIGHT) + (b * SECOND_WEIGHT) + (c * THIRD_WEIGHT);
	let result: f64 = result / TOTAL_WEIGHT;

	println!("MEDIA = {:.1}", result);
}
