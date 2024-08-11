#include<stdio.h>
int main(){
    int n,a[100],i,j,t;
    printf("Enter the number of items:");
    scanf("%d",&n);
    printf("Enter the risk level(0-2):");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("Items sorted based on risk level:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    }