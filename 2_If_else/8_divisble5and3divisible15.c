// 1. Question- Take postive integer input and tell if it is divisible by 5 or 3 but not divisble by 15.
// #include <stdio.h>
// int main(){
//     int x;
//     printf("Enter the 1st number :");
//     scanf("%d",&x);
//     if((x%5==0 || x%3==0) && x%15!=0){
//         printf("The number divisible");
//     }
//     else{
//         printf("The number is not divisuble");
//     }
//     return 0;
// }


// 2. Question- Take postive integer input and tell if it is divisible by 5 and 3.
#include <stdio.h>
int main(){
    int x;
    printf("Enter the 1st number :");
    scanf("%d",&x);
    if(x%5==0){
        if(x%3==0){
            printf("The number is divisible by 5 and 3");
        }
        else{
        printf("The number is not divisuble b 5 and 3");
        }
    }
    else{
        printf("The number is not divisuble by 5 and 3");
    }
    return 0;
}