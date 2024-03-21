#include<stdio.h>
void shift(int  a,int b,int c){
    printf("After \n");
    
    for(int i=0;i<2;i++){
        
    int t1=a;
    int t2=c;
    a=b;
    b=t2;
    c=t1;
    printf("%d   %d    %d\n",a,b,c);
    }
    



}
int main(){
    int x,y,z;
    
printf("Enter 3 numbers : ");
    scanf("%d %d %d",&x,&y,&z);
    printf("Initial:\n");
   printf("%d   %d   %d\n",x,y,z);
    shift(x,y,z);
    

}