/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:59:40 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/17 18:56:59 by aboutale         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)

{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()

{
	int i;
	char tab[]="ugo4lecrack";
	
	i  = ft_str_is_alpha(tab); 	
	ft_putstr(tab);
    printf("\n%d", i);	
	return(0);
}
*/	
