#include <stdio.h>

int slow_add(int x, int y){
    int sum =0;
    for(int i=0;i<y-x+1;i++){
        sum += x+i;
    }
    return sum;
}

int add(int x, int y){
    int sum=0;
    if((y-x)%2==1){
        sum = (x+y)*(y-x+1)/2;
    }
    else if((y-x)%2==0){
        sum = (x+y-1)*(y-x)/2+y;
    }
    return sum;
}

int main(void){
    int x, y, result1, result2;
    printf("처음 수:");
    scanf("%d",&x);
    printf("마지막 수");
    scanf("%d",&y);
    result1 = slow_add(x,y);
    result2 = add(x,y);
    
    printf("%d %d\n",result1,result2);

    return 0;
}