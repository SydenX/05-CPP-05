
#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

//Constructor
ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreation", (137), (145)), _target("NOT A TARGET") {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreation", (137), (145)), _target(target) {}

//Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {
}

//Copy-Constructor
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrubberycreationform) {
	*this = shrubberycreationform;
}

//Copy-Assignment Operator Overload
ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrubberycreationform){
    (void)shrubberycreationform;
	return *this;
}

std::string	const ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void drawTree(std::ofstream &file, int height){
	for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height - i - 1; ++j)
            file << " ";
        for (int k = 0; k < 2 * i + 1; ++k)
            file << "*";
        file << std::endl;
    }
    for (int i = 0; i < height - 1; ++i) {
        for (int j = 0; j < height - 1; ++j)
            file << " ";
        file << "*" << std::endl;
    }
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    (void)executor;
    if (this->isSigned()){
		if (executor.getGrade() <= this->getExecutionGrade()){
            std::ofstream file(this->_target + "_shrubbery");
            if (!file.is_open())
                return ;
            drawTree(file, 5);
            drawTree(file, 10);
            drawTree(file, 15);
            file.close();
		} else
			throw(AForm::GradeTooLowException());
	} else
		throw(AForm::FormNotSignedException());
}
