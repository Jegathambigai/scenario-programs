#include<stdio.h>
int main(){
    int n,a[100],i,c=0,j;
    printf("Enter the Array Elements:");
    scanf("%d",&n);
    printf("Enter thye array Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Inversions Are:");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]&&i!=j){
                printf("%d,%d\n",a[i],a[j]);
                c=c+1;
            }
        }
    }
    printf("Inversion Counts:%d",c);
}