extern crate reqwest;
use std::fs;

#[macro_use]
extern crate serde_derive;

mod reddit;

fn _easy_get(addr: &str) -> String {
    match reqwest::get(addr) {
        Ok(mut bd) => match bd.text() {
            Ok(txt) => txt,
            Err(error) => panic!("Uh Oh! Body problems: {:?}", error)
        },
        Err(error) => panic!("Uh Oh! Request failed: {:?}", error)
    }
}

fn _easy_read_str(file: &str) -> String {
    match fs::read_to_string(file) {
        Ok(ok) => ok,
        Err(err) => panic!("Error: {:?}",err)
    }
}

fn main() {
    println!("Start!");

    let big_json: String = _easy_read_str("assets/full_response.json");

    let _posts = reddit::parse_response(&big_json);

    println!("Done");
}

