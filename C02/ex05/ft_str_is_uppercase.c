/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:19:19 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/17 20:22:01 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
/*
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/* 
int main()
 
{
     int i;
     char tab[]="UPLIOK";
 
     i  = ft_str_is_alpha(tab);
     ft_putstr(tab);
     printf("\n%d", i);
     return(0);
}
*/
