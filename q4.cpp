#include<iostream>
using namespace std;
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
    cout<<"Eter size :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The repeating elemenst is :";
    int x=repeat(arr,n);
    cout<<x;


}