
#include "Bureaucrat.hpp"

void	Bureaucrat::setGrade(int grade){
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

//Constructor
Bureaucrat::Bureaucrat(std::string name): _name(name), _grade(150){}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name){
	setGrade(grade);
}

//Destructor
Bureaucrat::~Bureaucrat() {
}

//Copy-Constructor
Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) {
	*this = bureaucrat;
}

//Copy-Assignment Operator Overload
Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &bureaucrat){
	if (this == &bureaucrat)
		return *this;
	this->_grade = bureaucrat._grade;
	return *this;
}

std::string const &Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void	Bureaucrat::incrementGrade() {
	setGrade(this->_grade-1);
}

void	Bureaucrat::decrementGrade() {
	setGrade(this->_grade+1);
}

void	Bureaucrat::signForm(AForm& form) {
	try {
		form.beSigned(*this);
	} catch(const std::exception & e){
		std::cout << this->getName() << " couldn't sign " << this->getName() << " because: " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form) {
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	} catch(const std::exception & e){
		std::cout << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw (){
	return ("Grade too high (max 1).");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw (){
	return ("Grade too low (min 150).");
}

std::ostream& operator<<(std::ostream &output, const Bureaucrat &bureaucrat){
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return output;
}
