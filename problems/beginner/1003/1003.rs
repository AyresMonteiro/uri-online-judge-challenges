use std::io;

fn get_number_from_stdin() -> i32 {
	let mut num = String::new();
	
	io::stdin()
		.read_line(&mut num)
		.expect("Error while reading");
	
	let num: i32 = num.trim().parse().expect("Error while parsing number");

	num
}


fn main() {
	let a = get_number_from_stdin();
	let b = get_number_from_stdin();

	println!("SOMA = {}", a + b);
}
