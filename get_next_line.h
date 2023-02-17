/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguincha <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:02:40 by bguincha          #+#    #+#             */
/*   Updated: 2022/11/10 15:06:40 by bguincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 60
# endif

char	*get_next_line(int fd);
char	*ft_strchr_findreturn(char *stash);
size_t	ft_strlen(const char *str);
int		ft_find_return(char *str);
char	*ft_delete_return(char *stash);
char	*ft_strjoin(char *stash, char *buff);
char	*ft_casier(int fd, char *stash);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);

#endif
