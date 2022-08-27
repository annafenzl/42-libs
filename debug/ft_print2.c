/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:42:47 by afenzl            #+#    #+#             */
/*   Updated: 2022/08/16 14:00:08 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libs.h"

void	ft_print2(char **split)
{
	int	i;

	i = 0;
	while (split && split[i] != NULL)
	{
		ft_printf("%s\n", split[i]);
		i++;
	}
}
