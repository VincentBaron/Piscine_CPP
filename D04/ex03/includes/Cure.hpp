/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 13:51:52 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 17:07:55 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria {

    public:

        // Constructors and destructor
        Cure(void);
        Cure(const Cure &src);
        virtual ~Cure();

        // Operator overloads
        Cure&       operator=(const Cure &rhs);

        // Getters / Setters

        // Member functions
        AMateria*   clone(void) const;

    protected:

        // Attributes

    private:

        // Attributes

};



#endif