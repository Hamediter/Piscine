/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:10:14 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/23 21:00:24 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char a)

{
    write(1, &a, 1);
}

void    ft_putnbr(int nb)

{
    if (nb < 0)
    {
        ft_putchar('-');
        if (nb == -2147483648)
        {
            write(1, "2147483648", 10);
            return ;
        }
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_putnbr (nb / 10);
        ft_putnbr (nb % 10);
    }
    else
        ft_putchar(nb + '0');
}
*/
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (0);
}
/*
int main()

{
	ft_putnbr(ft_fibonacci(6));
	return(0);

}
*/
