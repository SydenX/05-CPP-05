
#include "RobotomyRequestForm.hpp"

//Constructor
RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequest", (45), (72)), _target("NOT A TARGET") {}
RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequest", (45), (72)), _target(target) {}

//Destructor
RobotomyRequestForm::~RobotomyRequestForm() {
}

//Copy-Constructor
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robotonmyrequestform) {
	*this = robotonmyrequestform;
}

//Copy-Assignment Operator Overload
RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &robotonmyrequestform){
	(void)robotonmyrequestform;
	return *this;
}

std::string	const RobotomyRequestForm::getTarget() const {
	return this->_target;
}

void RobotomyRequestForm::beExecuted(Bureaucrat const &executor) const {
	(void)executor;
	std::cout << "zZZZZZZZZZZZz MAKING NOISE" << std::endl;
	srand(time(0));
	int random = (rand() % (2 - 1 + 1)) + 1;
	if (random == 1)
		std::cout << this->getTarget() << " has been successfully robotomized." << std::endl;
	else
		std::cout << this->getTarget() << "'s robotomization has failed." << std::endl;
}
