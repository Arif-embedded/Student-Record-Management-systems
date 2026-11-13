
#include"student.h"
void addnewrecord(sll **ptr)
{
    sll *new;
    int r=1;
    new=malloc(sizeof(sll));
    printf("enter name & marks:\n");
    scanf("%s %f",new->name,&new->percentage);
    if(*ptr==0)
    {
        new->rollno=r;
        new->next=*ptr;
        *ptr=new;
    }
    else
    {
        sll *pos=*ptr;
        while(pos!=0 && pos->rollno==r)
        {
            r++;
            pos=pos->next;
        }
        new->rollno=r;
        pos=*ptr;
        while((pos->next!=0) && (new->rollno > pos->next->rollno))
            pos=pos->next;
        new->next=pos->next;
        pos->next=new;
    }
}
