#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int comp (int a, int b) {
    if (a > b)
        return -1;
    else if  (a < b)
        return 1;
    else
        return 0;
}

int comp_s (char *a, char *b) {
    int det = 0;
    if (comp (strlen(a), strlen(b)) != 0)
        return comp(strlen(a), strlen(b));
    else {
        int i=0;
        while (a[i] == b[i] && i < strlen)
            i++;
            
        if (i == strlen)
            return 0;
        else
            return comp (a[i], b[i]);
    }
}
