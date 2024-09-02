#include<stdio.h>
int main(){
    int n,m,a[100],b[100],i,j,c=0,d=0;
    printf("Enter the Size of First Array:");
    scanf("%d",&n);
    printf("Enter the First Array Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the Size of Second Array:");
    scanf("%d",&m);
    printf("Enter the Second Array Elements:");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    i=0;
    j=0;
    printf("Sorted Elements Are:");
    while(i<n||j<m){
        if(a[i]<b[j]){
            printf("%d ",a[i]);
            c=c+1;
            i=c;
            j=d;
        }
        else{
            printf("%d ",b[j]);
            d=d+1;
            j=d;
        }
    }
}