/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia2 <agarcia2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:50:25 by agarcia2          #+#    #+#             */
/*   Updated: 2025/09/29 23:10:49 by agarcia2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		chr;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*str == chr)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
