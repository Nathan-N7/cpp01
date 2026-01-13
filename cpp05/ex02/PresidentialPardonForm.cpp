#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm::AForm("PresidentialPardonForm", 25, 5), _target("Default") {

}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm::AForm("PresidentialPardonForm", 25, 5), _target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm::AForm(copy), _target(copy._target) {

}

PresidentialPardonForm::~PresidentialPardonForm(void) {

}