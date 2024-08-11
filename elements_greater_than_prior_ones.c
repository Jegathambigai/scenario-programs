#include<stdio.h>
int main(){
    int n,a[100],i,j,c=0,d=1;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[j]<a[i]){
                c=c+1;
            }
            
        }
        if(c==i){
                d=d+1;
        }
        c=0;
    }
    printf("Elements greater than all its prior ones:%d",d);
}