#include<stdio.h>
int main(){
    int n,a[100],i,j,b=1;
    printf("Enter the Array Size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Product without self:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j){
                b=b*a[j];

            }
        }printf("%d ",b);
        b=1;
    }
}