#!/bin/bash
<<<<<<< HEAD
gcc -c ./*.c
ar -rc liball.a ./*.o
=======
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -crs liball.a *.o
>>>>>>> 541acbebf774f3283784335495d080035b099aad
