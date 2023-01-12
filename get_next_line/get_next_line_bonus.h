/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:52:40 by rogarrid          #+#    #+#             */
/*   Updated: 2022/12/01 09:42:33 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_print_line(char *save_line);
char	*ft_clean_save(char *save_line);
char	*ft_read_save_next_line(int file_descriptor, char *save_line);
char	*ft_strjoin(char *str_1, char *str_2);
size_t	ft_strlen(char *string);
char	*ft_strchr(char *string, int character);

#endif
