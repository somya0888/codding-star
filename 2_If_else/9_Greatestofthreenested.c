// 2. Question- Take postive integer input and tell if it is divisible by 5 and 3.
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 1st number :");
    scanf("%d",&a);
    printf("Enter the 1st number :");
    scanf("%d",&b);
    printf("Enter the 1st number :");
    scanf("%d",&c);
    if(a>b){
        if(a>c) printf("%d is greatest",a);
        else printf("%d is greatest",b);
    }
    else{
        if(b>c) printf("%d is greatest",b);
    }
    return 0;
}