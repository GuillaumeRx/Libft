/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroux <guroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:19:55 by guroux            #+#    #+#             */
/*   Updated: 2018/11/12 20:33:59 by guroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	init(int *i, int *j, int *k)
{
	*i = 0;
	*j = 0;
	*k = 0;
}

char	*cpy_word(int i, int k, const char *str)
{
	int		l;
	char	*buff;

	if (!(buff = (char *)malloc(sizeof(char) * (i - k) + 1)))
		return (NULL);
	l = 0;
	while (k < i)
	{
		buff[l] = str[k];
		k++;
		l++;
	}
	buff[l] = '\0';
	return (buff);
}

void	alloc_words(const char *st, char **tmp, char c)
{
	int i;
	int j;
	int k;

	init(&i, &j, &k);
	while (st[i] != '\0')
	{
		while (st[i] == c)
			i++;
		while (st[i] != c && st[i] != '\0')
		{
			if (st[i - 1] == c && st[i] != c)
				k = i;
			i++;
		}
		if (st[i - 1] != c)
		{
			tmp[j] = cpy_word(i, k, st);
			j++;
		}
	}
	if (!(tmp[j] = (char *)malloc(sizeof(char) * 1)))
		return;
	tmp[j] = 0;
}

char	**ft_strsplit(const char *s, char c)
{
	int		i;
	int		words;
	char	**tmp;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (s[i - 1] == c)
				words++;
		}
		i++;
	}
	if (!(tmp = (char **)malloc(sizeof(char *) * words + 1)))
		return (NULL);
	alloc_words(s, tmp, c);
	return (tmp);
}
