/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:57:36 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/29 17:29:40 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	{
		while (*s1 && *s2 && *s1 == *s2) 
		{
			s1++;
			s2++;
		}
	}
	return (*s1 - *s2);
}

// int	main(void)
// {
// 	char str[] = "abc";
// 	char str1[] = "ab";

// 	printf("%d\n", ft_strcmp(str, str1));
// 	printf("%d\n", strcmp(str, str1));
// 	return (0);
// }
