#include<stdio.h>
int main(){
    int n,i,a[100],c=0,d=0,j,k;
    printf("Enter the size of an Array:");
    scanf("%d",&n);
    printf("Enter the Array Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(n==1){
        printf("Index Element:%d",a[0]);
        return 0;
    }
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
           c=c+a[j];
        }
         for(k=i+1;k<n;k++){
               d=d+a[k] ;
            }
            if(c==d){
                printf("Index Element:%d",a[i]);
                break;
            }
            else if(i==n-1&&c!=d){
                printf("-1");
            }
            c=0;
            d=0;

    }
}