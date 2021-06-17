 #include<stdio.h>
#include<stdlib.h>

struct node{
    int ele;
    struct node* next;
};

struct node* getnode(int ele)
{
   struct node* p;
   p = (struct node*)malloc(sizeof(struct node));
   p->ele = ele;
   p->next = p;
   return p;
}

struct node* insert_end(struct node *h,int d)
{  
   struct node *p;
   p = getnode(d);
   if(h == NULL)
   {
       h = p;
   }
   else
   {
       p->next = h->next;
       h->next = p;
       h = p;
   }
   return h;
    
}
struct node* store(long long int i)
{  
    int digit;
    struct node* h ;
    h = NULL;
   while(i != 0)
   {
      digit = i%10;
      i = i/10;
      h = insert_end(h,digit);
   }
   return h;
}
struct node* insert_beg(struct node* h,int d)
{
    struct node *p;
    p = getnode(d);
    if(h == NULL)
    {
        h = p;
    }
    else
    {
        p->next = h->next;
        h->next = p;
    }
    return h;
}
struct node* addlong(struct node* h1,struct node* h2)
{
  struct node *h3,*p,*q;
  int sum,carry;
  for(p= h1->next,q=h2->next;;p=p->next)
  {   
    if(q == NULL)
    {
        sum = p->ele;
    }
    else
    {
     sum = p->ele + q->ele;
    }
     carry = sum / 10;
     sum = sum % 10;
     p->next->ele += carry;
     h3 = insert_beg(h3,sum);
     
     if(q == h2)
     {
         q = NULL;
     }
     if(p == h1)
     {   
         break;
     }
     if(q!= NULL)
     {
     q = q->next;
     }
  }
  return h3;
}
int main()
{  
   long long int i1,i2; 
   struct node *h1,*h2,*h3,*p;
   h1 = h2 = h3 = NULL;
   printf("Enter the long integer 1\n");
   scanf("%lld",&i1);
   getchar();
   printf("Enter the second long integer\n");
   scanf("%lld",&i2);
   getchar();
   if(i1 > i2)
   {
       h1 = store(i1);
       h2 = store(i2);
   }
   else
   {
       h1 = store(i2);
       h2 = store(i1);
   }
   
   h3 = addlong(h1,h2);
   

   printf("The result is ");
   for(p = h3->next;;p= p->next)
   {   
      printf("%d",p->ele);
      if(p == h3)
      {
          break;
      }
   }
    return 0;
}