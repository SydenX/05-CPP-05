
#include "RobotomyRequestForm.hpp"

//Constructor
RobotonmyRequestForm::RobotonmyRequestForm(): AForm("RobotonmyRequest", (45), (72)), _target("NOT A TARGET") {}
RobotonmyRequestForm::RobotonmyRequestForm(std::string target): AForm("RobotonmyRequest", (45), (72)), _target(target) {}

//Destructor
RobotonmyRequestForm::~RobotonmyRequestForm() {
}

//Copy-Constructor
RobotonmyRequestForm::RobotonmyRequestForm(RobotonmyRequestForm const &robotonmyrequestform) {
	*this = robotonmyrequestform;
}

//Copy-Assignment Operator Overload
RobotonmyRequestForm&	RobotonmyRequestForm::operator=(RobotonmyRequestForm const &robotonmyrequestform){
	return *this;
}

std::string	const RobotonmyRequestForm::getTarget() const {
	return this->_target;
}

void RobotonmyRequestForm::beExecuted(Bureaucrat const &executor) const {
	std::cout << "zZZZZZZZZZZZz" << std::endl;
	srand(time(0));
	int random = (rand() % (2 - 1 + 1)) + 1;
	if (random == 1)
		std::cout << this->getTarget() << " has been successfully robotomized." << std::endl;
	else
		std::cout << this->getTarget() << "'s robotomization has failed." << std::endl;
}
