/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkekae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 09:29:59 by tkekae            #+#    #+#             */
/*   Updated: 2018/03/09 13:08:33 by tkekae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		main(int argc,char **argv)
{
	int i;
	int j;
	int size;
	char *temp;
	
	if (argc == 2)
	{
		temp = &*argv[1];
		i = 0;
		size = 0;
		while(temp[size] != '\0')
			size++;

		size--;
		while ( temp[size] == ' ' || temp[size] == '\t')
			size--;

		while (temp[size] != ' ' && temp[size] != '\t')
			size--;

		j = size + 1;
		while (argv[1][j] != '\0' && argv[1][j] != ' ' && argv[1][j] !='\t' )
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
} 
