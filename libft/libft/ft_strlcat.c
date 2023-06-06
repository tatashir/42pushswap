/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:01:55 by tatashir          #+#    #+#             */
/*   Updated: 2022/11/27 16:52:51 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;

	if (!dst && src && dstsize == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	i = 0;
	while (i + dst_len + 1 < dstsize && src[i] != '\0')
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	if (dst_len < dstsize)
		dst[i + dst_len] = '\0';
	if (dstsize <= dst_len)
		dst_len = dstsize;
	return (dst_len + ft_strlen(src));
}
