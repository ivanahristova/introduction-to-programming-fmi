#include <iostream>
#include <string>
using namespace std;

bool isKeyword(char* str);
bool startsWithADigit(char str[]);
bool containsInvalidSymbol(char* str);

int main()
{
	char str[1024];
	cin >> str;

	cout << !(containsInvalidSymbol(str) || isKeyword(str) || startsWithADigit(str)) << endl;
}

bool containsInvalidSymbol(char* str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] < 'a' || str[i] > 'z') &&
			(str[i] < 'A' || str[i] > 'Z') &&
			(str[i] < '0' || str[i] > '9') &&
			(str[i] != '_'))
			return true;
	}
	return false;
}

bool startsWithADigit(char str[])
{
	return str[0] >= '0' && str[0] <= '9';
}

bool isKeyword(char* str)
{
	if (!strcmp(str, "auto") || !strcmp(str, "double")
		|| !strcmp(str, "int") || !strcmp(str, "struct")
		|| !strcmp(str, "break") || !strcmp(str, "else")
		|| !strcmp(str, "long") || !strcmp(str, "switch")
		|| !strcmp(str, "case") || !strcmp(str, "enum")
		|| !strcmp(str, "register") || !strcmp(str, "char")
		|| !strcmp(str, "extern") || !strcmp(str, "typedef")
		|| !strcmp(str, "return") || !strcmp(str, "union")
		|| !strcmp(str, "const") || !strcmp(str, "float")
		|| !strcmp(str, "short") || !strcmp(str, "unsigned")
		|| !strcmp(str, "continue") || !strcmp(str, "for")
		|| !strcmp(str, "signed") || !strcmp(str, "void")
		|| !strcmp(str, "default") || !strcmp(str, "goto")
		|| !strcmp(str, "sizeof") || !strcmp(str, "volatile")
		|| !strcmp(str, "do") || !strcmp(str, "if")
		|| !strcmp(str, "asm") || !strcmp(str, "while")
		|| !strcmp(str, "dynamic_cast") || !strcmp(str, "static")
		|| !strcmp(str, "namespace") || !strcmp(str, "reinterpret_cast")
		|| !strcmp(str, "bool") || !strcmp(str, "catch")
		|| !strcmp(str, "explicit") || !strcmp(str, "false")
		|| !strcmp(str, "new") || !strcmp(str, "operator")
		|| !strcmp(str, "static_cast") || !strcmp(str, "template")
		|| !strcmp(str, "class") || !strcmp(str, "const_cast")
		|| !strcmp(str, "friend") || !strcmp(str, "inline")
		|| !strcmp(str, "private") || !strcmp(str, "public")
		|| !strcmp(str, "this") || !strcmp(str, "throw")
		|| !strcmp(str, "delete") || !strcmp(str, "protected")
		|| !strcmp(str, "mutable") || !strcmp(str, "true")
		|| !strcmp(str, "try") || !strcmp(str, "typeid")
		|| !strcmp(str, "typename") || !strcmp(str, "using")
		|| !strcmp(str, "wchar_t"))
		return true;
	return false;
}