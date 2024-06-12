#include<stdio.h>
void print_stars()
{
    for (int i=0; i<10; i++){
        printf("*");
        }
        printf("\n");
}
void print_stars2()
{
    for (int i=0; i<5; i++){
        printf("*\n");
    }
}
void print_stars3(int n)
{
    for (int i=0; i<n; i++)
        printf ("*\n");
}
int main() {
    for (int s=0; s<2; s++){
        print_stars();
    }
    print_stars2();
    printf("원하는 숫자를 하나 입력하세요:");
    scanf("%d", &n);
    print_stars3(n);
    printf()
    return 0;
}