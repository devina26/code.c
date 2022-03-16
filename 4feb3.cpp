#include <stdio.h>
#define E =
int main()
{
int a,b,c;
#ifdef E
{
    c=2;
    printf("%d",c);
}
#else
{
    a E 2;
    b E 3;
    printf("%d%d",a,b);


}
#endif
return 0;
}
