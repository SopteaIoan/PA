#ifndef ceva
#define ceva

struct node
{
    int data;
    node *next=0;
    node *prev=0;
};

class ldi
{
    public:
        node *head;
        ldi()
        {
            head=0;
        }
        void insereaza(int value, int pos)
        {
            node *p=head;
            node *newnode=new node;
            newnode->data=value;
            newnode->prev=0;
            newnode->next=0;
            if(head==0)
            {
                head=newnode;
            }
            else if(pos==0)
            {
                newnode->next=head;
                head->prev=newnode;
                head=newnode;
            }
            else
            {
                int i=0;
                while(i<pos-1 && p->next!=0)
                {
                    i++;
                    p=p->next;
                }
                if(p->next!=0)
                {
                    newnode->next=p->next;
                    p->next->prev=newnode;
                    p->next=newnode;
                    newnode->prev=p;
                }
                else
                {
                    p->next=newnode;
                    newnode->prev=p;
                }
            }
        }
        void afisare()
        {
            node *p=head;
            while(p!=0)
            {
                std::cout<<p->data<<" ";
                p=p->next;
            }
            std::cout<<"\n";
        }
};

#endif