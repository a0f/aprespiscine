#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct node // prototype creates it though
{
    int value; // throwaway var, doesnt matter.
    struct node *prev; // previous node
    struct node *next; // next node

}
node;

node* create(int val);
node* insert(node* head, int val);
void delete(node* x);
bool find(node* head, int val);
void destroy(node* head);

int main(void)
{
    node *head = create(50);
    // print contents of head value field
    if (head == NULL)
    {
        return 1;
    }
    printf("%d\n", head->value);

    head = insert(head, 30);
    head = insert(head, 15);
    head = insert(head, 17);
    head = insert(head, 54);
    head = insert(head, 23);
    // print contents of head value field
    if (head == NULL)
    {
        return 1;
    }
    printf("%d\n", head->value);

    node *temp = head; // start at the head of the list
    while (temp != NULL) // while we haven't reached the end of the list
    {
    // do something with temp->value
    printf("%d\n", temp->value);
    temp = temp->next; // move on to the next node
    }

    int target_val = 97;
    // if our function found the value, print found
    if (find(head, target_val) == true)
    {
        printf("%i found.\n", target_val);
    }
    // if it didn't find it, print not found.
    else
    {
        printf("%i not found.\n", target_val);
    }


    temp = head; // start at the head of the list
    while (temp != NULL) // while we haven't reached the end of the list
    {
        if (temp->value == 30)
        {
            delete(temp);
            temp = temp->next;
        }
    // do something with temp->value
    printf("%d\n", temp->value);
    temp = temp->next; // move on to the next node
    }

    destroy(head);
}

node* create(int val)
{
    // dynamically allocate space for a new node
    node *n = malloc(sizeof(node));
    // check if == null incase we ran out of memory
    if (n == NULL)
    {
        return NULL;
    }
    // initialize node's value field
    n->value = val;
    // initialize node's next field
    n->next = NULL;
    // return a pointer to the newly created node
    // *n would be dereferencing the pointer
    // and returning the value n points to
    return n;
}

node* insert(node* x, int val)
{
    node *n = malloc(sizeof(node));
    // check if == null in case we ran out of memory
    if (n == NULL)
    {
        return NULL;
    }
    // initialize node's value field
    n->value = val;
    // initialize nodes next field
    n->next = x;
    // initialize nodes prev field
    if (x != NULL)
    {
    x->prev = n;
    }
    // return pointer to new head
    return n;

}

void delete(node* x)
{
    // set previous node to point to next node
    if (x->prev != NULL)
    {
    x->prev->next = x->next;
    }
    if (x->next != NULL)
    {
    x->next->prev = x->prev;
    }
    free(x);

    return;
}

bool find(node* head, int val)
{
    if (head == NULL)
    {
        return false; // empty list, so definitely not found
    }

    // establish our traversal pointer
    node *temp = head;
    // run until end of linked list
    while (temp != NULL)
    {
        // if current nodes value = target val
        // return true
        if (temp->value == val)
        {
            return true;
        }
        // if we didnt find it, move to next node
        else
        {
        temp = temp->next;
        }
    }
    // if we hit NULL before we found it, return false
    // cuz its not in the list :(
    return false;
}

void destroy(node* head)
{
    // establish our traversal pointer
    node *temp = head;
    // If you reach the null pointer, stop
    // base case
    // (if we are at the end)
    if (temp == NULL)
    {
        return;
    }
    // if we are not at the end
    // run function again on this node
    // free this node
    {
    destroy(temp->next);
    free(temp);
    }
}
