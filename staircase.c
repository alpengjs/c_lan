// Staircase  

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, ia, ib, tmp; 
    scanf("%d",&n);
    
    tmp = n; 
    for (ia = 0; ia < n; ia++) {
        for (ib = 0; ib < n; ib++){
            if ((ib + ia + 1) >= n ) 
                printf("#");
            else
                printf(" ");

        }
        printf("\n"); 
    }
    
    
    return 0;
}