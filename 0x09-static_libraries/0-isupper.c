#include "main.h"
<<<<<<< HEAD
/**
*_isupper - function that verifies if a  character is uppercase or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
=======

/**
 * _isupper - Entry point
 *
 * @c: c is a variable name
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
if (c >= 97 && c <= 122)
return (0);
if (c >= 65 && c <= 90)
return (1);

return (0);
>>>>>>> 541acbebf774f3283784335495d080035b099aad
}
