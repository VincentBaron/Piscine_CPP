/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 13:51:52 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 16:40:12 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "master.hpp"

class Ice : public AMateria {

    public:

        // Constructors and destructor
        Ice(void);
        Ice(const Ice &src);
        virtual ~Ice();

        // Operator overloads
        Ice&        operator=(const Ice &rhs);

        // Getters / Setters

        // Member functions
        AMateria*   clone(void) const;

    protected:

        // Attributes

    private:

        // Attributes

};



#endif