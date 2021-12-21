#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie {

    public:

        // Constructors and destructor
        Zombie(const std::string name);
        ~Zombie();

        // Member functions
        void announce(void);

    private:

        // Attributes
        std::string _name;

};


#endif