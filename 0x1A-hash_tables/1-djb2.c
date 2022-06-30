/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 * Description:
 * djb2: This algorithm (k=33) was first reported
 * by dan bernstein many years ago in comp.lang.c.
 * another version of this algorithm
 * (now favored by bernstein)
 * uses xor: hash(i) = hash(i - 1) * 33 ^ str[i];
 * the magic of number 33 (why it works better
 * than many other constants, prime or not)
 * has never been adequately explained.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
