// 1. Quetion- Take postive integer input and tell if it is divisible by 5 or not.
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     if(n%5==0){
//         printf("Divisible by 5");
//     }
//     else{
//         printf("not Divisible by 5");
//     }
//     return 0;
// }


// 2. Quetion- Any year is input through the keyboard write a program to
// determine whether the year is a leap year or not considering leap year
// occurs after every 4 year.
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     if(n%4==0){
//         printf("leap year");
//     }
//     else{
//         printf("not leap year");
//     }
//     return 0;
// }



// 3. Question- Take integer input and print the absolut value of that integr.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n<0){
        n = n *(-1);
    }
    printf("The absulote of the value :%d",n);
    return 0;
}