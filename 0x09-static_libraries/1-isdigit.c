#include "main.h"
<<<<<<< HEAD
/**
*_isdigit - function that verifies if a  character is a digit or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
=======

/**
 * _isdigit - Entry point
 *
 * @c: c is a variable name
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
>>>>>>> 541acbebf774f3283784335495d080035b099aad

return (0);
}
