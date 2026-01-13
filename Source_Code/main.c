#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "maxmin.h"
#define N 100

int main(){
int array_fre;
int choice;
int min_result;
int max_result;
int inputed_array[N]= {0};
char repetition[N];


printf("This is a project helps to bring out \n the largest number and the smallest number from a given array of numbers\n");


printf("How many numbers do you want to work on (i.e frequecy): \t");
scanf("%d", &array_fre);

for(int i = 0; i < array_fre; i++){
    printf("Enter number %d of the array: \t", i+1);
    scanf("%d", &inputed_array[i]);
}

for(int k = 3; k >= 1; k--){
    printf("\n%d", k);
    sleep(1);
}

printf("\n Successfully Saved!!!");
printf("\n\n");

do{

int length = sizeof(inputed_array)/sizeof(inputed_array[0]);

printf("This are the program available on this project\n");
printf("\n 1. Display the minimum number");
printf("\n 2. Display the maximum number");
printf("\n 3. Display both the maximum and the minimum number");

printf("\n\n Enter the number of your choice: \t ");
scanf("%d", &choice);

min_result = minimum_finder(inputed_array, length);
max_result = maximum_finder(inputed_array, length);

if(choice == 1){
printf("\n Out of the array of numbers you gave, The smallest number is %d", min_result);
}
else if(choice == 2){
printf("\n Out of the array of numbers you gave, The highest number is %d", max_result);
}
else if(choice == 3){
    printf("\n Highest number is %d \t Smallest number is %d", max_result, min_result);
}
else{
    printf("You inputed an incorrect input, Try again");
}


printf("\n Do you wish to continue(yes/no): \t");
getchar();
fgets(repetition, N, stdin);
repetition[strcspn(repetition, "\n")] = 0;
}while ((strcmp(repetition, "yes") == 0) || (strcmp(repetition, "YES") == 0));

printf("\n Nice to see you on-board today");
return 0;
}
