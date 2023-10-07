/* Implementation of the quick sort algorithm */

fn partition(v: &mut [i32], start: usize, end: usize) -> usize {
    let pivot = v[end];
    let mut i: usize = start;
    for j in start..end {
        if v[j] <= pivot {
            v.swap(i, j);
            i += 1;
        }
    }
    v.swap(i, end);
    return i;
}

pub fn quick_sort(v: &mut [i32], start: usize, end: usize) {
    if start >= end {
        return;
    }
    let pivot: usize = partition(v, start, end);
    if pivot > 0 {
        quick_sort(v, start, pivot - 1);
    }
    quick_sort(v, pivot + 1, end);
}