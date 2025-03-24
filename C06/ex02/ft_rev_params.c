/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:10:31 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/21 20:45:04 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc -1;
	while (i >= 1)
	{	
		ft_putstr(argv[i]);
		i = i - 1;
		write (1, "\n", 1);
	}
	return (0);
}
/*
int main (int argc, char **argv)

{
	int i;
	i = 0;
	
	(void)argc;
	while(argv[1][i])
	{
		write(1,&argv[1][i],1); 
		i++;
	}
	return(0);

}
*/
