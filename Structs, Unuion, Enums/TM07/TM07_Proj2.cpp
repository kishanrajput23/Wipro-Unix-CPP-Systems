#include <iostream>
using namespace std;
struct EMP 
{
   string emp_name;
   int emp_id;
   EMP *next,*prev;
};
struct EMP *head=NULL;
struct EMP *tail=NULL;
struct EMP *create_node(int id,string name) 
{
   struct EMP *t;
   t = new (struct EMP);
   t->emp_id = id;
   t->emp_name=name;
   t->next = NULL;
   t->prev= NULL;
   return t;
}
int Add_Node()
{
   int id;string name;
   cout<<endl<<"Enter the name of the employee: ";
   cin>>name;
   cout<<endl<<"Enter the id of the employee: ";
   cin>>id;
   struct EMP *t;
   t = create_node(id,name);
   if (head == tail && head == NULL) 
   {
      head = tail = t;
      head->next= tail->next = NULL;
      head->prev = tail->prev= NULL;
      return 1;
   } 
   else 
   {
      tail->next= t;
      t->prev=tail;
      tail = t;
      head->prev =tail;
      tail->next= head;
      return 2;
   }
}   
int Delete_Node()
{
   int id;
   EMP *ptr, *s;
   if (head == tail && head == NULL) 
   {
      return 0;
   }
   cout<<endl<<"Enter the id of employee to be deleted: ";
   cin>>id;
   if (id==head->emp_id) 
   {
      ptr=head;
      head=head->next;
      head->prev=tail;
      tail->next=head;
      free(ptr);
      return 1;
   }
   if (id==tail->emp_id) 
   {
      ptr=tail;
      tail=tail->prev;
      tail->next=head;
      head->prev=tail;
      free(ptr);
      return 3;
   }
   s=head->next;
   while(s!=tail)
   {
       if(s->emp_id==id)
       {
           ptr=s;
           s=s->next;
           s->prev=ptr->prev;
           ptr->prev->next=s;
           free(ptr);
           return 2;
       }
       s=s->next;
   }
   return 0;
}
int Search_Node()
{
    int id;
    cout<<endl<<"Enter the id of employee to search: "<<endl;
    cin>>id;
    EMP *t=head;
    while(t!=tail)
    {
        if(t->emp_id==id)
        {
            cout<<"Name of the employee is: "<<t->emp_name<<endl;
            return 1;
        }
        t=t->next;
    }
    if(t->emp_id==id)
    {
        cout<<"Name of the employee is: "<<t->emp_name<<endl;
        return 1;
    }
    return 0;
}
void Display_List()
{
    EMP *t=head;
    while(t!=tail)
    {
        cout<<"EMP Name = "<<t->emp_name<<endl;
        cout<<"EMP id = "<<t->emp_id<<endl;
        t=t->next;
    }
    cout<<"EMP Name = "<<t->emp_name<<endl;
    cout<<"EMP id = "<<t->emp_id<<endl;
}
void cleanup()
{
    while(head!=tail)
    {
        EMP *t=head;
        head=head->next;
        free(t);
    }
    free(head);
}
int main() 
{
   int c;
   while (1)
   {
      cout<<"1.Add Node"<<endl;
      cout<<"2.Delete Node"<<endl;
      cout<<"3.Search Node"<<endl;
      cout<<"4.Display List"<<endl;
      cout<<"5.Cleanup (delete all nodes)"<<endl;
      cout<<"6.Exit"<<endl;
      cout<<"Enter your option: ";
      cin>>c;
      int n;
      switch(c) 
      {
         case 1:
            n=Add_Node();
            if(n==1)
            cout<<"head node added."<<endl;
            if(n==2)
            cout<<"non-head node added."<<endl;
         break;
         case 2:
            n=Delete_Node();
            if(n==0)
            cout<<"Node to be deleted not found!"<<endl;
            if(n==1)
            cout<<"deleted head Node"<<endl;
            if(n==2)
            cout<<"deleted one of the middle Nodes"<<endl;
            if(n==3)
            cout<<"deleted tail Node"<<endl;
         break;
         case 3:
            n=Search_Node();
            if(n==0)
            cout<<"Node not found"<<endl;
            else
            cout<<"Node found and content displayed"<<endl;
         break;
         case 4:
            Display_List();
         break;
         case 5:
            cleanup();
         break;
         case 6:
            cleanup();
            exit(1);
         default:
            cout<<"Wrong choice!!!!!!!!"<<endl;
      }
   }
   return 0;
}
