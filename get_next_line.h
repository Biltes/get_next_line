/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:00:05 by migupere          #+#    #+#             */
/*   Updated: 2023/06/05 17:36:38 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*ft_get_line(char *buffer);
char	*ft_new_line(char *buffer);
char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *str);
char	*ft_strjoin(char *s1, char const *s2);
char	*ft_strchr(char *buffer, int target);
size_t	ft_strlen(const char *str);

#endif