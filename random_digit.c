#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int a[10];
    for(int i=1;i<11;i++){
        a[i]=i; 
    } 


int k;
for(int j=10;j>1;j--){
    int temp;
time_t t;
srand((unsigned) time(NULL));
    k=random()%j;
    temp=a[k];
    a[k]=a[j];
    a[j]=temp;
printf("%d",a[j]);

}
printf("%d",a[1]);
}
