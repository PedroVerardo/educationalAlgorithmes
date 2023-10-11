from sorts.quick_sort import quick_sort


if __name__ == "__main__":
    path = "/home/barbosa/Github/educationalAlgorithms/assets/array_big.dat"
    vec = [2,3,5,8,1,10,4,6,9]
    print(f"Printing the vector: {vec}\n")
    quick_sort(vec, 0, len(vec) - 1)
    print(f"Vector after sorting: {vec}")    