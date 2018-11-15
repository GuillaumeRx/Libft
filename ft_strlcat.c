/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroux <guroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:53:38 by guroux            #+#    #+#             */
/*   Updated: 2018/11/15 18:22:04 by guroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t		srclen;
	size_t		i;
	int			j;
	size_t		dstlen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	if (size < dstlen + 1)
		return (srclen + size);
	if (size > dstlen + 1)
	{
		while (i < size - 1 && src[j] != '\0')
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (dstlen + srclen);
}
