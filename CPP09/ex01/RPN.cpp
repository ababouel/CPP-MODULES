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
        if (!var.empty())
        {
            if (isNum(var))
			    st.push(std::stoi(var));
            else if (isOP(var) && st.size() >= 2)
                resultOP(var);
            else
                throw std::runtime_error("Error\n");
        }
	}
    std::cout << st.top() << std::endl;
}

bool    RPN::isNum(std::string str)
{
    std::string::iterator it = str.begin();
    while (it != str.end())
    {
        if (!std::isdigit(*it))
            return (false);
        it++;
    }
    return (true);
}

bool			RPN::isOP(std::string str)
{
    if (str == "/" || str == "*"
        || str == "-" || str == "+")
        return (true);
    else
        return (false);
}

void    RPN::resultOP(std::string str)
{
    op2 = st.top();
    st.pop();
    op1 = st.top();
    st.pop();
    if (str == "/")
    {
        if (op2 == 0)
            throw std::runtime_error("Error: Division by zero");
        st.push(op1 / op2); 
    }
    else if (str == "*")
        st.push(op1 * op2); 
    else if (str == "-")
        st.push(op1 - op2); 
    else if (str == "+")
        st.push(op1 + op2);
    else
        std::cout << "Error\n";
}