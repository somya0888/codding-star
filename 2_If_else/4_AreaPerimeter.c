// given the length and breath of a rectangale the area of the rectangle
// is greater than its perimeter.

#include <stdio.h>
int main(){
    int l;
    printf("Enter the lenght :");
    scanf("%d",&l);
    int b;
    printf("Enter the breath :");
    scanf("%d",&b);
    int a = l*b;
    int p = 2*(l+b);
    if(a>b){
        printf("Area of greater than perimeter");
    }
    else{
        printf("area of not greater than perimeter");
    }
    
    return 0;
}