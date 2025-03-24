/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:02:22 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/23 21:13:30 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result = result * nb ;
		power--;
	}
	return (result);
}

//#include <stdio.h>
/*
int main()

{
	
	printf("%d",ft_iterative_power(2,5));
	return(0);

}
*/
