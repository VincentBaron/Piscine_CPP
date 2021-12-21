#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie {

    public:

        // Constructors and destructor
        Zombie(void);
        ~Zombie();

        // Member functions
        void announce(void);
        void setName(const std::string name);

    private:

        // Attributes
        std::string _name;

        // Functions


};

Zombie  *zombieHorde(int nb, std::string name);

#endif