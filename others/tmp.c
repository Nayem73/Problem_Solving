/* C++ program to count no of words
from given input string. */
#include <stdio.h>

//using namespace std;

#define OUT 0
#define IN 1

// returns number of words in str
unsigned countWords(char *str)
{
	int state = OUT;
	unsigned wc = 0; // word count

	// Scan all characters one by one
	while (*str)
	{
		// If next character is a separator, set the
		// state as OUT
		if (*str == ' ' || *str == '\n' || *str == '\t')
			state = OUT;

		// If next character is not a word separator and
		// state is OUT, then set the state as IN and
		// increment word count
		else if (state == OUT)
		{
			state = IN;
			++wc;
		}

		// Move to next character
		++str;
	}

	return wc;
}

// Driver code
int main()
{   int t; scanf("%d", &t); t++;
     int k = 0;
    while (t--) {
	char str[6700];
    //cout << "Enter a string: ";
    gets(str);
    if (k==0) {
        k++; continue;
    }
	printf("%d\n", countWords(str));
	    
	}
}

// This is code is contributed by rathbhupendra
