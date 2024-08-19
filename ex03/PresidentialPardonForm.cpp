
#include "PresidentialPardonForm.hpp"

//Constructor
PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardon", (5), (25)), _target("NOT A TARGET") {}
PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardon", (5), (25)), _target(target) {}

//Destructor
PresidentialPardonForm::~PresidentialPardonForm() {
}

//Copy-Constructor
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &presidentialpardonform) {
	*this = presidentialpardonform;
}

//Copy-Assignment Operator Overload
PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &presidentialpardonform){
	(void)presidentialpardonform;
	return *this;
}

std::string	const PresidentialPardonForm::getTarget() const {
	return this->_target;
}

void PresidentialPardonForm::beExecuted(Bureaucrat const &executor) const {
	(void)executor;
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
