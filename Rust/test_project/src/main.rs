extern crate reqwest;
use std::fs;

#[macro_use]
extern crate serde_json;
use serde_json::Value;
use serde_json::map::Map;
extern crate serde;

#[macro_use]
extern crate serde_derive;

#[derive(Serialize, Deserialize)]
struct Post {
    created_utc: f32,
    permalink: String,
    num_comments: u32,
    title: String,
    subreddit_name_prefixed: String
}

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

    let big_json: String = _easy_read_str("assets/test_bigger.json");

    let v: Value = match serde_json::from_str(&big_json) {
        Ok(s) => s,
        Err(e) => panic!("JSON Parse Error: {:?}", e)
    };

    let mut x = v.get("data").unwrap();

    let u: Post = serde_json::from_value(x).unwrap();

    println!("Done");
}

