/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_rep.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkekae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 15:49:38 by tkekae            #+#    #+#             */
/*   Updated: 2018/03/09 11:07:32 by tkekae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* the program search_rep takes 3 arguments,the first argument is the string in*/
/*  which to replace a letter(2nd arg) by another letter(3rd arg).       	   */

#include <unistd.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int i; /* index */

	/* to number of arguments */
	if(argc == 4)
	{
		i = 0;
		while (argv[1][i] != '\0') /* loops through first argument */
		{
			if (argv[1][i] == argv[2][0]) /* checks if any latter in the first arg matches the 2nd arg */ 
			{
				argv[1][i] = argv[3][0]; /* if it matchs replace it */  
				write(1, &argv[1][i],1);
			}
			else 
				write(1, &argv[1][i],1);
			
			i++;

		}
	}
	else
		write(1,"\n",1);
	return (0);
}
