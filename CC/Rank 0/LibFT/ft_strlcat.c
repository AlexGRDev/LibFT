/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia2 <agarcia2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 12:04:45 by agarcia2          #+#    #+#             */
/*   Updated: 2025/10/03 21:10:06 by agarcia2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*s;
	char		*d;
	size_t		src_len;
	size_t		dst_len;
	size_t		n;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (dst_len == size)
		return (size + src_len);
	s = src;
	d = dst + dst_len;
	n = size - dst_len - 1;
	while (*s && n > 0)
	{
		*d++ = *s++;
		n--;
	}
	*d = '\0';
	return (dst_len + src_len);
}
