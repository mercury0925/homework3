#include <stdio.h>
void print_one(int *ptr, int rows); // 함수 print_one 정의(포인터 사용하여 일차원 배열 출력)
int main()
{
    int one[] = {0, 1, 2, 3, 4}; // 정수형 배열 one 선언

    printf("one = %p\n", one); // 배열 one의 주소 출력 
    printf("&one = %p\n", &one); // 배열 one의 주소 출력
    printf("&one[0] = %p\n", &one[0]); // 배열 one의 첫 번째 요소의 주소 출력
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n"); // 함수 print_one 호출, 배열 one의 첫 번째 요소의 주소와 배열 크기 전달
    printf("------------------------------------\n");
    print_one(&one[0], 5); 

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n"); // 함수 print_one 호출, 배열 one의 이름과 배열의 크기 전달
    printf("------------------------------------\n");
    print_one(one, 5);

    return 0;
}

void print_one(int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */

    int i; // 정수형 변수 i 선언
    printf ("Address \t Contents\n"); 
    for (i = 0; i < rows; i++) // 배열의 크기만큼 반복
    printf("%p \t %5d\n", ptr + i, *(ptr + i)); // 포인터 ptr을 통해 배열의 주소와 내용 출력
    printf("\n");
}
