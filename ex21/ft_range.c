/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:33:36 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/10/17 10:24:59 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		size;
	int		*range;
	int		i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
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
}*/
