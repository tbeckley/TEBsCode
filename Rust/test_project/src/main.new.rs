#[derive(Debug)]
struct A {
    mystr: String
}

#[derive(Debug)]
struct B {
    num: u32,
    str_A: A
}

fn main() {
    let my_b_vector: Vec<B> = vec!  [B   {
                                            num: 4,
                                            str_A: A {
                                                mystr: String::from("hello")
                                            }
                                        },
                                    B   {
                                            num: 123,
                                            str_A: A {
                                                mystr: String::from("world")
                                            }
                                        },
                                    ];

    let the_iter: Vec<A> = my_b_vector.into_iter().map(|a| a.str_A).collect();

    println!("Oh Ok");

}