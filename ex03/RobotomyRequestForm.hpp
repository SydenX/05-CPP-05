
#ifndef ROBOTONMYREQUESTFORM_HPP
# define ROBOTONMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class RobotomyRequestForm: public AForm {
	private:
		const std::string _target;
	protected:
		
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &robotonmyrequestform);
		RobotomyRequestForm& 	operator=(RobotomyRequestForm const&);
		std::string	const getTarget() const;
		void execute(Bureaucrat const &executor) const;
};

#endif
