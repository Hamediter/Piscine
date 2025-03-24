/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaiti <lsaiti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:47:51 by lsaiti            #+#    #+#             */
/*   Updated: 2024/09/10 13:51:15 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c);

int	execpt(int x, int y)
{
	if (x > 2147483647 || x < 1 || y > 2147483647 || y < 1)
	{
		write(1, "Les chiffres doivent etre compris entre 1 et 2147483647", 55);
		return (-1);
	}
	else if (x == -2147483647 || y == -2147483647)
	{
		write(1, "Les chiffres doivent etre compris entre 1 et 2147483647", 55);
		return (-1);
	}
	return (0);
}

void	boucle(int x, int y, int compteury)
{
	int	compteurx;

	compteurx = 1;
	while (compteurx <= x)
	{
		if (compteury == 1 && (compteurx == 1 || compteurx == x))
			ft_putchar ('A');
		else if (compteury == y && (compteurx == 1 || compteurx == x))
			ft_putchar ('C');
		else if (compteury == 1 || compteury == y || compteurx == 1
			|| compteurx == x)
			ft_putchar ('B');
		else 
			ft_putchar (' ');			
		compteurx++;
	}
}

void	rush(int x, int y)
{
	int	compteury;

	if (execpt(x, y) == -1)
		return ;
	compteury = 1;
	while (compteury <= y)
	{
		boucle(x, y, compteury);
		ft_putchar ('\n');
		compteury++;
	}
}
