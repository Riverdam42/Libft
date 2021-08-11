/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:07:47 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/10 17:43:28 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		search_flag(char key, char *charset)
{
	int num;

	num = 0;
	if (key == '\0')
		return (1);
	while (charset[num] != '\0')
	{
		if (charset[num] == key)
			return (1);
		num++;
	}
	return (0);
}

int		string_count(char *str, char *charset)
{
	int		num;
	int		count;

	num = 0;
	count = 0;
	while (str[num] != '\0')
	{
		if (search_flag(str[num], charset) == 0)
		{
			if (search_flag(str[num + 1], charset) == 1 || str[num + 1] == '\0')
			{
				count++;
			}
		}
		num++;
	}
	return (count);
}

char	*make_word(int num, int run, char *str)
{
	int		index;
	char	*word;

	index = 0;
	word = malloc(sizeof(char) * (run + 1));
	while (run > 0)
	{
		word[index] = str[num - run];
		index++;
		run--;
	}
	word[index] = '\0';
	return (word);
}

char	**chase_letter(char *str, char **strs, char *charset)
{
	int		num;
	int		run;
	int		follow;
	char	*word;

	num = 0;
	run = 0;
	follow = 0;
	while (str[num] != '\0')
	{
		if (search_flag(str[num], charset) == 0)
			run++;
		if ((search_flag(str[num], charset) == 1 || str[num + 1] == '\0') &&
				run != 0)
		{
			if (str[num + 1] == '\0' && search_flag(str[num], charset) == 0)
				num++;
			word = make_word(num, run, str);
			strs[follow++] = word;
			run = 0;
		}
		num++;
	}
	return (strs);
}

char	**ft_split(char *str, char *charset)
{
	char	**p;
	char	**result;
	int		number;

	number = string_count(str, charset);
	p = (char **)malloc(sizeof(char *) * (number + 1));
	result = chase_letter(str, p, charset);
	result[number] = 0;
	return (result);
}


#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char	**test;
	int		num;

	test = ft_split("abcabcabc", "ab");
	num = 0;
	while (test[num] != '\0')
	{
		printf("%s\n", test[num]);
			num++;
	}
	return (0);
}
