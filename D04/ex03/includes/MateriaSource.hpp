/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 18:06:54 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 18:18:54 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# define MEMORY_SIZE 4
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

    public:

        // Constructors and destructor
        MateriaSource(void);
        MateriaSource(const MateriaSource &src);
        virtual ~MateriaSource();

        // Operator overloads
        MateriaSource&	operator=(const MateriaSource &rhs);

        // Getters / Setters

        // Member functions
        void learnMateria(AMateria *mat);        
        AMateria *createMateria(std::string const &type);

    protected:

        // Attributes

    private:

        void initMemory(void);
        // Attributes
        AMateria* _memory[MEMORY_SIZE];

};



#endif