/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:27:32 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/17 16:12:10 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
#include "master.hpp"

class Karen {

    public:

        // Constructors and destructor
        Karen(void);
        ~Karen(void);
        // Member functions
        void complain(std::string level);
    

    private:

        // Internal functions
        void debug(void) const;
        void info(void) const;
        void warning(void) const;
        void error(void) const;
        // Attributes
};


#endif