#include<stdio.h>
int main(){
    int n, a[100],b[100],i,j;
    printf("Enter the number of Intervals:");
    scanf("%d",&n);
    printf("Enter the intervals:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    printf("Merged intervals are:\n");
   for(i=0;i<n;i++){
    if(b[i]>a[i+1]){
        printf("%d %d\n",a[i],b[i+1]);
        i=i+1;
    }
    else{
        printf("%d %d\n",a[i],b[i]);
    }
   }
}