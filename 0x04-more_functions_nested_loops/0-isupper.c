#include <unistd.h>
#include "main.h"
/** _isupper - checks for upper case
 * @c :output
 *
 * return: 0 on sucess
 */
int _isupper(int c)
{
	if (c >= 'A' && c<= 'Z')
	{ return (1);
	}
	else
		return (0);
}
