#include<stdio.h>

int binarysearch(int arr[], int n,int key){
int l=0,r=n-1,mid;
while(l<=r){
    mid=(l+r)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        l=mid+1;
    }
    else{
        r=mid-1;
    }
}
return -1;
}
int main(){
int a[6],i,key,pos;
printf("Enter your array element:\n");
for(i=0;i<6;i++){
 scanf("%d",&a[i]);
}
printf("your array a[]:\n");
for(i=0;i<6;i++){
    printf("%d ",a[i]);
}
printf("Search key :\n");
scanf("%d",&key);
pos=binarysearch(a,6,key);
if(pos!=-1){
    printf("key %d is found %d ",key,pos);
}
else
{
    printf("the key is not found");
}

return 0;
}
