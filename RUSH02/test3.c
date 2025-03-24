/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:19:43 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/12 16:51:17 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 void rush(int x, int y)
 
{
int compteurx = 1;
int compteury = 1;

  
  while( compteury <= y )
	{	
 
		while (compteurx <= x) 
          {
			if((compteurx == 1 && compteury == 1) ||
			 (compteurx == 1 && compteury == y) ||
			 (compteurx == x && compteury == y) ||
			 (compteurx == x && compteury == 1)) 
           		{
            	   write(1, "A", 1);
           		}
			else 
				{
					write(1, "B", 1);
				}
				  compteurx++;
			
		  }
            {  
               write(1, "\n", 1);
               compteury++;
			   compteurx= 1;
		    }	
	}		 	
}






int main()

{

rush(4, 4);
return (0);
  
  
}
