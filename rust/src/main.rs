use std::fs::File;
use std::io::{Read, Result};
use byteorder::{ReadBytesExt, LittleEndian};

mod sorts;
use sorts::bubble_sort::bubble_sort;
use sorts::quick_sort::quick_sort;



fn read_vector_from_file(file_path: &str) -> Result<Vec<i32> > {
    let mut file = File::open(file_path)?;
    let mut vector = Vec::new();

    while let Ok(value) = file.read_i32::<LittleEndian>() {
        vector.push(value);
    }

    Ok(vector)
}


fn main(){
    let file_path: String = "E:\\Projects\\educationalAlgorithms\\assets\\array_big.dat".to_owned();
    match read_vector_from_file(&file_path) {
        Ok(mut vector) => {
            // println!("Sorting the array using bubble sort...{:?}", vector);
            println!("Sorting the array using bubble sort...");
            bubble_sort(&mut vector);
            println!("Array sorted!");
        }
        Err(e) => eprintln!("Error: {}", e),
    }
}