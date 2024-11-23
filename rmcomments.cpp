/*
 * CSc103 Project 4: uncommenting C/C++
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *
 *
 * Finally, please indicate approximately how many hours you spent on this:
 * #hours:
 */

#include <cstdio> // printf and friends
// strings might help if you want to do a nice job removing whitespace
#include <string>
using std::string;

enum state
{
	Normal,
	Slash,
	Line,
	CheckBlockStart,
	CheckBlockEnd,
	Literal,
	CharLiteral
};


int main()
{
	/* TODO: write me... */
	char c;
	state currState = Normal;

	while (scanf("%c", &c) > 0)
	{
		switch(currState)
		{
			case Normal:
				if (c == '/')
				{
					currState = Slash;
				}
				else if (c == '"')
				{
					printf("%c",c);
					currState = Literal;
				}
				else if (c == '\'')
				{
					printf("%c",c);
					currState = CharLiteral;
				}
				else
				{
					printf("%c",c);
				}
			break;
			case Slash:
				if (c == '/')
				{
					currState = Line;
				}
				else if (c == '*')
				{
					currState = CheckBlockStart;
				}
				else
				{
					printf("/%c",c);
					currState = Normal;
				}
			break;
			case Line:
				if (c == '\n')
				{
					currState = Normal;
					printf("%c",c);
				}
			break;
			case CheckBlockStart:
				if (c == '*')
				{
					currState = CheckBlockEnd;
				}
			break;
			case CheckBlockEnd:
				if (c == '/')
				{
					currState = Normal;
				}
				else
				{
					currState = CheckBlockStart;
				}
			break;
			case Literal:
				printf("%c",c);
				if (c == '"')
				{
					currState = Normal;
				}
			break;
			case CharLiteral:
				printf("%c",c);
				if (c == '\'')
				{
					currState = Normal;
				}
			break;
		}
	}

	return 0;
}
