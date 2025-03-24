/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:50:09 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/08 18:01:57 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void test (int x,int y)
{
	int compteurx;
	int compteury;
	
	compteurx = 0;
	compteury = 0;

	while(compteurx < x)
	{ 
		while(compteury < y)
		{
			write(1, "A", 1);
			compteury++;
		}
		compteury =0;
		compteurx++;
		write(1, "\n", 1); 
	}

}



int main(void)

{
	test(5,5);
	return(0);
}
