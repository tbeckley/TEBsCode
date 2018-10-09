#[macro_use]
extern crate serde_derive;

mod reddit;
mod graceless;

fn main() {
    println!("Start!");

    let big_json: String = graceless::read_from_file("assets/full_response.json");
    let _posts = reddit::parse_response(&big_json);

    println!("Done");
}

