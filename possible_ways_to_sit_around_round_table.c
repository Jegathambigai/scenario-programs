#include<stdio.h>
int main(){
    int n,i,a,p=1;
    printf("Enter the no. of members:");
    scanf("%d",&n);
    
    a=n-2;
    for(i=1;i<=a+1;i++){
        p=p*i;
    }
printf("Number of ways %d members can sit around a round table: %d",n,p*2);
}