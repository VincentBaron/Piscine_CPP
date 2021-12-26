/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:53:12 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 18:59:14 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Character.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"

int main()
{
    std::cout << "---------- Learning new Materials ----------\n" << std::endl;

    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    std::cout << "---------------------------------------------\n" << std::endl;

    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    // std::cout << "tmp type is " << tmp->getType() << std::endl;
    me->equip(tmp);
    tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    // me->unequip(0);
    // me->use(0, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}
