/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:21:31 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/17 20:22:24 by aboutale         ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}
/* 
int main()
 
{
     int i;
     char tab[]= {1,2} ;
 
     i  = ft_str_is_alpha(tab);
     ft_putstr(tab);
     printf("\n%d", i);
     return(0);
}
*/
