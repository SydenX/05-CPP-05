
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

//Constructor
Intern::Intern() {
}

//Destructor
Intern::~Intern() {
}

//Copy-Constructor
Intern::Intern(Intern const &intern) {
	*this = intern;
}

//Copy-Assignment Operator Overload
Intern&	Intern::operator=(Intern const &intern){
	(void)intern;
	return *this;
}

AForm *Intern::makeForm(std::string formType, std::string target){
	int p = -1;
	std::string	forms[3] = { "robotomy request", "shrubbery creation", "presidential pardon" };
	while (++p < 3)
		if (forms[p].compare(formType) == 0)
			break;
	if (p < 3)
		std::cout << "Intern creates " << formType << std::endl;
	switch(p){
		case 0:
			return new RobotomyRequestForm(target);
		case 1:
			return new ShrubberyCreationForm(target);
		case 2:
			return new PresidentialPardonForm(target);
		default:
			std::cerr << formType << " is not a valid Form." << std::endl;
	}
	return NULL;
}

