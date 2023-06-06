/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:35:07 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/06 23:33:21 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// int	get_sign(const char *s)
// {
// 	int	sign;

// 	sign = 1;
// 	if (s[0] == '+' || s[0] == '-')
// 	{
// 		if (s[0] == '-')
// 			sign = -1;
// 	}
// 	return (sign);
// }

// int	get_result(const char *s, int sign)
// {
// 	int	result;
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] < '0' || '9' < s[i])
// 			return (-1);
// 		if (result > INT_MAX / 10)
// 			return (-1);
// 		if (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10)
// 			return (-1);
// 		result = result * 10 + (s[i] - '0');
// 		i++;
// 	}
// 	return (result * sign);
// }

// bool	check_int(const char *s)
// {
// 	int	sign;
// 	int	result;

// 	sign = get_sign(s);
// 	result = get_result(s, sign);
// 	return (result);
// }

// bool	check_int(const char *s)
// {
// 	long	n;

// 	n = ft_atoi(s);
// 	return (INT_MIN <= n && n <= INT_MAX);
// }

// bool	check_int2(const char *s)
// {
// 	int	sign;
// 	int	i;
// 	int	result;

// 	i = 0;
// 	sign = 1;
// 	if (s[i] == '+' || s[i] == '-')
// 	{
// 		if (s[i] == '-')
// 			sign = -1;
// 		i++;
// 	}

// 	result = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] < '0' || s[i] > '9')
// 			return (false);
// 		if (result > INT_MAX / 10)
// 			return (false);
// 		if (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10)
// 			return (false);

// 		result = result * 10 + (s[i] - '0');
// 		i++;
// 	}

// 	result *= sign;

// 	if (result < INT_MIN || result > INT_MAX)
// 		return (false);
// 	return (true);
// }

bool	check_arg2(const char *s)
{
	if (*s < '0' || '9' < *s)
		return (false);
	if ((*s == '-' && !ft_isdigit(*(s + 1))))
		return (false);
	if (*s == '-' && !ft_isdigit(*(s + 1)))
		return (false);
	if ((int)*s < -2147483648 || 2147483647 < (int)*s)
		return (false);
	return (true);
}

// bool	check_arg(int argc, char **argv)
// {
// 	size_t	i;
// 	size_t	j;

// 	if (argc <= 1)
// 		exit(0);
// 	i = 1;
// 	while (i < (size_t)argc)
// 	{
// 		j = 1;
// 		while (argv[i][j] != '\0')
// 		{
// 			if (!ft_isdigit(argv[i][j]))
// 				return (false);
// 			if (1 < j)
// 				break ;
// 			j++;
// 		}
// 		// if (!check_int(argv[i]))
// 		// 	return (false);
// 		if (!check_arg2(argv[i]))
// 			return (false);
// 		i++;
// 	}
// 	return (true);
// }

bool	check_arg(int argc, char **argv)
{
	int			i;
	const char	*arg;

	i = 1;
	while (i < argc)
	{
		arg = argv[i];
		if (arg[0] == '-' || arg[0] == '+')
		{
			if (arg[1] == '\0')
				return (false);
		}
		else if (arg[0] == '\0')
		{
			return (false);
		}
		i++;
	}
	return (true);
}
