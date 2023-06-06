/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:51:58 by tatashir          #+#    #+#             */
/*   Updated: 2022/10/19 16:28:13 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	tmp;

	ptr = (unsigned char *)b;
	tmp = (unsigned char)c;
	i = 0;
	while (i < n)
		ptr[i++] = tmp;
	return (b);
}
