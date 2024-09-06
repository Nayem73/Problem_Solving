#include<stdio.h>

int main() {
    freopen("in1", "r", stdin);
    freopen("out1", "w", stdout);



    char c = 'A';
    char *p, **q;

    p = &c; //*p = 'A'  ......... p = memory of c
    q = &p; //**q = 'A' ......... q = memory of p = memory of c

    **q = 'B'; //*p = 'B' ...... c = 'B'

    printf("%c\n", c);
    printf("%c\n", *p);
    printf("%c\n", **q);
}