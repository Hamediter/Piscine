/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:08:03 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/24 10:21:34 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	if (nb > 0)
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}
/*
int main()

{
	printf("%d",ft_recursive_power(1,0));
	return(0);

}
*/
