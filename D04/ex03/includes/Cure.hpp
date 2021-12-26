/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 13:51:52 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 16:40:00 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "master.hpp"

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