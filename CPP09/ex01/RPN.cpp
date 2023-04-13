#include "RPN.hpp"

RPN::RPN(char* args)
{
    ss << args;
    
}
RPN::~RPN() {}

void    RPN::result()
{
    std::string var;
    
    while (std::getline(ss, var, ' ')){
		if (!var.empty() && isNum(var))
			stack.push(std::stoi(var));
        else if (is)
	}
}

bool    RPN::isNum(std::string str)
{

    return (false);
}

bool			RPN::isOP(std::string str)
{

}