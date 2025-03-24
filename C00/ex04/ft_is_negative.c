/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:55:19 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/10 16:50:06 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write (1, "P", 1);
	}
	else if (n < 0)
	{
		write (1, "N", 1);
	}
}

/*
int main(void)

{
	ft_is_negative(26);
	ft_is_negative(-26);
	ft_is_negative(0);
	return(0);
}
*/
