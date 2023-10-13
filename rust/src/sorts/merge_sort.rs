/* Implementation of the merge sort algorithm */

fn merge(vec1: &mut [i32], vec2: &mut [i32]) -> Vec<i32> {
    let mut merged: Vec<i32> = Vec::with_capacity(vec1.len() + vec2.len());
    while !vec1.is_empty() && !vec2.is_empty(){
        if vec1[0] > vec2[0]{
            merged.push(vec2[0]);
            vec1 = &vec1[1..];
        }
    }
    return merged;
}


pub fn merge_sort(&mut vec: [i32]){
    
}