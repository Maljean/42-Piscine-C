/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 22:00:15 by maljean           #+#    #+#             */
/*   Updated: 2017/11/05 22:09:36 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 != '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	return (0);
}
