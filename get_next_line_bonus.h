/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:44:11 by flmuller          #+#    #+#             */
/*   Updated: 2023/11/11 13:21:02 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char			*get_next_line(int fd);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strjoin_gnl(char *s1, char *s2);
size_t			ft_strlen(const char *s);
char			*readline(int fd, char *stash);
unsigned int	whereendline(char *stash);
char			*cutstash(char *stash);
int				ft_strchr(char *s, int c);
char			*free_stash(char **stash);
char			*ft_strdup(char *s);
char			*cutline(char *stash);
#endif