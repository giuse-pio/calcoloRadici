#include <stdio.h>
#include <math.h>
int main(void)//sqrt(double x)
{
    int a,b,c, x1=0, x2=0;
    printf("inserisci i numeri dell'equazione: ");
    scanf("%d %d %d",&a,&b,&c);
    int delta=0;
    delta = b*b - 4*a*c;
    if (delta < 0) {
        printf("il delta e' negativo\n");
    }
    else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
    }
     printf("x1 = %d,x2 = %d",x1, x2);

}
