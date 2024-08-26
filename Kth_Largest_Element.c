#include<stdio.h>
int main(){
    int n,a[100],i,j,b,k,c=0,d[100],e=0;
    printf("Enter the Array Size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the Value of K:");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                b=a[i];
                a[i]=a[j];
                a[j]=b;

            }
        }
       
    }
    for(i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            d[e++]=a[i];
        }
    }
    for(i=e-1;i>=0;i--){
        c=c+1;
        if(k==c){
            printf("Kth Largest Element:%d",d[i]);
            break;
        }
       
    }
}