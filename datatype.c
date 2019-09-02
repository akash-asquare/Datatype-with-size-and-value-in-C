#include <stdio.h>

int main()
{
    int a=-154;
    short int b=-154;
    unsigned short int c=154;
    unsigned int d=154;
    long int e=154;
    unsigned long int f=154;
    long long int g=-154;
    unsigned long long int h=154;
    signed char i='j';
    unsigned char j='k';
    float k=142.5454;
    double l=142.5454;
    long double m=142.5454;
    printf("\nSize of int: %d & Value is %d",sizeof(a),a);
    printf("\n\nSize of short int: %d & Value is %d",sizeof(b),b);
    printf("\n\nSize of unsigned short int: %d & Value is %hu",sizeof(c),c);
    printf("\n\nSize of unsigned int: %d & Value is %u",sizeof(d),d);
    printf("\n\nSize of long int: %d & Value is %ld",sizeof(e),e);
    printf("\n\nSize of unsigned long int: %d & Value is %lu",sizeof(f),f);
    printf("\n\nSize of long long int: %d & Value is %lld",sizeof(g),g);
    printf("\n\nSize of unsigned long long int: %d & Value is %llu",sizeof(h),h);
    printf("\n\nSize of signed char: %d & Value is %c",sizeof(i),i);
    printf("\n\nSize of unsigned char: %d & Value is %c",sizeof(j),j);
    printf("\n\nSize of float: %d & Value is %f",sizeof(k),k);
    printf("\n\nSize of double: %d & Value is %f",sizeof(l),l);
    printf("\n\nSize of long double: %d & Value is %Lf",sizeof(m),m);
    return 0;
}
