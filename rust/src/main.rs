mod sorts;

fn main(){
    let mut vec: Vec<i32> = vec![6, 5, 4, 3, 2, 1];
    let v_len: usize = vec.len();
    println!("Vector before quick sorting: {:?}", vec);
    sorts::quick_sort::quick_sort(&mut vec, 0, v_len - 1);
    println!("Vector after quick sorting: {:?}", vec);

    let mut vec2: Vec<i32> = vec![10, 9, 8, 7, 6, 5, 4, 3, 2, 1];
    println!("Vector before bubble sorting: {:?}", vec2);
    sorts::bubble_sort::bubble_sort(&mut vec2);
    println!("Vector after bubble sorting: {:?}", vec2);
}