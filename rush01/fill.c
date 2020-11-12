/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:26:33 by gbarreir          #+#    #+#             */
/*   Updated: 2020/10/31 17:13:13 by gbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	fillc(int **board, int *fillnumbers)
{
	int r;
	int c;
	int i;
	int k;

	r = 0;
	c = 0;
	k = 0;

	while(c < 5)
	{
		c++;	
		board[r][c] = fillnumbers[k];
		if(c == 4 && r == 0)
		{
			c = 0;
			r = 5;
		}
	k++;
	}

}

void	fillr(int **board, int *fillnumbers)
{
	int r;
	int c;
	int i;
	int k;

	r = 0;
	c = 0;
	k = 8;

	while(r < 5)
	{
		i = fillnumbers[k];
		r++;
		board[r][c] = i;
		if(r == 4 && c == 0)
		{
			c = 5;
			r = 0;
		}
	k++;
	}

}

void	fill(int **board, int *fillers)
{
	fillc(board, fillers);
	fillr(board, fillers);
}
