// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #define max 5
// int arr[max]={2,9,10,30,52};
// char *str[max];
// void int_to_str()
// {
//     int i;
//     for(i=0;i<max;i++)
//     {
//         str[i]=(char*)malloc(12*sizeof(char));
//         if(str[i]==NULL)
//         {
//             printf("memory not allocated");
//             return;
//         }
//         sprintf(str[i],"%d",arr[i]);
//     }
//      for (i = 0; i < max - 1; i++) {
//         for (int j = i + 1; j < max; j++) {
//             char temp1[10], temp2[10];
//             sprintf(temp1, "%s%s", str[i], str[j]);
//             sprintf(temp2, "%s%s", str[j], str[i]);
//             if (strcmp(temp1, temp2) < 0) { 
//                 char *temp = str[i];
//                 str[i] = str[j];
//                 str[j] = temp;
//             }
//         }
// }}
// void display()
// {
//     int i;
//     printf("\n string is:\n");
//     printf("'");
//     for(i=0;i<max;i++)
//     {
//         printf("%s",str[i]);
//     }
//     printf("'");
// }
// void main()
// {
 
//     int_to_str();
//     display();
// }


// C program to arrange given numbers to form 
// the biggest number using custom comparator sort
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

// Custom comparator to compare concatenated strings
int myCompare(const void* a, const void* b) {
    char ab[20], ba[20];
    sprintf(ab, "%d%d", *(int*)a, *(int*)b);
    sprintf(ba, "%d%d", *(int*)b, *(int*)a);
    return strcmp(ba, ab);
}

// Function to return the largest concatenated number
void findLargest(int arr[], int n) {
    qsort(arr, n, sizeof(int), myCompare);

    // Handle the case where all numbers are zero.
    if (arr[0] == 0) {
        printf("0");
        return;
    }

    // Concatenate the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
}

int main() {
    int arr[MAX] = { 3, 30, 34, 5, 9 };
    findLargest(arr, MAX);
    return 0;
}