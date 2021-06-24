/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_get_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenuar <lorenuar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:03:14 by lorenuar          #+#    #+#             */
/*   Updated: 2021/06/21 20:54:11 by lorenuar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_stack.h"

size_t	stack_get_size(t_stack *stack)
{
	return (stack->siz);
}
