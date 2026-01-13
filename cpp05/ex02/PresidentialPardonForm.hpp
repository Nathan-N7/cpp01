#pragma once

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm: public Form {
    private:
        std::string _target;
    public:
        PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const &target);
        PresidentialPardonForm(PresidentialPardonForm const &copy);
        ~PresidentialPardonForm(void);
};