// 1. Question- Take postive integer input and tell if it is divisible by 5 and 3.
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     if(n%5==0 && n%3==0){
//         printf("Divisible");
//     }
//     else{
//         printf("not Divisibl");
//     }
//     return 0;
// }



// 2. Question- Take postive integer input and tell if it is divisible by 5 or 3.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        printf("Divisible");
    }
    else{
        printf("not Divisibl");
    }
    return 0;
}