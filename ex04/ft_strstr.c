/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:07:33 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/30 19:17:05 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	a = str;
	b = to_find;
	if (*b == '\0')
		return (str);
	while (*a != '\0')
	{
		while (*b != '\0' && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (str);
		str++;
		a = str;
		b = to_find;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[] = "aahelloff";
// 	char to_find[] = "hello";

// 	char *result = ft_strstr(str, to_find);

// 	printf("%s\n", result);
// 	return (0);
// }
