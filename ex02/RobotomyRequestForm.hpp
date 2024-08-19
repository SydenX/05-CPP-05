
#ifndef ROBOTONMYREQUESTFORM_HPP
# define ROBOTONMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class RobotonmyRequestForm: public AForm {
	private:
		const std::string _target;
	protected:
		
	public:
		RobotonmyRequestForm();
		RobotonmyRequestForm(std::string target);
		~RobotonmyRequestForm();
		RobotonmyRequestForm(RobotonmyRequestForm const &robotonmyrequestform);
		RobotonmyRequestForm& 	operator=(RobotonmyRequestForm const&);
		std::string	const getTarget() const;
		void beExecuted(Bureaucrat const &executor) const;
};

#endif
