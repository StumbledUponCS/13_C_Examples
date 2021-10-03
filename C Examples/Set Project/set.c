//
//  set.c
//  
//
//  Created by Anuha Gayam on 2/20/19.
//

#include <stdio.h>
#include <stdlib.h>

/* creates node*/
struct  Node
{
    int item
    struct Node *next;
};

/*Creates set with a pointer to each end*/
struct Set
{    struct Node *head;
    struct Node *tail;
    
};

/*Constructor for new instance of set*/
struct Set SET_new()
{
    struct Set set;
    set.head= NULL;
    set.tail= NULL;
    return set;
}

/*Checks if set is empty*/
int SET_empty(struct Set *set)
{
    return set->head == NULL;
}

/*Adds new element to set, if not already present*/
void SET_add(struct Set *set, int element)
{
    
    if(!SET_contains(set,element))
    {
        struct Node *node=malloc(sizeof(struct Node));
        node->item=element;
        node->next=set->head;
        if(SET_empty(set))
        {
            set->tail=node;
        }
        set->head=node;
    }
    
}

/*Should remove element from set, if present */
void SET_remove(struct Set *set, int element)
{
    int *curr_node=NULL;
    int *prev_node=NULL;
    
    int matched=0;
    
    prev_node=set->head;
    
    for( curr_node=set->head; curr_node!=NULL; curr_node = curr_node ->next)
    {
        if (curr_node->item==element)
        {
            matched=1;
            break;
        }
        else
        {    prev_node=curr_node;    }
    }
    
    if (matched==1)
    {    prev_node->next=curr_node->next;
        free(curr_node);
    }
    else
    {    printf(“Element not found”);    }
    
}

/*return number of elements in set*/
int SET_cardinality(struct Set *set)
{
    if(!SET_empty(set))
    {    struct Node * iter_list;
        int n=0;
        for(iter_list =set->head; iter_list!=NULL; iter_list++)
        {
            ++n;
        }
        return n;
    }
}

/*checks if element is present in set, similar to Boolean type, 1=T, 0=F*/
int SET_contains(struct Set *set, int element)
{
    struct Node *iter_list;
    
    for(iter_list =set->head; iter_list!=NULL; iter_list++)
    {
        if (iter_list ->item==element)
        {
            return 1;
            break;
        }
    }
    
    if (iter_list ==NULL)
        return 0;
}

/*should return set that is union of two sets, all numbers, no repeats*/
struct Set SET_union(Struct Set s, struct Set t)
{
    struct Set set_union;
    struct Node *iter_list_one;
    struct Node *iter_list_two;
    
    
    for(iter_list_one=s->head; iter_list_one!=NULL; iter_list_one++)
    {
        int element_one= iter_list_one->item;
        
        for(iter_list_two=t->head; iter_list_two!=NULL; iter_list_two++)
        {    int element_two= iter_list_two->item;
            if(element_one != element_two)
            {    SET_add(&set_union, element_two);    }
        }
        
        SET_add(&set_union, element_one);
    }
    
    return set_union;
    
}

/*should return set that is intersection of two sets, similar elements only*/
struct Set SET_intersection(struct Set s, struct Set t)
{
    struct Set set_inter;
    struct Node *iter_list_one;
    struct Node *iter_list_two;
    
    
    for(iter_list_one=s->head; iter_list_one!=NULL; iter_list_one++)
    {
        int element_one= iter_list_one->item;
        
        for(iter_list_two=t->head; iter_list_two!=NULL; iter_list_two++)
        {    int element_two= iter_list_two->item;
            if(element_one == element_two)
            {    SET_add(&set_union, element_two);    }
        }
    }
    return set_inter;
}

/*should return set that is (U-I), numbers not in both only*/
struct Set SET_difference(struct Set s, struct Set t)
{
    struct Set set_diff;
    struct Node *iter_list_one;
    struct Node *iter_list_two;
    
    
    for(iter_list_one=s->head; iter_list_one!=NULL; iter_list_one++)
    {
        int element_one= iter_list_one->item;
        
        for(iter_list_two=t->head; iter_list_two!=NULL; iter_list_two++)
        {    int element_two= iter_list_two->item;
            if(element_one != element_two)
            {    SET_add(&set_diff, element_two);    }
        }
    }
    return set_diff;
    
}

/*returns smallest element in set*/
int SET_min(struct Set *set)
{
    struct Node *iter_list;
    int curr_min = 32767;
    for(iter_list =set->head; iter_list!=NULL; iter_list++)
    {
        if (iter_list ->item<curr_min)
        {
            curr_min = iter_list ->item;}
    }
    return curr_min;
    
}

/*returns largest element in set*/
int SET_max(struct Set *set)
{
    struct Node *iter_list;
    int curr_max = 0;
    
    for(iter_list =set->head; iter_list!=NULL; iter_list++)
    {
        if (iter_list ->item>curr_min)
        {
            curr_min = iter_list ->item;}
    }
    return curr_max;
    
}


/*should check all of above, instantiate two sets, check U, I, U-I, min and max*/
int main()
{
    struct Set set_first = SET_new();
    struct Set set_second = SET_new();
    int i;
    
    for(i=0;i<30;i+=3)
    {
        SET_add(&set_first,i)
    }
    
    for(i=0;i<50;i+=5)
    {
        SET_add(&set_second,i)
    }
    
    
    printf(“Maximum value in first set: %d\n”, SET_max(set_first));
    printf(“Maximum value in second set: %d\n”, SET_max(set_second));
    printf(“Minimum value in first set: %d\n”, SET_min(set_first));
    printf(“Minimum value in first set: %d\n”, SET_min(set_second));
    
    
    struct Set set_union= SET_union(set_first,set_second);
    struct Set set_inter= SET_intersection(set_first,set_second);
    struct Set set_diff= SET_difference(set_union,set_inter);
    
    struct Node *iter_list;
    
    
    for(iter_list =set->head; iter_list!=NULL; iter_list++)
    {
        printf(“Union Set : %d”, set_union[iter_list]);
        printf(“  “);
    }
    printf(“\n”);
    
    
    for(iter_list =set->head; iter_list!=NULL; iter_list++)
    {
        printf(“Union Set : %d”, set_inter [iter_list]);
        printf(“  “);
    }
    printf(“\n”);
    
    for(iter_list =set->head; iter_list!=NULL; iter_list++)
    {
        printf(“Union Set : %d”, set_diff [iter_list]);
        printf(“  “);
    }
    printf(“\n”);
    
    return 0;
}


