/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 19:19:44 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/30 19:23:14 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base {

	public:

		// Constructors and destructor
		virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif