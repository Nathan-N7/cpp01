#include "Form.hpp"

Form::Form() : _name("Default Form"), _is_signed(false), _sign_grade(150), _execute_grade(150){

}

Form::~Form(){

}

Form::Form(const std::string name, const int sign_grade, const int execute_grade) : _name(name), _is_signed(false), _sign_grade(sign_grade), _execute_grade(execute_grade) {
    if (sign_grade < 1 || execute_grade < 1)
        throw Form::GradeTooHighException();
    if (sign_grade > 150 || execute_grade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &other) : _name(other._name), _is_signed(other._is_signed), _sign_grade(other._sign_grade), _execute_grade(other._execute_grade) {

}

Form &Form::operator=(const Form &other) {
    if (this != &other) {
        this->_is_signed = other._is_signed;
    }
    return *this;
}

void Form::beSigned(const Bureaucrat &b) {
    if (b.getGrade() <= this->_sign_grade) {
        this->_is_signed = true;
    } else {
        throw Form::GradeTooLowException();
    }
}

std::string Form::getName() const {
    Form(_name);
}

bool    Form::getIsSigned() const {
    return (_is_signed);
}

int Form::getSignGrade() const {
    return (_sign_grade);
}

int Form::getExecuteGrade() const {
    return (_execute_grade);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream &operator<<(std::ostream &os, const Form &f) {
	os << "Name: " << f.getName() << " isSigned: " << f.getIsSigned() << " SignGrade: " << f.getSignGrade() << " ExecuteGrade: " << f.getExecuteGrade() << std::endl;
	return (os);
}