#include <stdio.h>

int main(void){
  int arr[4];
  int x = 0;
  int nTemp;
  int counter = -1;
  int iteration = 0;
  while(x == 0){ counter++;
    if(counter > 3){
      counter = 0;
      iteration++;
    }
    printf("enter number:");
    scanf(" %d", &nTemp);
    if(nTemp == 0){
      x = 1;
    }
    else{
      arr[counter] = nTemp;
    }
    if( iteration > 0){
      for(int i = 0; i < 4; i++){
        printf("%d  ", arr[i]);
      }
      printf("\n");
    }
    else if(iteration == 0){
      for(int i = 0; i <= counter; i++){
        printf("%d  ", arr[i]);
      }
      printf("\n");
    }
  }
  
}

