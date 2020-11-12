/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictgang.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmeida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 10:49:23 by malmeida          #+#    #+#             */
/*   Updated: 2020/11/08 19:45:46 by malmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return(i);
}


void read_file_to_lines() 
{
	int res;
	int char_value;
	char t;
	char buff[1024];
	int len;
	
	char_value = -1;
	if (0 != (res = open("./numbers.dict", O_RDONLY)))
	while (t != '\n')
	{
		char_value = read(res, &t, sizeof(char));
		ft_strcat(buff, &t);
	}
	printf("%s", buff);
	len = ft_strlen(buff);
	printf("but for some reason buff is %d chars long.", len);
}
