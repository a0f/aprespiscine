#include <stdio.h>

// Hash tables combine the random access ability of an array with the dynamism of linked list


// Hash tables are fast.
// Insertion can get close to constant time
// Searching can get close to constant time
// Deleting can get close to constant time

// But hash tables are not great at ordering or sorting data
// if you need to order/sort, you slow down past the point of usefullness

// Hash tables have 2 distinct pieces

// 1. Hash function, which returns a nonnegative interger value called a hash code
// 2. An array capable of storing data of the type we wish to place into the data structure

// The idea is that we run our data through a hash function, then store the data in the element of the array
// represented by the hash code

// How to define a hash function?

// A good hash function should use

// Only the data being hashed
// All the data being hashed
// Be deterministic -> exact same piece of data always gets same hash code out
// Uniformly distribute data
// Generate very different hash codes for very similar data

// Find hash functions, don't write them
// Cite your sources

// Collisions
// Occurs when two pieces of data, when run through the hash function, yield the same hash code
// Presumably we want to store both pieces of data in the hash table, so we shouldn't simply
// overwrite the data first in the location
// We need to find a way to get both elements intot he hash table while trying to preserve
// quick insertion and lookup

// Resolving collisions: Linear probing
// we try to place the data in the next con secutive element in the array, wrapping to the beggining
// if necessary until we find a vacancy
// That way, if we dont find what were looking for in the first location, and least hopefully the
// element is not far
// Subject to clustering problem
// Clustering grows and grows, makes it more likely to grow in future

// Even with linear probing, we are still limited to the amount of spaces we have in our array

// Resolving collisions: Chaining
// every element of the array can hold multiple pieces of data through a linked list
// if each element of the array is a pointer to the head of a linked list
// then multiple pieces of data can yield the same hash code and we'll be able to store them all


