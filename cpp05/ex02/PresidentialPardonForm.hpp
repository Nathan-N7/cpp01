#pragma once

#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm: public AForm {
    private:
        std::string _target;
    public:
        PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const &target);
        PresidentialPardonForm(PresidentialPardonForm const &copy);
        ~PresidentialPardonForm(void);
};