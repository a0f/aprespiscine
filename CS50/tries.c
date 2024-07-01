#include <stdio.h>

// Tries

// Data structure where the key is guarenteed to be unique, and the value could be as simple
// as a boolean that tells you whether the datra exists in the structure

// Tries combine arrays, structures, and pointers to store data
// Data to be searched int he trie is now  aroadmap
// If you can follow the map from beginning to end, the data exists
// If not it doesn't

// No two pieces of data have the same roadmap, unless the data is identical

// In a tire, the pahts from a central root node to a leaf node
// Each node on the path from root to leaf could have 10 pointers emanating from it
// one for each digit
// At every junction point, there are ten possible places we can go

// Root node is constant, never touch it
// Set nodes equal to root, and use that for what you need

// Every node you need to go down, if that gate isn't clear yet (digig has not been mallocd)
// you need to malloc and go.
// At the end, you need to see what you are inserting via this key

// Tries use constant time for anything

// But they require alot of space, thats their tradeoff


