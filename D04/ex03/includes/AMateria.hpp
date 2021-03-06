/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 16:56:50 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 17:27:26 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_HPP
# define IMATERIA_HPP
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

    public:

        // Constructors and destructor
        AMateria(void);
        AMateria(const AMateria &src);
        virtual ~AMateria();

        // Operator overloads
        AMateria&           operator=(const AMateria &rhs);

        // Getters / Setters
        const std::string&  getType(void) const;

        // Member functions
        virtual AMateria*   clone(void) const = 0;
        virtual void        use(ICharacter& target) const;

    protected:

        // Attributes
        std::string        _type;

    private:

        // Attributes

};




#endif