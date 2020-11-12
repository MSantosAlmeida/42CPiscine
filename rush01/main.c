/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 04:24:46 by gbarreir          #+#    #+#             */
/*   Updated: 2020/10/31 17:13:05 by gbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int		**ft_buildboard(void);
void	ft_printboard(int **board);
void	fill(int **board, int*fillers);



int		*converter(char *c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (c[i])
		i++;
	int *converted = (int *)malloc((i * sizeof(int)));
	i = 0;
	while (c[i])
	{	
		if(c[i] != ' ')
		{
			int a;
			a = c[i];
			converted[j] = a - 48;
			j++;
		}
		i++;
	}
	return (converted);
}


int		main(void)
{
	char str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 1 4";
	int **board = ft_buildboard();
	fill(board, converter(str));
	ft_printboard(board);
	printf("\n");
	//ft_printboard(board);
		
	return (0);
}
