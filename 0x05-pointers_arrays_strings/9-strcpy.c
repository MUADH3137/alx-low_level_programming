/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: Destination string buffer
 * @src: Source string to be copied
 *
 * Return: Pointer to destination string buffer
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; *(src + i) != '\0'; i++)
        *(dest + i) = *(src + i);
    *(dest + i) = '\0';

    return (dest);
}

