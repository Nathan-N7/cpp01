#ifndef BUREAUCRAT_HPP
#define BUREaUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
	private:
		const std::string _name;
		int	_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat& other);
		std::string getName() const;
		int	getGrade() const;
};

#endif