/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:22:45 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/14 18:34:04 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

#include <stdio.h>
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}
/*
int	main(void)
{
	int	test = 15;
	int* pointeur = &test;

	int	test2 = 4;
	int* pointeur2 = &test2;

	ft_ultimate_div_mod(pointeur, pointeur2);

	printf("%d\n%d", test, test2);
	return (0);
}
*/
