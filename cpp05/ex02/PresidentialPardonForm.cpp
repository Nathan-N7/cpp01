#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form::Form("PresidentialPardonForm", 25, 5), _target("Default") {

}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form::Form("PresidentialPardonForm", 25, 5), _target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form::Form(copy), _target(copy._target) {

}

PresidentialPardonForm::~PresidentialPardonForm(void) {

}