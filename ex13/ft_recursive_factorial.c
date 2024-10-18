/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:24:16 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/10/17 12:47:34 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main(void){
printf("5! = %d\n", ft_recursive_factorial(5)); // Expected output: 120int resul
printf("0! = %d\n", ft_recursive_factorial(0)); // Expected output: 1
printf("-3! = %d\n", ft_recursive_factorial(-3)); // Expected output: 0
printf("10! = %d\n", ft_recursive_factorial(10)); // Expected output: 3628800
return (0);
}*/
