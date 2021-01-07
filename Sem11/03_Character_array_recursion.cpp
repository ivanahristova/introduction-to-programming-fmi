// Дали една дума е префикс на друга
bool isPrefix(char* prefix, char* text)
{
	if (prefix[0] == '\0')
		return true;

    return prefix[0] == text[0] && isPrefix(++prefix, ++text);
}

// Дали дума се съдържа в друга
bool isSubstring(char* str, char* text, int textSize, int strSize)
{
	if (textSize < strSize)
		return false;
	return isPrefix(str, text) || isSubstring(str, ++text, textSize - 1, strSize);
}