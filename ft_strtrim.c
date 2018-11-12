/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroux <guroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:28:32 by guroux            #+#    #+#             */
/*   Updated: 2018/11/12 20:19:22 by guroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*str;
	int		i;
	int		start;

	i = 0;
	while (s[i] == 32 || s[i] == '\n' || s[i] == '\t')
		i++;
	start = i;
	while (s[i] != '\0')
		i++;
	while (s[i] == 32 || s[i] == '\n' || s[i] == '\t')
		i--;
	return ft_strsub(s, start, i - start);
}
