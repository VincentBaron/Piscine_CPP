/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 15:23:44 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 16:38:59 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# define INVENTORY_SIZE 4
# include "master.hpp"

class Character : public ICharacter {

    public:

        // Constructors and destructor
        Character(void);
        Character(std::string& name);
        Character(const Character &src);
        virtual ~Character();

        // Operator overloads
        Character&          operator=(const Character &rhs);

        // Getters / Setters
        std::string const   &getName() const;
        void                equip(AMateria *m);
        void                unequip(int idx);
        void                use(int idx, ICharacter &target);
        // Member functions

    protected:

        // Attributes

    private:

        void                initInventory(void);
        // Attributes
        AMateria*           _inventory[4];
        std::string         _name;

};



#endif