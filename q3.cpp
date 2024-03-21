#include<iostream>
using namespace std;
void reverse(int *arr,int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(*(arr+s),*(arr+e));
        s++;
        e--;
    }

}
int main(){
    int n;
    int arr[100000];
   printf("Enter size :");
scanf("%d",&n);
printf("Enter the elements :");
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
printf("Before:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("After:\n");
    reverse(arr,n);
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }





}