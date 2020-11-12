/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boardstuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 04:24:42 by gbarreir          #+#    #+#             */
/*   Updated: 2020/10/31 19:23:25 by malmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_printboard(int **board)
{
	int row;
	int col;
	char c;

	row = 0;
	col = 0;
	while (row < 6)
	{
		while (col < 6)
		{
			c = board[row][col] + '0';
			write(1, &c, 1);
			col++;
		}
		write(1, "\n", 1);
	col = 0;
	row++;
	}
}

int 	**ft_buildboard()
{
	int i;
	int j;
	int k;
	int **board;
	
	i = 0;
	j = 0;
	k = 0;
	board = malloc(6 *  sizeof(int*));
	while (k < 6)
	{
		board[k] = malloc(6 * sizeof(int));
		k++;
	}
	while (i < 6)
	{
		while (j < 6)
		{
			board[i][j] = 0;
			j++;
		}
	j = 0;
	i++;
	}
	return (board);
}
