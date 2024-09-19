
#include "AForm.hpp"

//Constructor
AForm::AForm(std::string name): _name(name), _isSigned(0), _gradeToSign(150), _gradeToExecute(150) {}

AForm::AForm(): _name(""), _isSigned(0), _gradeToSign(150), _gradeToExecute(150) {}

AForm::AForm(std::string name, int gradeToExecute, int gradeToSign): _name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToExecute > 150 || gradeToSign > 150)
		throw AForm::GradeTooLowException();
	else if (gradeToExecute < 1 || gradeToSign < 1)
		throw AForm::GradeTooHighException();
}

//Destructor
AForm::~AForm() {
}

//Copy-Constructor
AForm::AForm(AForm const &form): _name(form.getName()), _isSigned(0),  _gradeToSign(form.getSignatureGrade()), _gradeToExecute(form.getExecutionGrade()) {
	*this = form;
}

//Copy-Assignment Operator Overload
AForm&	AForm::operator=(AForm const &form) {
	if (this == &form)
		return *this;
	this->_isSigned = form.isSigned();
	return *this;
}

void AForm::beSigned(Bureaucrat const &executor){
	if (executor.getGrade() <= this->getSignatureGrade()){
		if (this->_isSigned == 1)
			std::cout << executor.getName() << " couldn't sign " << this->getName() << " because the form is already signed." << std::endl;
		else {
			this->_isSigned = 1;
			std::cout << executor.getName() << " signed " << this->getName() << std::endl;
		}
	} else {
		throw(AForm::GradeTooLowException());
	}
}

void AForm::execute(Bureaucrat const &executor) const {
	if (this->isSigned()){
		if (executor.getGrade() <= this->getExecutionGrade())
			this->beExecuted(executor);
		else
			throw(AForm::GradeTooLowException());
	} else
		throw(AForm::FormNotSignedException());
}

std::string const &AForm::getName() const {
	return this->_name;
}

bool AForm::isSigned() const {
	return this->_isSigned;
}

int AForm::getExecutionGrade() const {
	return this->_gradeToExecute;
}

int AForm::getSignatureGrade() const {
	return this->_gradeToSign;
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("Grade too high to execute or sign.");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("Grade too low to execute or sign.");
}

const char *AForm::FormNotSignedException::what() const throw() {
	return ("The form must be signed to be executed.");
}

std::ostream &operator<<(std::ostream &output, const AForm &form){
	output << form.getName() << "\nisSigned: " << form.isSigned() << "\nGrade required to sign: " << form.getSignatureGrade() << "\nGrade required to execute: " << form.getExecutionGrade() << std::endl;
	return output;
}