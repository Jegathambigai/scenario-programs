#include<stdio.h>
int main(){
    int i,n,a[100],c=0,d=0,e=0,j;
    printf("Enter the Array Size:");
    scanf("%d",&n);
    printf("Enter the Array Elements:");
    for(i=0;i<n-1;i++){
    scanf("%d",&a[i]);
    }j=0;
    for(i=a[0];i<=a[n-2];i++){
        c=c+i;
        if(a[j++]==i){
            e=e+1;
        }
    }
    if(e==n-1){
        printf("Missing Element:%d",a[0]-1);
        return 0;
    }
    for(i=0;i<n-1;i++){
        d=d+a[i];
    }
    printf("The Missing Elements:%d",c-d);
}