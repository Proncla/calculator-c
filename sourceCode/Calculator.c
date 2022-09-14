#include <stdio.h>
#include <conio.h>

int calcPlus(int, int);
int calcMinus(int, int);
int calcDevide(int, int);
int calcRemind(int, int);
int calcMulti(int, int);

int calc()
{
        int v1,v2;
        char ope;
        printf("Example: [2 + 2]\n");
        printf("\t\t\tCalculator: ");
        scanf("%d %c %d", &v1,&ope,&v2);
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        switch (ope) {
        case '+':
                printf("\t\t\t%d %c %d %c %d",v1,ope,v2,'=',calcPlus(v1, v2));
                break;
        case '-':
                printf("\t\t\t%d %c %d %c %d",v1,ope,v2,'=',calcMinus(v1, v2));
                break;
        case '*':
                printf("\t\t\t%d %c %d %c %d",v1,ope,v2,'=',calcMulti(v1, v2));
                break;
        case '/':
                printf("\t\t\t%d %c %d %c %d",v1,ope,v2,'=',calcDevide(v1, v2));
                break;
        case '%':
                printf("\t\t\t%d %c %d %c %d",v1,ope,v2,'=',calcRemind(v1, v2));
                break;
        }
        getch();
        return 0;
}

int calcPlus(int v1, int v2)
{
        return v1 + v2;
}

int calcMinus(int v1, int v2)
{
        return v1 - v2;
}

int calcMulti(int v1, int v2)
{
        return v1 * v2;
}

int calcDevide(int v1, int v2)
{
        return v1 / v2;
}

int calcRemind(int v1, int v2)
{
        return v1 % v2;
}

int main(void) {
        return calc();
}
