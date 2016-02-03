/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 17:04:19 by avella            #+#    #+#             */
/*   Updated: 2016/02/03 16:12:51 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_event	*give_myevent(void)
{
	t_event *myevent;

	myevent = (t_event *)malloc(sizeof(t_event) * 4);
	myevent->xd = 500;
	myevent->yd = 300;
	return (myevent);
}

int		error(int argc)
{
	if (argc != 2)
	{
		printf("Bug arg");
		return (0);
	}
	return (1);
}
