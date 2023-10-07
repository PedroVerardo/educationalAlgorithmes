import numpy as np
from random import randint

if __name__ == "__main__":
    array_ordered = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16], dtype="int32")
    array_random = np.array([16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1], dtype="int32")
    array_big = np.zeros(1000000, dtype="int32")
    array_short = np.zeros(16, dtype="int32")
    
    for i in range(16):
        array_short[i] = randint(0, 17)
    for i in range(1000000):
        array_big[i] = randint(0, 1000001)

    array_big.tofile("/home/barbosa/Github/educationalAlgorithms/assets/array_big.dat")
    array_ordered.tofile("/home/barbosa/Github/educationalAlgorithms/assets/array_ordered.dat")
    array_random.tofile("/home/barbosa/Github/educationalAlgorithms/assets/array_random.dat")
    array_short.tofile("/home/barbosa/Github/educationalAlgorithms/assets/array_short.dat")
