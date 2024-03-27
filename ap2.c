#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; // 크기가 5인 정수형 배열 list 선언
    int *plist[5]; // 크기가 5인 포인터 배열 plist 선언

    list[0] = 10; // list의 첫 번째 요소에 10 할당
    list[1] = 11; // list의 두 번째 요소에 11 할당

    plist[0] = (int*)malloc(sizeof(int)); // plist의 첫 번째 요소에 동적 메모리 할당
 
    printf("-----[Han Kangmin] [2023078040]-----\n");
    printf("list[0] \t= %d\n", list[0]); // list의 첫 번째 요소 출력 (10)
    printf("list \t\t= %p\n", list); // list 배열 시작 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); // list의 첫 번째 요소의 주소 출력 (list)
    printf("list + 0 \t= %p\n", list+0); // list의 시작 주소 출력 (&list[0])
    printf("list + 1 \t= %p\n", list+1); // list의 두 번째 요소의 주소 출력
    printf("list + 2 \t= %p\n", list+2); // list의 세 번째 요소의 주소 출력
    printf("list + 3 \t= %p\n", list+3); // list의 네 번째 요소의 주소 출력
    printf("list + 4 \t= %p\n", list+4); // list의 다섯 번째 요소의 주소 출력
    printf("&list[4] \t= %p\n", &list[4]);  // list의 다섯 번째 요소의 주소 출력 (list+4)

    free(plist[0]); // 동적 메모리 반납
}
