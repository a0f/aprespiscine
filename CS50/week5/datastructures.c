#include <stdio.h>
#include <stdlib.h>
// this is to aid decision making of which data structure to use


// Arrays

        //Insertion is bad - lots of shifting to fit element in middle
        // deletion is bad -- lots of shifting after removing element
        // lookup is great - randoma ccess, constant time
        // relatively easy to short
            // merge, bubble, etc
        // relitively small, set aside as much data as you need
        // fixed in size, no flexiblity
            // have to declare new array, copy old elements into new, slow etc

// Linked list

        // insertion is easy -- just tack onto front
        // deletion is easy, once you find element
        // lookup is bad - have to rely on linear search
        // sort is difficult - unless you are willing to compromise on super-fast insertion
            // you can sort as you construct, but then it slows insertion to array speed
        // size is relatively (not as small as arrays though)

// Hash tables

        // insertion is two step, hash then add
        // deletion is easy, once you find element
        // lookup is on average better than linked list, you have benefit of real world constant factor
                // you have n linked lists that split your work to be faster
                // leads to short linked list length that you have to sort linearlly
        // not ideal data structure if sorting is the goal -- just use an array
        // can be quite large, larger than a linked list, smaller than a try

// Tries

        // insertion is complex - alot of dynamic memeory allocation, but gets easier as you go
                        // the human element is the hard part, lots of memory allocation
        // deletion is easy -- just free a node
        // lookup is fast - not quite as fast as an array, but almost
        // already sorted -- sorts as you build in almost all situations (by going leter by letter)
        // rapidly becomes huge, even with very little data present, not great if space is a premium


