/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:51:25 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/21 13:50:41 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i ;

	i = 0;
	while ((i < n) && s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}	
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()

{
	unsigned int n = 4;

	char tabs1[] = "Hello";
	char tabs2[] = "Hel";

	printf("%s\n%s\n%d\n", tabs1, tabs2, ft_strncmp(tabs1, tabs2, n));
	printf("%s\n%s\n%d\n", tabs1, tabs2, strncmp(tabs1, tabs2, n));
	return (0);
}
*/
