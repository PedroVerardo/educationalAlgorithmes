/* Implementation of the bubble sort algorithm, which is probably one of, if not
the easiest sorting algorithm to code */


pub fn bubble_sort(vec: &mut [i32]){
    for i in 0..vec.len(){
        for j in 0..vec.len() - i - 1{
            if vec[j] > vec[j + 1]{
                vec.swap(j, j + 1);
            }
        }
    }
}