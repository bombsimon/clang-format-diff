#include <iostream>

std::string BuildString(std::string a, std::string b)
{
    return a + b;
}

int main()
{
    std::string one   = BuildString("FOO",
          BuildString("foo", "bar"));
    std::string two   = BuildString("FOOBAR",
          BuildString("foo", "Bizbar"));
    std::string three = BuildString("FOOBIZBAR",
        BuildString("foo", "bar"));
    std::string four  = BuildString("FOOBAR",
         BuildString("foo", "Bizbar"));
}
