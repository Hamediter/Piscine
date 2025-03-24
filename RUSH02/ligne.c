/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ligne.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:41:08 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/08 18:45:07 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>

void ligne(int x,int y)
{
	int lignex;
	int colonney;

	lignex = 0;
	colonney = 0;

	while(lignex < x)
	{
		while(colonney < y)
		{	
				write(1, "A", 1);
				colonney++;
	 	}
		colonney = 0;
		lignex++;
		write(1, "\n",1);

	}

}
 
int main(void)

{
	ligne(5,5);
	return(0);
}



