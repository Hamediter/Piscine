/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:53:08 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/23 21:11:06 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorielle;
	int	i;

	factorielle = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{	
		factorielle = factorielle * i;
		i++;
		if (i == nb)
		{
			factorielle = factorielle * i;
		}
	}	
	return (factorielle);
}
/*
#include <stdio.h>

int main()

{	
	printf("%d",ft_iterative_factorial(5));
	return(0);
}
*/
