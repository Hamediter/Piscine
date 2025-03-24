/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:17:05 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/10 12:37:13 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}

/*
int main()

{
	int a = 10;
	int b = 5;
	int div;
	int mod;
	
	ft_div_mod(a, b, &div, &mod); ;
	printf("a= %d, b = %d\n", div , mod);
	return(0);
	
}
*/
