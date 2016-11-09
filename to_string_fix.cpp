#include <iostream>

// FIX STARTS HERE
#include <string>
#include <sstream>


template<typename T>
std::string to_string(const T& value)
{
    std::ostringstream stream;
    stream << value;
    return stream.str();
}
// FIX ENDS HERE

int main()
{
    std::string s = to_string(1234);
    std::cout << s << std::endl;
    return 0;
}
