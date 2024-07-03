#include <stdio.h>
#include <stdlib.h>

// linked lists hope to solve the problem of data structures like arrays being infexible
// therefore use of linked lists is advantageous when you need flexibility in a data structure

// linked lists are comprised of nodes
// each node has two things, data, and a pointer to another node


// singly-linked lists
typedef struct sllist // prototype creates it though
{
    int value; // throwaway var, doesnt matter.
    struct sllist* next; // doesn't exist yet without prototype (has to hit sllnode)
}
sllnode;

// this data type is self-referential. the struct sllist doesnt exist within it
// so you have to include it at the start

// Things you may want to do with Linked Lists
// and how to do them

// 1. Create a linked list when it doesn't already exist
      sllnode* create(int val); //does NOT have to be int
        // this is a function which creates a linked list
        // functions of course can return
    // What we need-> the fuynction to return a pointer to a list
        // Dynamically allocate space for a new sllnode
        // Check to make sure we didnt run out of memory
        // Initialize node's val field
        // Initialize the node's next field
            // if there shouldn't be a next field, its nothing
            // so initialize it as NULL
        // Return a pointer to the newly created sllnode

// 2. Search through a linked list to find an element
      bool find(sllnode* head, int value);  //does NOT have to be int
        //  this function allows us to find a value within a linked list
        // head is the first element of a linked list
        // generally, you always ALWAYS want to store the first value
        // of a linked list somewhere, generally in a global varaible
        // if all the elements are chained together, you only need the first one
    // Create a traversal pointer pointing to the lists head
        // this is ONTOP of the one we already have
        // it is better to create a duplicate of the head, and work with that
        // so that original pointer always stays intact
    // Compare current nodes val field to what we are looking for
        // ask does traversal pointer = value?
        // if success, return or whatever
        // else set traversal pointer to the next pointer in the list and go back a step
        // if you reach end of list (hit/find null), report failure.
// 3. Insert a new node into the linked list
        sllnode* insert(sllnode* head, int value);  //does NOT have to be int
        // function allows us to insert a new node
    // Dynamically allocate space for a new sllnode
    // Check to make sure we didn't run out of memory
    // Populate and insert the node AT THE BEGINNING of the linked list
        // if you insert at the beggining, you can do it immediately
        // if you do it at the end you are doing a linear search each time
        // becomes an O of n operation
    // Return a pointer to the new head of linked list
        // With linked lists, the order really matters.
            // if you fuck this up you can orphan parts of the list
            // if you make the new node the new head of the list as the first action
                // you have now orphaned the rest of the list.
                // the computer doesnt have the next pointer and lost it
         // you HAVE to set the new element to point to the old head of the list
         // THEN set the new element as the new head of the list
// 4. Delete an entire linked list
        void destroy(sllnode* head);
        // function deletes an entire list
    // If you've reached a null pointer, stop.
    // Delete the rest of the list
        // Through recursion
        // Pseudocode
            // If you've reached a null pointer, stop
            // Delete the rest of the list
            // Free the current node
    // Free the current node


// a DOUBLY-LINKED lists solve a probem
// you can move forward and backward to the list, by adding one element to the strcture def
// this can help with trying to delete a node, which if you can only move one way would be impossible?

