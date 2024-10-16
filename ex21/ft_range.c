#include <stdlib.h>
#include <stdio.h>
int *ft_range(int min, int max) {
   
    if (min >= max)
        return NULL;

    int size = max - min;

    int *range = (int *)malloc(size * sizeof(int));
    
    if (range == NULL)
        return NULL;
    int i = 0;

    while (i<size){
    range[i] = min +i;
    i++;
    }
    return range;
}

int main(void) {
    int *range = ft_range(2, 10);

    if (range != NULL) {
        int i = 0;
      
        while (i < 10 - 2) { 
            printf("%d ", range[i]);
            i++;  
        }
        printf("\n");

        free(range);
    } else {
        printf("NULL pointer returned!\n");
    }

    return 0;
}
