/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 07:43:34 by tatashir          #+#    #+#             */
/*   Updated: 2022/10/26 12:39:09 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ptr_dst;
	const char	*s;

	ptr_dst = dst;
	s = src;
	if (!len || ptr_dst == s)
		return (ptr_dst);
	if (s < ptr_dst)
	{
		while (len--)
		*(ptr_dst + len) = *(s + len);
	}
	else
	{
		while (len--)
		*ptr_dst++ = *s++;
	}
	return (dst);
}
