#include <stdio.h>
int main () {
    int t,c;
for (c = 1; c < 10; c++)
{
    for(t = 1; t < 10; t++) {
        printf ("%d x %d = %d",t,c,t*c);
        printf ("\n");
    }
}
    return 0;
}