#include<stdio.h>
int main(){

int n ,i;
printf("Enter the valu of n:");
scanf("%d",&n);
int A[n],key;
     for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
         }
         printf("Array A:");
         for(int i=0;i<n;i++){

            printf("%d ",A[i]);
         }
         //search array valu
         printf("search key:\n");
         scanf("%d",&key);

         //linear scarch algorithm
         for(i=0;i<n;i++){
            if(A[i]==key){
                printf("Found key %d\n",i);
                break ;
            }
         }
      if(i==n){
        printf("Not Found");
      }

return 0;

}
