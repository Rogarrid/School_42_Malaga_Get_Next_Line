/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:48:54 by rocio             #+#    #+#             */
/*   Updated: 2022/11/17 13:40:11 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//Search the character given in the string and return pointer where the
//character appeare for frist time. If it isn't find return Null.

char	*ft_strchr(char *string, int character)
{
	int		counter;

	counter = 0;
	if (!string || !character)
		return (0);
	if (string[counter] == character)
		return ((char *)string + counter);
	while (string [counter])
	{
		if (string[counter] == character)
			return ((char *)string + counter);
		counter++;
	}
	return (0);
}

size_t	ft_strlen(char *string)
{
	size_t	length;

	length = 0;
	if (!string)
		return (0);
	while (*string != '\0')
	{
		length++;
		string++;
	}
	return (length);
}

//Create new string with the concatenation of the string_1 and string_2.
// ver que lógica tiene empezar con index = -1
//ver que significa los ++ delante del index.
char	*ft_strjoin(char *str_1, char *str_2)
{
	char	*nw_str;
	size_t	counter;
	size_t	index;

	if (!str_1)
	{
		str_1 = (char *)malloc(1 * sizeof(char));
		str_1[0] = '\0';
	}
	if (!str_1 || !str_2)
		return (NULL);
	nw_str = malloc((ft_strlen(str_1) + ft_strlen(str_2) + 1) * sizeof(char));
	if (nw_str == NULL)
		return (NULL);
	index = -1;
	counter = 0;
	if (str_1)
		while (str_1[++index])
			nw_str[index] = str_1[index];
	while (str_2[counter])
		nw_str[index++] = str_2[counter++];
	nw_str [ft_strlen(str_1) + ft_strlen(str_2)] = '\0';
	free(str_1);
	return (nw_str);
}
