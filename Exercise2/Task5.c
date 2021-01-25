 #include <stdio.h>

 int main(){
   int arr[10] = {1, 2, 3, 5, 6, 8, 9, 4, 12, 69};
   int loopCount = 0;
   int i = 0;
printf("Array in Order : \n");

for(loopCount = 0; loopCount < 10; loopCount++)
  printf("%d\t", arr[loopCount]);

printf("\nArray in Reverse Order: \n");
for(i = 9; i>=0; i--){
  printf("%d\t", arr[i]);

}

  return 0;
 }
