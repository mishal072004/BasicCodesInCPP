#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,b=0,a[4];
    scanf("%d",&n);
    //Complete the code to calculate the sum of the five digits on n.

    int sum=0;
    while(n>0){
        int a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("%d",sum); // op
    return 0;
}





