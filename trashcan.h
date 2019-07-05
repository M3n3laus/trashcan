/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trashcan.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaddox <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:27:24 by smaddox           #+#    #+#             */
/*   Updated: 2019/07/04 17:08:35 by smaddox          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>

#define DEFAULT_SIZE 50
typedef enum
{
	T_CHAR,
	T_INT,
	T_FLOAT
}					e_my_type;

typedef struct 		s_trash
{
	e_my_type			type;
	union 
	{
		char		*cp;
		int			*ip;
		float		*fp;
	}				u_piece;
}					t_rash;

typedef struct		s_trashcan
{
	t_rash			can[DEFAULT_SIZE];
	int				top;
}					t_rash_can;

void				new_trash_bag(t_rash_can *my_trashcan);
void				mom(t_rash_can *my_trashcan, e_my_type tp, ...);
int					trash_overflow(t_rash_can *my_trashcan);
int					trashcan_empty(t_rash_can *my_trashcan);
void				garbage_day(t_rash_can *my_trashcan);

