/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:14:37 by rcalik            #+#    #+#             */
/*   Updated: 2022/11/17 16:31:04 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
/*
int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "a");
   strcpy(str2, "b");

   ret = strncmp(str1, str2, 1);

   if(ret < 0) {
      printf("str1(az) < str2(fazla)");
   } else if(ret > 0) {
      printf("str2(az) < str1(fazla)");
   } else {
      printf("str1 === str2");
   }

   return(0);
}
*/