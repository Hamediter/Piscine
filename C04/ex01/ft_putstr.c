/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:31:46 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/21 12:43:36 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putstr(char *str)

{
	while (*str)
		write(1, str++, 1);
}
/*
int main()

{
	char tab[8] = "guytesou";
	ft_putstr(tab);
	return(0);





}
*/
