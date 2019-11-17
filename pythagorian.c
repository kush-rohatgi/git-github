#include <stdio.h>

int main() {
    int a,b,c,temp=0;
    printf("through this program we will findout whether a given triples are pythagorean or not");
    printf("\nenter the sides of triangle:\n");
    printf("\n\nenter the first value:\t");
    scanf("%d",&a);
    printf("\nenter the second value:\t");
    scanf("%d",&b);
    printf("\nenter the second value:\t");
    scanf("%d",&c);
    temp=((a*a)+(b*b)==(c*c))?1:0;
    temp=((a*a)+(c*c)==(b*b))?2:temp;
    temp=((c*c)+(b*b)==(a*a))?3:temp;
   /* else
    {
        temp=4;
    }*/
    switch(temp)
    {
        case 1:
        {
            printf("yes it is pythagorian triples\n");
            printf("%d^2+%d^2=%d^2",a,b,c);
            break;
        }
        case 2:
        {
            printf("yes it is pythagorian triples\n");
            printf("%d^2+%d^2=%d^2",a,c,b);
            break;
        }
        case 3:
        {
            printf("yes it is pythagorian triples\n");
            printf("%d^2+%d^2=%d^2",c,b,a);
            break;
        }
        case 0:
        {
            printf("no it is not a pythagorian triple");
            break;
        }
        default:
        {
            printf("something is not right");
        }
    }
	return 0;
}
