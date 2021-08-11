/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 22:01:47 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/12 00:27:09 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


static char     *make_string(int i, int run, const char *s)
{
    int index;
    char    *string;

    index = 0;
    string = malloc(sizeof(char) * (run + 1));
    while (run > 0)
    {
        string[index] = s[i - run];
        index++;
        run--;
    }
    string[index] = '\0';
    return (string);
}


static  char **chase_letter(const char *s, char **new_str, char c)
{
    int i;
    int run;
    int follow;
    char *str;

    i = 0;
    run = 0;
    follow = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c)
            run++;
        if ((s[i] == c || s[i + 1] == '\0') && run != 0)
        {
            if (s[i + 1] == '\0' && s[i] != c)
                i++;
            str = make_string(i, run, s);
            new_str[follow++] = str;
                run = 0;
        }
        i++;
    }
    return (new_str);
}

char 	**ft_split(char const *s, char c)
{
    int num;
    char **result;
    char **p;
    int i;

	if (s == '\0' || c == '\0')
        return (NULL);
    num = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            if (s[i + 1] == c  || s[i + 1] == '\0')
            num++;
        }
        i++;
    }
    p = (char **)malloc(sizeof(char *) * (num + 1));
    result = chase_letter(s, p, c);
    result[num] = 0;
    return (result);
}

int		main(void)
{
	char **split_str;
    char const *s = "41234424567894";
	char c = '4';
    int i;

	split_str = ft_split(s, c);
	printf("41234424567894\n");
    i = 0;
    while (split_str[i])
    {
	    printf("%s\n", split_str[i]);
        i++;
    }
    return (0);
}
