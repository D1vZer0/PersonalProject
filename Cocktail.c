#include <stdio.h>

int main ()
{
    double abv, ml;
    double alch=0, srv=0;
    
    scanf ("%lf %lf", &abv, &ml);
    while (abv!=0 || ml!=0) {
        alch += (abv*ml)/100;
        srv += ml;
        scanf ("%lf %lf", &abv, &ml);
    }
    
    printf ("%.1lf%% vol.", (alch*100)/srv);
    
    return 0;
}
