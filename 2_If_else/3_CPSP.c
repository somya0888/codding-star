// Question- If cost price and selling price of an item is input thrugh the keyboard write a program to
// determine whether the seller has made profit or incurred loss also determine how much profit
// hr made or loss he incurred.
#include <stdio.h>
int main(){
    int cp;
    printf("Enter the cost prices :");
    scanf("%d",&cp);
    int sp;
    printf("Enter the selling prices :");
    scanf("%d",&sp);
    if(cp<sp){
        printf("profit");
    }
    if(cp>sp){
        printf("loss");
    }
    if(cp==sp){
        printf("no profit no loss");
    }
    return 0;
}