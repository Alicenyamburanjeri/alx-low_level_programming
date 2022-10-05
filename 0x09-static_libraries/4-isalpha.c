#include "main.h"
/**
<<<<<<< HEAD
*_isalpha - controls if a character is alphabetical
*@c: character to be verified
*Return: return 0 or 1
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);

=======
 * _isalpha -Entry point
 *@c: The character to print
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
>>>>>>> 541acbebf774f3283784335495d080035b099aad
return (0);
}
