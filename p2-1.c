#include <stdio.h>
#define MAX_SIZE 100

float sum1(float list[], int); // 함수 sum1 선언
float sum2(float *list, int); // 함수 sum2 선언
float sum3(int n, float *list); // 함수 sum3 선언

float input[MAX_SIZE], answer; // 전역변수 배열 input과 answer 선언
int i; // 전역변수 i 선언
void main(void)
{
    for(i=0; i < MAX_SIZE; i++) // 0부터 MAX_SIZE-1까지의 i의 값을 배열 input에 할당
    input[i] = i;

    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // 입력 배열의 시작 주소 출력

    answer = sum1(input, MAX_SIZE); // sum1 함수 호출하고 결과 값을 할당
    printf("The sum is: %f\n\n", answer); // 결과값 출력

    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // 입력 배열의 시작 주소 출력

    answer = sum2(input, MAX_SIZE); // sum2 함수 호출하고 결과 값을 할당
    printf("The sum is: %f\n\n", answer); // 결과값 출력

    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // 입력 배열의 시작 주소 출력

    answer = sum3(MAX_SIZE, input); // sum3 함수 호출하고 결과 값을 할당
    printf("The sum is: %f\n\n", answer); // 결과값 출력
}

float sum1(float list[], int n) // 배열 list와 배열 요소의 개수 n을 받아서 합을 계산하는 함수
{
    printf("list \t= %p\n", list); // 배열의 시작 주소 출력
    printf("&list \t= %p\n\n", &list); // 배열의 주소를 가리키는 포인터의 주소 출력
    int i; // 지역변수 i 선언
    float tempsum = 0; // 변수 tempsum 0으로 초기화
    for(i = 0; i < n; i++) // i가 0부터 시작하여 n-1까지 반복
        tempsum += list[i]; // 변수 tempsum에 배열의 각 요소들의 합을 계산한다
    return tempsum; // for문이 끝나면 tempsum을 반환한다
}

float sum2(float *list, int n) // 포인터 list와 요소의 개수 n을 받아서 합을 계산하는 함수
{
    printf("list \t= %p\n", list); // 배열의 시작 주소 출력
    printf("&list \t= %p\n\n", &list); // 포인터 변수 list의 주소 출력

    int i; // 변수 i 선언
    float tempsum = 0; // 변수 tempsum 0으로 초기화
    for(i = 0; i < n; i++) // i를 0부터 n-1까지 반복
        tempsum += *(list + i); // 배열에서 i번째 요소를 가리키는 포인터가 가리키는 값을 tempsum에 더함
    return tempsum; // tempsum 반환
}

/* stack variable reuse test */
float sum3(int n, float *list) // 지역 변수 n과 포인터 list(배열의 주소를 나타냄)를 받아서 합을 계산하는 함수
{
    printf("list \t= %p\n", list); // 배열의 시작 주소 출력
    printf("&list \t= %p\n\n", &list); // 포인터 변수 list의 주소 출력
    int i; // 변수 i 선언
    float tempsum = 0; // 변수 tempsum 0으로 초기화
    for(i = 0; i < n; i++) // i가 0부터 n-1까지 반복
      tempsum += *(list + i); // 배열에서 i번째 요소를 가리키는 포인터가 가리키는 값을 tempsum에 더함
    return tempsum; // tempsum 반환
}
