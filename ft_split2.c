/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 22:01:47 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/11 15:48:57 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int seach_key(char *s, char key)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] == key)
        return (1);
        i++;
    }
    return (0);
}
static char     *make_string(int n, int run, char *s)
{
    int i;
    char    *string;

    i = 0;
    string = malloc(sizeof(char) * (run + 1));
    while (run > 0)
    {
        string[i] = s[n - run];
        i++;
        run--;
    }
    string[i] = '\0';
    return (string);
}

static  char **chase_letter(char *s, char **new_str, char c)
{
    int i;
    int run;
    int follow;
    char *str;

    while (s[i] != '\0')
    {
        if (seach_key(&s[i], c) == 0)
            run++;
        if (s[i + 1] == '\0' && seach_key(&s[i], c) == 0)
        {
            i++;
            str = make_string(i, run, s);
            new_str[follow++] = str;
            run = 0;
        }
        i++;
    }
    return (new_str);
}

char	**ft_split(char const *s, char c)
{
    int num;
    char **result;
    char **p;

	if (s == '\0' || c == '\0')
        return (NULL);
    num = (search_key(s, c) == 0);
    p = (char **)malloc(sizeof(char *) * (num + 1));
    result = chase_letter(s, p, c);
    result[num] = 0;
    return (result);
}

int		main(void)
{
	char split_str;
	char c = "a";
	split_str = ft_split("kawano", c);
	//printf("kawano");
	//printf("%s\n", split_str);
}
