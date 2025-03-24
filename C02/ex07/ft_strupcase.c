/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:36:24 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/17 15:05:34 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*   
int main()
  
{
      
      char tab[]= "aanmimal" ;
 		
   
//      ft_putstr(tab);
//	  ft_strupcase(tab);
      printf("%s",ft_strupcase(tab));
      return(0);
}
*/
