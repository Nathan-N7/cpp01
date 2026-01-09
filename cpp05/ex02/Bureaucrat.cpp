#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {

}
Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {

}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        this->_grade = other.getGrade();
    }
    return *this;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->_grade = grade;
}

std::string Bureaucrat::getName() const {
    return (this->_name);
}

int	Bureaucrat::getGrade() const {
    return (this->_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

void Bureaucrat::incrementGrade() {
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade() {
    if (_grade - 1 > 150)
        throw GradeTooHighException();
    _grade++;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b) {
    os << "Name: " << b.getName() << "Grade: " << b.getGrade() << std::endl;
    return (os);
}