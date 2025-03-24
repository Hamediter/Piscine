/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:11:12 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/08 15:19:19 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rush (int x, int y)
{
	int compteurx;
	int compteury;

	compteurx=1;
	compteury=1;
	while(compteurx <= x)
		{
			while(compteury <= y)
			{
				if((compteurx == 1 && (compteury == 1 || compteury == y)) || (compteurx ==x  && (compteury ==1 || compteury== y)))
 		 		{
					write(1, "A", 1);
				}
				else if((compteurx ==1 || compteurx ==x || compteury ==1 || compteury ==y))
				{
					write(1, "B", 1);				
				}
				else
				{
					write(1, " ", 1);
				}
				compteury++;
			}
				
			write(1,"\n", 1);
			compteurx++;	
			compteury = 1;	
		}


}

int main (void)

{
	rush(5,5);
	return(0);
}
