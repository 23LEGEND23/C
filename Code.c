# C
This is where I learn C programming and post it ig
#include <stdio.h>
#include <windows.h>

void cpy_prt(char a[], char b[]);

void main()
{
    char hello[]={"Hello World"};
    char bye[]={"Goodbye World"};
    char prt[20];

    cpy_prt(hello, prt);
    //cpy_prt(bye, prt);
}

void cpy_prt(char a[], char b[])
{
    int i;

    for (i=0; a[i]!=0; i++){
        b[i+1]=0;

        for (int ASCII = 97; ASCII<123 && b[i]!=a[i]; ASCII++){ //small letters
            b[i]=ASCII;
            printf("%s\n", b);
            Sleep(14);
        }
        for (int ASCII = 65; ASCII<91 && b[i]!=a[i]; ASCII++){ //big letters
            b[i]=ASCII;
            printf("%s\n", b);
            Sleep(14);
        }

        if (a[i]==' '){ //if space
            b[i]=' ';
            printf("%s\n", b);
            Sleep(14);
        }
    }
}
