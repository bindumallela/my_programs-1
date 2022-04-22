#include<stdio.h>
void main()
{
        int a[] = {22,33,55,66,77,88,99};
        int *p;
        p = a;
        printf("%d\n%p\n%d\n%d\n%d\n",++p,p++,*p++,++p,*p);
        

}
