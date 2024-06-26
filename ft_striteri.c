/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:57:40 by cgombos           #+#    #+#             */
/*   Updated: 2024/05/14 17:02:50 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void	my_func(unsigned int i, char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
}
*/
/*
int	main(void)
{
	char	str[] = "Hello, World!";
	ft_striteri(str, my_func);
	printf("%s\n", str);
	return (0);
}
*/