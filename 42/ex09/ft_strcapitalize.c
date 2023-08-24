
int	ft_char_is_alpha(char c)
{
	if (!(c >= 'A' && c <= 'Z')
		&& !(c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}

int	ft_char_is_numeric(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

char    upper(char c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return (c);
}

char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!ft_char_is_alpha(str[i]) && ft_char_is_alpha(str[i + 1])
			&& !ft_char_is_numeric(str[i]))
			str[i + 1] = upper(str[i + 1]);
		i++;
    }
	return (str);
}
