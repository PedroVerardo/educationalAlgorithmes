use sorts::quick_sort;
use std::fs::File;
use std::io::Read;
use std::mem;

pub fn read_from_dat_into_vector(filename: &str) -> Vec<i32> {
    let mut file = File::open(filename).expect("Failed to open file");
    let file_len = file.metadata().expect("Failed to get file metadata").len() as usize;
    let mut data: Vec<i32> = vec![0; file_len / mem::size_of::<i32>()];

    let data_slice_bytes: &mut [u8] = unsafe {
        let data_slice_i32: &mut [i32] = data.as_mut_slice();
        let data_ptr: *mut i32 = data_slice_i32.as_mut_ptr();
        std::slice::from_raw_parts_mut(data_ptr as *mut u8, file_len)
    };

    file.read_exact(data_slice_bytes).expect("Failed to read from file");

    let data_slice_i32: &mut [i32] =
        unsafe { mem::transmute(data_slice_bytes) };

    data.truncate(data_slice_i32.len());

    return data;
}

fn main(){
    let file: &str = "/home/barbosa/Github/educationalAlgorithms/assets/";

    let mut vector: Vec<i32> = read_from_dat_into_vector(file);
    quick_sort(vector);


    
}
