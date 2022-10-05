#include "main.h"
/**
<<<<<<< HEAD
*_islower - controls if a character is in lowercase
*@c: character to be verified
*Return: return 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

=======
 * _islower -Entry point
 *@c: The character to print
 *
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
>>>>>>> 541acbebf774f3283784335495d080035b099aad
return (0);
}
