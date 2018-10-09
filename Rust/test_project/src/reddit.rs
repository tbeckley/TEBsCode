
extern crate serde_json;
extern crate serde;

#[derive(Serialize, Deserialize, Debug)]
pub struct Post {
    title: String,
    num_comments: u32,
    score: i32,
    permalink: String
}

#[derive(Serialize, Deserialize)]
struct Inner {
    children: Vec<RedditResponse<Post>>
}

#[derive(Serialize, Deserialize)]
struct RedditResponse <T> {
    kind: String,
    data: T
}

pub fn parse_response (resp: &String) -> Vec<Post> {
    let parsed: RedditResponse<Inner> = serde_json::from_str(resp).unwrap();
    parsed.data.children.into_iter().map(|postouter| postouter.data).collect()
}