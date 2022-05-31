/**
 * _atoi - atoi
 * @s: pointer
 * Return: ret
 */
int _atoi(char *s)
{
    int flag = 1;
	unsigned int ret = 0;
	int i = 0;
	unsigned int si = 1;

	for (; s[i]; i++)
		if (flag)
		{
			if (s[i] == '-')
			{
				si = si * -1;
			}
			if (s[i] == '+')
			{
				si = si * 1;
			}
			if (s[i] >= '0' && s[i] <= '9')
			{
				ret = (ret * 10) + (s[i] - 48);
				if (s[i + 1] < '0' || s[i + 1] > '9')
				{
					flag = 0;
				}
			}
		}
		else
			break;
	ret = ret * si;
	return (ret);
}
