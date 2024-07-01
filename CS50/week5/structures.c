#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Use structures when you need a way to unify several variables and types
// into a single new variable type.
//

// Example

struct student // student defines a "type name"
{
    char name[20]; //can define all different variables that belongs to student
    char school[20];
    char birth_date[10];
    int student_number;
}; //semi-colon completes the definition of student

int main(void)
{
    // delcare a variable of this type
    // this creates it on the stack
    struct student sam;

    // field accessing
    strcpy(sam.name, "Sam Fakename");
    // here we cant just assign it
    // we have to copy the string into the variable
    strcpy(sam.school, "Ram Ranch");
    strcpy(sam.birth_date, "05/12/1990");
    sam.student_number = 1030111;

    // instead of creating it on the stack we can create it on the heap
    // through dynamic allocation

    // variable declaration
    struct student *emma = malloc(sizeof(struct student));

    // fields accessing
    strcpy((*emma).name, "Emma Morris");
    strcpy((*emma).school, "Greengrove University");
    strcpy((*emma).birth_date, "02/11/1987");
    (*emma).student_number = 119457;

    // you can also use the arrow operator which
    // 1. deferences pointer on the left side of operator
    // 2. accesses the field on the right side of operator

    // variable declaration
    struct student *mike = malloc(sizeof(struct student));

    // fields accessing
    strcpy(mike->name, "Mike Framp");
    strcpy(mike->school, "Greengrove University");
    strcpy(mike->birth_date, "02/11/1987");
    mike->student_number = 119457;



    free(emma);
    free(mike);
    return 0;
}
