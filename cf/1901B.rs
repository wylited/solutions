
#![allow(unused)]

use std::io::stdin;

fn take_int() -> usize {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    return input.trim().parse().unwrap()
}

fn take_vector() -> Vec<usize> {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let arr: Vec<usize> = input.trim().split_whitespace().map(|x| x.parse().unwrap()).collect();
    return arr;
}

fn take_string() -> Vec<char> {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let vec:Vec<char> = input.trim().chars().collect();
    return vec;
}

fn to_string(vec:Vec<char>) -> String{return vec.iter().collect::<String>();}


fn solve() {
    let n = take_int();
    let mut arr = take_vector();

    println!("{}", ans);
}


pub fn main() {
    let t = take_int();
    for _ in 0..t { solve(); }
}
