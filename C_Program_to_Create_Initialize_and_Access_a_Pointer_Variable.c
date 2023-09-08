#include <stdio.h>

int main()
{
    char ch;
    char *pCh;
    pCh = &ch;
    ch = 'A';

    //access value and address of ch using variable ch
    printf("Value of character : %c\n",ch);
    printf("Address of character : %p\n",&ch);

    //access value and address of ch using pointer variable pCh
    printf("Value of character : %c\n",*pCh);
    printf("Address of character : %p",pCh);

   return 0;
}
