#include<stdio.h>
int main(){
    int n,m,a[100],b[100],i,j,d[100],e=0,f;
    float c;
    printf("Enter the First Array Size:");
    scanf("%d",&n);
    printf("Enter the first Array Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the Second Array Size:");
    scanf("%d",&m);
    printf("Enter the Second Array Elements:");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    i=0;
    j=0;
    while(i<n||j<m){
        if(a[i]<b[j]){
            d[e++]=a[i];
            i=i+1;
        }
        else{
            d[e++]=b[j];
            j=j+1;
        }
    }
f=(n+m)/2;
    if((n+m)%2==0){
        
        c=(float)(d[f-1]+d[f])/2;
        printf("Median Element:%f",c);

    }
    else{
        printf("Median Element:%d",d[f]);
    }

}