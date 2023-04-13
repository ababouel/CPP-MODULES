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
			st.push(std::stoi(var));
        else if (isOP(var) && st.size() >= 2)
            resultOP(var);
        else
            std::cout << "Error\n";
	}
}

bool    RPN::isNum(std::string str)
{

    return (false);
}

bool			RPN::isOP(std::string str)
{

}

void    RPN::resultOP(std::string str)
{
    op2 = st.top();
    op1 = st.top();
    st.pop();
    st.pop();
    if (str == "/")
    else if (str == "*")

    else if (str == "-")
    else if (str == "+")
    else
        std::cout << "Error\n";
}