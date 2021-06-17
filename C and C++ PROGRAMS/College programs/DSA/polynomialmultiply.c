#include<stdio.h>
#include<stdlib.h>

struct node
{
    int coeff, exp;
    struct node* next;
};

struct node* getnode(int c, int e)
{
   struct node* q;
   q = (struct node*)malloc(sizeof(struct node));
   q->coeff = c;
   q->exp = e;
   q->next == NULL;
   return q;
}
struct node *polymake(){
    struct node *head,*p;
    head = NULL;
    int n,c,e;

    printf("\nEnter the number of terms: ");
    scanf("%d", &n);
    printf("Enter coefficient and exponent of each term: \n");
    for ( int i=1; i<=n ;i++){
        scanf("%d%d", &c, &e);
        p = getnode(c,e);

        if(head == NULL)
            head = p;
        else{
            p->next = head;
            head=p;
        }
    }
    return head;
}

void display(struct node *poly){
    if(poly == NULL)
    printf("\nEmpty\n");
    else{
        struct node *q;
        q = poly;
        printf("\nPOLYNOMIAL: ");
        while(q->next != NULL){
            if(q->coeff == 0)
            {

            }
            else
                {
                    printf("%dx%d ", q->coeff , q->exp);
                }
                q = q->next;
		if (q->coeff>0){
			printf("+ ");
		}
        }
        printf("%dx%d", q->coeff, q->exp);
        printf("\n");
    }
}

struct node *insertend(struct node *res_poly, int res_c, int res_x){
    struct node *p;
    p = getnode(res_c, res_x);

    if(res_poly == NULL)
        res_poly = p;
    else{
        struct node *q;
        q = res_poly;
        while(q->next!=NULL)
            q=q->next;
        q->next=p;

    }

    return res_poly;

}

struct node *removeDuplicates(struct node *res_poly)
{
    struct node *p, *q, *temp;
    p = res_poly;
    while (p != NULL && p->next != NULL) {
        q = p;
        while (q->next != NULL) {
            if (p->exp == q->next->exp) {
                p->coeff = p->coeff + q->next->coeff;
                temp = q->next;
                q->next = q->next->next;
                free(temp);
            }
            else
                q = q->next;
        }
        p = p->next;
    }
    return res_poly;
}

struct node *multipoly(struct node *poly1, struct node *poly2){
    struct node *head;
    head = NULL;

    if(poly1 == NULL)
        return poly2;
    if(poly2 == NULL)
        return poly1;

    struct node* res_poly, * p1, * p2;
    int res_c,res_x;
    res_poly = NULL;

    for(p1=poly1; p1!=NULL; p1=p1->next){
        for(p2=poly2; p2!=NULL; p2=p2->next){
            res_c = p1->coeff * p2->coeff;
            res_x = p1->exp + p2->exp;
            res_poly = insertend(res_poly, res_c, res_x);
        }
    }
    return res_poly;

}

int main(){
    struct node *poly1, *poly2, *respoly, *redpoly;
    poly1=poly2= respoly=NULL;
    printf("\nPolynomial 1\n");
    poly1 = polymake();
    display(poly1);

    printf("\nPolynomial 2\n");
    poly2 = polymake();
    display(poly2);

    respoly=multipoly(poly1, poly2);
    printf("\nResultant polynomial");
    display(respoly);

    redpoly=removeDuplicates(respoly);
    printf("\nReduced polynomial");
    display(redpoly);
    return 0;

}
