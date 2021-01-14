#include <iostream>

// нередактирано решение!

/* Примери:
a b c d e f g h i j k l m n o
9
a . f g /
Maximum consecutive words in text: 2
Statistic:
a 1
. 0
f 1
g 1
/ 0
Percent: 60%

i study cs at the faculty of mathematics and informatics at sofia university st. kliment ohridski
20
cs at the at sofia .
Maximum consecutive words in text: 5
Statistic:
cs 1
at 2
the 1
at 2
sofia 1
. 0
Percent: 83.3333%

a b c d e f g h i j k l m n o p q r s t u v w x y z this is the english alphapet
29
a . f g / this is t l n . y z
Maximum consecutive words in text: 5
Statistic:
a 1
. 0
f 1
g 1
/ 0
this 1
is 1
t 1
l 1
n 1
. 0
y 1
Percent: 76.9231%
*/

bool existsInText(char text[], int textSize, char* word)
{
	int wordIndex = 0;
	for (int i = 0; i < textSize; i++)
	{
		if (text[i] != word[wordIndex])
			continue;
		
		if (i != 0 && text[i - 1] != ' ') // it is not separated by a space
			continue;

		while (wordIndex < strlen(word) && text[i++] == word[wordIndex++])
			;

		if (wordIndex == strlen(word) && (i == textSize || text[i] == ' '))
			return true;
		else
			wordIndex = 0;
	}

	return false;
}

int getTextOccurances(char text[], int textSize, char* word)
{
	int count = 0;
	int wordIndex = 0;
	for (int i = 0; i < textSize; i++)
	{
		if (text[i] != word[wordIndex])
			continue;

		if (i != 0 && text[i - 1] != ' ') // it is not separated by a space
			continue;

		while (wordIndex < strlen(word) && text[i++] == word[wordIndex++])
			;

		if (wordIndex == strlen(word) && (i == textSize || text[i] == ' '))
		{
			wordIndex = 0;
			count++;
		}
		else
			wordIndex = 0;
	}

	return count;
}

int findConsecutiveWordsCount(char text[], int textSize, char* sentence)
{
	int sentenceLength = strlen(sentence);
	char* word = new char[sentenceLength];
	int index = 0;
	int currentCount = 0;
	int maxCount = 0;
	for (int i = 0; i < sentenceLength; i++)
	{
		if ((sentence[i] == ' ' && index > 0) || (index == sentenceLength - 1))
		{
			word[index] = '\0';
			index = 0;
			if (existsInText(text, textSize, word))
			{
				currentCount++;
				if (currentCount > maxCount)
					maxCount = currentCount;
			}
			else
				currentCount = 0;

			continue;
		}
		word[index++] = sentence[i];
	}

	delete[] word;
	return maxCount;
}

void getWordsStatistic(char text[], int textSize, char* sentence)
{
	int sentenceLength = strlen(sentence);
	char* word = new char[sentenceLength + 1];
	int index = 0;
	int currentCount = 0;
	int maxCount = 0;
	for (int i = 0; i < sentenceLength; i++)
	{
		if (sentence[i] == ' ' && index > 0)
		{
			word[index] = '\0';
			index = 0;
			std::cout << word << ' ' << getTextOccurances(text, textSize, word) << std::endl;
			continue;
		}
		word[index++] = sentence[i];
	}
	word[index] = '\0';
	std::cout << word << ' ' << getTextOccurances(text, textSize, word) << std::endl;
	delete[] word;
}

double findSameWordsPercent(char text[], int textSize, char* sentence)
{
	int sentenceLength = strlen(sentence);
	char* word = new char[sentenceLength];
	int index = 0;
	int occured = 0;
	int words = 0;
	for (int i = 0; i < sentenceLength; i++)
	{
		if (sentence[i] == ' ' && index > 0)
		{
			word[index] = '\0';
			index = 0;
			if (existsInText(text, textSize, word))
				occured++;
			
			words++;
			continue;
		}
		word[index++] = sentence[i];
	}

	// for the last word
	if (existsInText(text, textSize, word))
		occured++;
    words++;

	delete[] word;
	return ((double)occured / words) * 100;
}

int main()
{
	const int textMaxSize = 1025;
	char text[textMaxSize];
	for (int i = 0; i < textMaxSize; i++)
	{
		char ch;
		std::cin.get(ch);
		if (ch == '\n')
		{
			text[i] = '\0';
			break;
		}
		text[i] = ch;
	}

	int sentenceSize;
	std::cin >> sentenceSize;
	sentenceSize++;
	std::cin.ignore();
	char* sentence = new char[sentenceSize + 1];
	std::cin.getline(sentence, sentenceSize);
	sentence[sentenceSize] = '\0';

	std::cout << "Maximum consecutive words in text: " << findConsecutiveWordsCount(text, strlen(text), sentence) << std::endl;
	std::cout << "Statistic: " << std::endl;
	getWordsStatistic(text, strlen(text), sentence);
	std::cout << "Percent: " << findSameWordsPercent(text, strlen(text), sentence) << std::endl;

	delete[] sentence;
}