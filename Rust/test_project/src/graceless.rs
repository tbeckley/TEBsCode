extern crate reqwest;

pub fn fetch_url(addr: &str) -> String {
    match reqwest::get(addr) {
        Ok(mut bd) => match bd.text() {
            Ok(txt) => txt,
            Err(error) => panic!("Could not pull body out of response: {:?}", error)
        },
        Err(error) => panic!("Reqeust failed: {:?}", error)
    }
}

pub fn read_from_file(file: &str) -> String {
    match std::fs::read_to_string(file) {
        Ok(ok) => ok,
        Err(err) => panic!("Error reading from file: {:?}",err)
    }
}