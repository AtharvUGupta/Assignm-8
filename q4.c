#include<stdio.h>

int repeat(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(arr+i)==*(arr+j)){
                return *arr+i;
            }
        }
    }
}
int main(){
    int n;
    int arr[100000];
   printf("Enter size ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       scanf("%d",arr[i);
    }

   printf("The repeating element is :");
    int x=repeat(arr,n);
    printf("%d",x);


}
