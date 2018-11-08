/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroux <guroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:30:31 by guroux            #+#    #+#             */
/*   Updated: 2018/11/08 20:30:57 by guroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putendl(const char *s)
{
	int i;

	i = 0;
	while (s[i++] != '\0')
	{
		ft_putchar(s[i]);
	}
	ft_putchar('\n');
}
