/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:44:39 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/30 20:17:08 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	ds;
	unsigned int	sl;

	i = 0;
	ds = 0;
	sl = 0;
	while (dest[ds])
		ds++;
	while (src[sl])
		sl++;
	if (size <= ds)
		return (size + sl);
	while (src[i] && (ds + i < size - 1))
	{
		dest[ds + i] = src[i];
		i++;
	}
	dest[ds + i] = '\0';
	return (ds + sl);
}

// int	main(void)
// {
// 	char	dest[14] = "Hello, ";
// 	char	src[] = "World!";

// 	printf("%u\n", ft_strlcat(dest, src, 20));
// 	printf("dest: %s\nsrc: %s\n", dest, src);
// 	return (0);
// }
