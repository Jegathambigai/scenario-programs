#include<stdio.h>
int main(){
    int n,a[100],i,l,r,b,c,maxarea=0;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    l=0;
    r=n-1;
    printf("Enter the line heights:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(l<r){
        if(a[l]<a[r]){
            b=a[l];
        }
        else{
            b=a[r];
        }
        c=b*(r-l);
        if(c>maxarea){
            maxarea=c;
        }
        if(a[l]<a[r]){
            l=l+1;
        }
        else{
            r=r-1;
        }
        
    }
    printf("Maximum Area: %d",maxarea);
    
}