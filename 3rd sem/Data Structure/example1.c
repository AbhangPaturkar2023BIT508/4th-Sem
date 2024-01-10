#include<stdio.h>

struct student{
    char student_name[50];
    struct subject *sub1mark, *sub2mark, *sub3mark;
    int total;
};

struct subject{
    char subject[50];
    int mark;
};

struct node{
    struct student *DATA;
    struct node *NEXT;
};


int main(){
    struct node n1 = (struct node *)malloc(sizeof(struct node));
    struct node n2 = (struct node *)malloc(sizeof(struct node));
    struct node n3 = (struct node *)malloc(sizeof(struct node));

    n1->DATA->student_name = "JACK";
    n1->DATA->sub1mark->subject[50] = "PHYSICS";
    n1->DATA->sub1mark->mark = 71;
    n1->DATA->sub2mark->subject = "MATH";
    n1->DATA->sub2mark->mark = 99;
    n1->DATA->sub3mark->subject = "DSA";
    n1->DATA->sub3mark->mark = 70;
    n1->DATA->total = n1->DATA->sub1mark->mark + n1->DATA->sub2mark->mark + n1->DATA->sub3mark->mark

    n2->DATA->student_name = "WILL";
    n2->DATA->sub1mark->subject = "PHYSICS";
    n2->DATA->sub1mark->mark = 72;
    n2->DATA->sub2mark->subject = "MATH";
    n2->DATA->sub2mark->mark = 98;
    n2->DATA->sub3mark->subject = "DSA";
    n2->DATA->sub3mark->mark = 75;
    n2->DATA->total = n1->DATA->sub1mark->mark + n1->DATA->sub2mark->mark + n1->DATA->sub3mark->mark

    n3->DATA->student_name = "JAMES";
    n3->DATA->sub1mark->subject = "PHYSICS";
    n3->DATA->sub1mark->mark = 70;
    n3->DATA->sub2mark->subject = "MATH";
    n3->DATA->sub2mark->mark = 94;
    n3->DATA->sub3mark->subject = "DSA";
    n3->DATA->sub3mark->mark = 81;
    n3->DATA->total = n1->DATA->sub1mark->mark + n1->DATA->sub2mark->mark + n1->DATA->sub3mark->mark;
    
    // Subject_topper("PHYSICS");
    // Subject_topper("MATH");
    // Subject_topper("DSA");
}