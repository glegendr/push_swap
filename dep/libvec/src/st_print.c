/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glegendr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 19:26:35 by glegendr          #+#    #+#             */
/*   Updated: 2018/02/13 19:52:03 by glegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void		st_print(t_string *string, int fd)
{
	v_print(&string->vec, fd);
}