/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RUSH02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaiti <lsaiti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:34:44 by lsaiti            #+#    #+#             */
/*   Updated: 2024/09/08 11:52:11 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include	<unistd.h>
 
int	execpt(int x, int y)
{
	if (x > 2147483647 || x < 1 || y > 2147483647 || y < 1)
	{
		write(1, "Les chiffres doivent etre compris entre 1 et 2147483647", 55);
		return (-1);
	}
	else if (x == -2147483647 || y == -2147483647)
	{
		write(1, "Les chiffres doivent etre compris entre 1 et 21474", 55);
		return (-1);
	}
	else if (x == -4)
	{
		write (1, "Vous devez rentrer 2 nombres pour cette fonction!", 58);
		return (-1);
	}
	return (0);
}
 
void	boucle(int x, int y, int compteury)
{
	int	compteurx; // on cree un compteur pour x
 
	compteurx = 1; // on lui donne la valeur 1
	while (compteurx <= x) // tant que le compteur a pas depasse x on continue
	{
		if (compteury == 1 && (compteurx == 1 || compteurx == x)) // si la position x et y sont la premiere case ou la derniere de la premiere ligne on affiche "A"
			write (1, "A", 1);
		else if (compteury == y && (compteurx == 1 || compteurx == x)) // si la position x et y sont la premiere case ou la derniere de la derniere ligne on affiche "C"
			write (1, "C", 1);
		else if (compteury == 1 || compteury == y || compteurx == 1 
			|| compteurx == x) // si on est sur les bords on affiche "B"
			write (1, "B", 1);
		else    //sinon on affiche un espace " "
			write (1, " ", 1);
		compteurx++; //on incremente le compteurx
	}
}
 
void	rush(int x, int y)  //fonction principale du rush
{
	int	compteury; //on cree un compteur 
 
	if (execpt(x, y) == -1) //on cherche a savoir si x et y sont compris entre 1 et 2147483647 (la limite d'un int)
		return; //si x ou y est pas compris entre 1 et 2147483647 on ferme la fonction
	compteury = 1; //sinon on continue
	while (compteury <= y) //boucle qui va de compteur 1 jusqu'a y
	{
		boucle(x, y, compteury); // appelle la fonction boucle qui cree une boucle de 1 a x
		write (1, "\n", 1); // on va a la ligne apres avoir affiche une ligne (quand la boucle est finie)
		compteury++; //incremente compteury
	}
}
 
int	main(void) //Fonction qui se lance automatiaquement lorsque le fichier est lance
{
	rush(10, 5); //appelle la fonction avec x = 10 et y = 5
	return (0); //termine la fonction en renvoyant 0
}
