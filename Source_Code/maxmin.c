#include "maxmin.h"
#define N 100


int minimum_finder(int array[N], int length){
    int smallest_number = array[0];

for(int i = 0; i < length; i++){
  if(array[i] == 0){
        continue;
        }else if (array[i] < smallest_number){
    smallest_number = array[i];
    }

    }
return smallest_number;
}


int maximum_finder(int array[N], int length){
    int highest_number = array[0];
for(int i = 1; i < length; i++){
  if(array[i] > highest_number){
    highest_number = array[i];
  }
}
return highest_number;
}
