/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:49:22 by rocio             #+#    #+#             */
/*   Updated: 2022/11/17 12:44:53 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int file_descriptor);
char	*ft_print_line(char *save_line);
char	*ft_clean_save(char *save_line);
char	*ft_read_save_next_line(int file_descriptor, char *save_line);
char	*ft_strjoin(char *str_1, char *str_2);
size_t	ft_strlen(char *string);
char	*ft_strchr(char *string, int character);

#endif
