// Q.  Represent a 2-variable polynomial using array. Use this representation to implement the addition of polynomials. 
// Also use a header-linked list to manage polynomials stored in an array that can help in efficiently handling dynamic polynomial terms, 
// allowing for easy addition and removal of terms without worrying about fixed array sizes.




















// #include <stdio.h>
// #include <stdlib.h>


// struct Term {
//     int coefficient;
//     int exponentX;
//     int exponentY;
//     struct Term* next;
// };


// struct Polynomial {
//     struct Term* head;
// };


// struct Term* createTerm(int coef, int expX, int expY) {
//     struct Term* newTerm = (struct Term*)malloc(sizeof(struct Term));
//     newTerm->coefficient = coef;
//     newTerm->exponentX = expX;
//     newTerm->exponentY = expY;
//     newTerm->next = NULL;
//     return newTerm;
// }


// struct Polynomial* createPolynomial() {
//     struct Polynomial* poly = (struct Polynomial*)malloc(sizeof(struct Polynomial));
//     poly->head = NULL;
//     return poly;
// }


// void insertTerm(struct Polynomial* poly, int coef, int expX, int expY) {
//     struct Term* newTerm = createTerm(coef, expX, expY);
//     if (poly->head == NULL || (poly->head->exponentX < expX || 
//         (poly->head->exponentX == expX && poly->head->exponentY < expY))) {
//         newTerm->next = poly->head;
//         poly->head = newTerm;
//     } else {
//         struct Term* current = poly->head;
//         while (current->next != NULL && (current->next->exponentX > expX || 
//                (current->next->exponentX == expX && current->next->exponentY > expY))) {
//             current = current->next;
//         }
//         newTerm->next = current->next;
//         current->next = newTerm;
//     }
// }


// struct Polynomial* addPolynomials(struct Polynomial* poly1, struct Polynomial* poly2) {
//     struct Polynomial* result = createPolynomial();
//     struct Term* term1 = poly1->head;
//     struct Term* term2 = poly2->head;

//     while (term1 != NULL && term2 != NULL) {
//         if (term1->exponentX == term2->exponentX && term1->exponentY == term2->exponentY) {
//             int sum = term1->coefficient + term2->coefficient;
//             if (sum != 0) insertTerm(result, sum, term1->exponentX, term1->exponentY);
//             term1 = term1->next;
//             term2 = term2->next;
//         } else if (term1->exponentX > term2->exponentX || 
//                   (term1->exponentX == term2->exponentX && term1->exponentY > term2->exponentY)) {
//             insertTerm(result, term1->coefficient, term1->exponentX, term1->exponentY);
//             term1 = term1->next;
//         } else {
//             insertTerm(result, term2->coefficient, term2->exponentX, term2->exponentY);
//             term2 = term2->next;
//         }
//     }

    
//     while (term1 != NULL) {
//         insertTerm(result, term1->coefficient, term1->exponentX, term1->exponentY);
//         term1 = term1->next;
//     }

    
//     while (term2 != NULL) {
//         insertTerm(result, term2->coefficient, term2->exponentX, term2->exponentY);
//         term2 = term2->next;
//     }

//     return result;
// }


// void printPolynomial(struct Polynomial* poly) {
//     struct Term* current = poly->head;
//     if (current == NULL) {
//         printf("0\n");
//         return;
//     }
//     while (current != NULL) {
//         printf("%d*x^%d*y^%d", current->coefficient, current->exponentX, current->exponentY);
//         current = current->next;
//         if (current != NULL) printf(" + ");
//     }
//     printf("\n");
// }

// int main() {
    
//     struct Polynomial* poly1 = createPolynomial();
//     struct Polynomial* poly2 = createPolynomial();

    
//     insertTerm(poly1, 3, 2, 2);
//     insertTerm(poly1, 4, 1, 1);

    
//     insertTerm(poly2, 5, 2, 2);
//     insertTerm(poly2, 2, 0, 0);

   
//     printf("Polynomial 1: ");
//     printPolynomial(poly1);
//     printf("Polynomial 2: ");
//     printPolynomial(poly2);

   
//     struct Polynomial* sum = addPolynomials(poly1, poly2);

//     printf("Sum: ");
//     printPolynomial(sum);

    
//     return 0;
// }









#include<stdio.h>

struct Node
{
    int coeff;
    int exp;
    struct Node* next;
};

struct Node* createHeaderNode(){
    struct Node * header=(struct Node*)malloc(sizeof(struct Node));
    
    
    if(!header){
        printf("Not Defined");
    }
    header->coeff=0;
    header->exp=-1;
    header->next=NULL;
    







    void addPolynomial(struct Node* p1, struct Node* p2){
        struct Node* temp1=p1->next;
        struct Node* temp2=p2->next;
        struct Node* result=createHeaderNode();
    }
}

int main(){
    struct Node* p1=createHeaderNode();
    struct Node* p2=createHeaderNode();
    
    printf("\nFOR POLYNOMIAL 1:");
    insert(p1,4,3);
    insert(p1,3,2);
    insert(p1,2,1);
    insert(p1,4,0);



    printf("\nFOR POLYNOMIAL 2:");
    insert(p1,4,3);
    insert(p1,3,2);
    insert(p1,2,1);
    insert(p1,4,0);
}

