/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:30:19 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/07 20:48:30 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rush02(int x, int y)

{
	int  compteurx;
	int  compteury;

	compteurx = 0;
	compteury = 0;

	while(compteury == 1)
	{
		while(compteurx ==1)
			if(compteury ==1 && (compteurx==1 || compteurx== x))
			{
				write(1, "A", 1);
			}
			else if(compteury==y && ((compteurx==x) | (compteurx == 1))	
				{ 
					write(1, "C", 1);;
				}					
			else 

				{
						write(1,' ', 1);
				}
	}

int main (void)

{
	rush02(5, 5);
	return(0);
}
