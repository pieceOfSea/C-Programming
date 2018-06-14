#include <stdio.h>

int * sort(int arr[]);
void print(int arr[]);
int main()
{
  int arr[] = {1,2,3,4,5};
  int *ip;
  ip = sort(arr);
  print(arr);
  return 0;
}

int * sort(int arr[]){
  int afterSort[5];
  for (int j = 0 ; j <4 ; j++){
  for(int i= 0;i<4;i++){
    if(arr[i] < arr[i+1]) {
       int mid = arr[i+1];
       arr[i+1] = arr[i];
       arr[i] = mid;
    }  
  } 
  }
  return arr;
}

void print(int arr[]){
  for(int i=0;i<5;i++){
    printf("%d\n",arr[i]);
  }
}
