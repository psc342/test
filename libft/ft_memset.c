#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    i = 0;

    while (i < len)
    {
        *((char*)b + i) = c;
        i++;
    }
    return (b);
}

/*
b: 채우고자 하는 메모리의 시작 포인터(시작 주소)
c: 메모리에 채우고자하는 값. int형이지만 내부에서는 unsigned char(1 byte)로 변환되어서 저장된다.
len: 채우고자 하는 바이트의 수. 즉, 채우고자 하는 메모리의 크기
*/