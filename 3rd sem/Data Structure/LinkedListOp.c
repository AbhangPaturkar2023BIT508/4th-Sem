#include<stdio.h>
#include<stdlib.h>

struct node {
    int DATA;
    struct node *NEXT;
};

struct node *head = NULL;

void display()
{
    if(head == NULL)
    {
        printf("List Is Empty ");
    }
    else
    {
        struct node *ptr = head;

        while(ptr != NULL)
        {
            printf("%d ", ptr->DATA);
            ptr = ptr->NEXT;
        }
    }
}

void create()
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data For Node : ");
    scanf("%d", &temp->DATA);
    temp->NEXT = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *ptr = head;

        while(ptr->NEXT != NULL)
        {
            ptr = ptr->NEXT;
        }
        ptr->NEXT = temp;
    }
    void display();
}

void insertAtBegin()
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data for Node : ");
    scanf("%d", &temp->DATA);
    temp->NEXT = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->NEXT = head;
        head = temp;
    }
    void display();
}

void insertAtPos()
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data for Node : ");
    scanf("%d",&temp->DATA);

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *prev_node;
        struct node *ptr = head;
        int pos;
        printf("Enter Position to insert node : ");
        scanf("%d",&pos);
        for(int i = 0; i < pos; i++)
        {
            prev_node = ptr;
            ptr = ptr->NEXT;
        }

        temp->NEXT = ptr;
        prev_node->NEXT = temp;
    }
    void display();
}

void insertAtEnd()
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data for Node : ");
    scanf("%d",&temp->DATA);
    temp->NEXT = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *ptr = head;
        while(ptr->NEXT !=NULL)
        {
            ptr = ptr->NEXT;
        }

        ptr->NEXT = temp;
    }
    void display();
}

void deleteAtBegin()
{
    if(head == NULL)
    {
        printf("Linkedlist is empty");
    }
    else
    {
        struct node *ptr = head;
        head = head->NEXT;
        free(ptr);
        printf("Node Deleted");
    }
    void display();
}

void deleteAtEnd()
{
    if(head == NULL)
    {
        printf("Linkedlist is empty");
    }
    else if(head->NEXT == NULL)
    {
        struct node *ptr = head;
        head = head->NEXT;
        free(ptr);
        printf("Node Deleted");
    }
    else
    {
        struct node *prev_node;
        struct node *ptr = head;

        while(ptr->NEXT != NULL)
        {
            prev_node = ptr;
            ptr = ptr->NEXT;
        }

        prev_node->NEXT = NULL;
        free(ptr);
        printf("Node Deleted");
    }
    void display();
}

void deleteAtPos()
{
    int pos;
    printf("Enter Position to delete node : ");
    scanf("%d", &pos);
    if(head == NULL)
    {
        printf("LinkedList Is Empty");
    }
    else if(head->NEXT == NULL)
    {
        struct node *ptr = head;
        head = head->NEXT;
        free(ptr);
    }
    else
    {
        struct node *ptr = head;
        struct node *prev_node;

        for(int i = 0; i < pos; i++)
        {
            prev_node = ptr;
            ptr = ptr->NEXT;
        }

        prev_node->NEXT = ptr->NEXT;
        free(ptr);
    }
    void display();
}

int main()
{
	int choice;
	while(1)
	{
	    printf("\n**LINKED LIST OPERATION**\n");
	    printf("0. Create\n");
	    printf("1. display\n");
	    printf("2. Insert Node at beginning\n");
	    printf("3. Insert Node in specific position\n");
	    printf("4. Insert Node at end of LinkedList\n");
	    printf("5. Delete Node at beginning\n");
	    printf("6. Delete Node at end\n");
	    printf("7. Delete Node at position\n");
	    printf("8. ** To exit **");
	    
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0: create();
					break;
			case 1: display();
					break;
			case 2: insertAtBegin();
					break;
			case 3: insertAtPos();
					break;
			case 4: insertAtEnd();
					break;
			case 5: deleteAtBegin();
					break;
			case 6: deleteAtEnd();
					break;
			case 7: deleteAtPos();
					break;
			case 8: exit(0);
			default:printf("\n Wrong Choice");
                    break;
		}
	}
}