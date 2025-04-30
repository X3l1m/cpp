/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/16 18:17:31 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/16 18:17:31 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename Swp>
void	swap(Swp &arg1, Swp &arg2)
{
	Swp temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

template<typename Max>
Max	max(Max arg1, Max arg2)
{
	return (arg1 > arg2 ? arg1 : arg2);
}

template<typename Min>
Min	min(Min arg1, Min arg2)
{
	return (arg1 < arg2 ? arg1 : arg2);
}