#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5]; // 크기가 5인 정수형 배열 list 선언
    int *plist[5] = {NULL,}; // 크기가 5인 포인터 배열 선언, 초기값을 NULL로 설정

    plist[0] = (int *)malloc(sizeof(int)); // plist의 첫 번째 요소에 동적 메모리 할당, 정수형 변수를 가리키는 포인터로 사용됨

    list[0] = 1; // list의 첫 번째 요소에 1 할당
    list[1] = 100; // list의 두 번째 요소에 100 할당

    *plist[0] = 200; // plist의 첫 번째 요소가 가리키는 메모리 주소에 200 저장

    printf("-----[HanKangmin] [2023078040]-----\n");
    printf("list[0] = %d\n", list[0]); // list의 첫 번째 요소 출력 (1)
    printf("&list[0] = %p\n", &list[0]); //list의 첫 번째 요소의 주소 출력
    printf("list = %p\n", list); // list 배열의 시작 주소 출력
    printf("&list = %p\n", &list); // list 배열 자체의 주소 출력

    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]); // list의 두 번째 요소 출력 (100)
    printf("&list[1] = %p\n", &list[1]); // list의 두 번째 요소의 주소 출력
    printf("*(list+1) = %d\n", *(list + 1)); // list의 두 번째 요소의 값 출력
    printf("list+1 = %p\n", list+1); // list의 두 번째 요소의 주소 출력

    printf("----------------------------------------\n\n");

    printf("*plist[0] = %d\n", *plist[0]); // plist의 첫 번째 요소가 가리키는 메모리 주소의 값 출력 (200)
    printf("&plist[0] = %p\n", &plist[0]); // plist의 첫 번째 요소의 주소 출력
    printf("&plist = %p\n", &plist); // plist 배열 자체의 주소 출력
    printf("plist = %p\n", plist); // plist 배열의 시작 주소 출력
    printf("plist[0] = %p\n", plist[0]); // plist의 첫 번째 요소가 가리키는 메모리 주소 출력
    printf("plist[1] = %p\n", plist[1]); // 초기값인 NULL을 가리킴
    printf("plist[2] = %p\n", plist[2]); // 초기값인 NULL을 가리킴
    printf("plist[3] = %p\n", plist[3]); // 초기값인 NULL을 가리킴
    printf("plist[4] = %p\n", plist[4]); // 초기값인 NULL을 가리킴

    free(plist[0]); // plist가 가리키는 동적 메모리 반납
}