/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:28:56 by cgombos           #+#    #+#             */
/*   Updated: 2024/04/24 20:49:21 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

/*
int main()
{
	const char* str = "   	123abc";
	int result = ft_atoi(str);
	printf("Result: %d\n", result);
	return 0;
}
*/
	/* 
    test_atoi("123", 123);
    test_atoi("-456", -456);
    test_atoi("+789", 789);
    test_atoi("0", 0);
    test_atoi("   42", 42);
    test_atoi("   -987", -987);
    test_atoi("   +321", 321);
    test_atoi("   123abc", 123);
    test_atoi("   -456def", -456);
    test_atoi("   +789xyz", 789);
    test_atoi("   0", 0);
    test_atoi("   123 ", 123);
    test_atoi("   -456 ", -456);
    test_atoi("   +789 ", 789);
    test_atoi("   0 ", 0);
    test_atoi("   abc123", 0);
    test_atoi("   def-456", 0);
    test_atoi("   xyz+789", 0);
    test_atoi("   ", 0);
    */