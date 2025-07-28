// 1. Question- Take 3 postive integer input and print the greatest of by them.
// #include <stdio.h>
// int main(){
//     int x;
//     printf("Enter the 1st number :");
//     scanf("%d",&x);
//     int y;
//     printf("Enter the 2nd number :");
//     scanf("%d",&x);
//     int z;
//     printf("Enter the 3rd number :");
//     scanf("%d",&z);
//     if(x>y && x>z){
//         printf("%d",x);
//     }
//     if(y>x && y>z){
//         printf("%d",y);
//     }
//     if(z>x && z>y){
//         printf("%d",z);
//     }
//     return 0;
// }


// 2. Question- Take 3 postive integer input and print the greatest of by them.
#include <stdio.h>
int main(){
    int x;
    printf("Enter the 1st number :");
    scanf("%d",&x);
    int y;
    printf("Enter the 2nd number :");
    scanf("%d",&x);
    int z;
    printf("Enter the 3rd number :");
    scanf("%d",&z);

    if(x>y && x>z){
        printf("%d",x);
    }
    if(y>x && y>z){
        printf("%d",y);
    }
    if(z>x && z>y){
        printf("%d",z);
    }
    return 0;
}