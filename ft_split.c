/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 22:01:47 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/14 20:30:51 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// static void		*ft_free(char **room)
// {
//     size_t    i;

//     i = 0;
//     while (room[i])
//     {
//         free(room[i]);
//         i++;
//     }
//     free(room);
//     return (NULL);
// }

// static char	*make_string(const char *s, int i, int run)
// {
// 	size_t		index;
// 	char	*string;

// 	index = 0;
// 	string = malloc(sizeof(char) * (run + 1));
// 	if (!string)
// 		return (NULL);
// 	while (run > 0)
// 	{
// 		string[index] = s[i - run];
// 		index++;
// 		run--;
// 	}
// 	string[index] = '\0';
// 	return (string);
// }

// static char	**chase_letter(const char *s, char **room_p, char c)
// {
// 	size_t		i;
// 	int		run;
// 	int		follow;
// 	char	*str;

// 	i = 0;
// 	run = 0;
// 	follow = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 			run++;
// 		if ((s[i] == c || s[i + 1] == '\0') && run != 0)
// 		{
// 		if (s[i] != c && s[i + 1] == '\0')
// 				i++;
// 			str = make_string(s, i, run);
// 			if (str == NULL)
// 			{
// 				ft_free(room_p);
// 				return (NULL);
// 			}
// 			room_p[follow++] = str;
// 			run = 0;
// 		}
// 		i++;
// 	}
// 	return (room_p);
// }

// char 	**ft_split(char const *s, char c)
// {
// 	int		room_n;
// 	char	**result;
// 	char	**room_p;
// 	size_t		i;

// 	if (!s)
// 		return (NULL);
// 	room_n = 0;
// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 		{
// 			if (s[i + 1] == c || s[i + 1] == '\0')
// 				room_n++;
// 		}
// 		i++;
// 	}
// 	room_p = (char **)malloc(sizeof(char *) * (room_n + 1));
// 	if (!room_p)
// 		return (NULL);
// 	result = chase_letter(s, room_p, c);
// 	if (result == NULL)
// 		return (ft_free(room_p));
// 	result[room_n] = NULL;
// 	return (result);
// }

static void	*ft_free(char **room_p)
{
	size_t	i;

	i = 0;
	while (room_p[i])
	{
		free(room_p[i]);
		i++;
	}
	free(room_p);
	return (NULL);
}

static size_t	chunk_n(const char *s, char c)
{
	size_t	i;
	size_t	chunk;

	i = 0;
	chunk = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
				chunk++;
		}
		i++;
	}
	return (chunk);
}

// mallocで1ブロック分の文字列を代入したポインタを返す
static char	*make_string(const char *s, size_t run)
{
	size_t	index;
	char	*string;

	index = 0;
	string = malloc(sizeof(char) * (run + 1));
	if (!string)
		return (NULL);
	while (index < run)
	{
		string[index] = s[index];
		index++;
	}
	string[index] = '\0';
	return (string);
}

static size_t	str_count(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
	{
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	run;
	char	*str;
	size_t	room_n;
	char	**room_p;
	size_t	i;

	if (!s)
		return (NULL);
	room_n = 0;
	run = 0;
	// room_nを取得する
	room_n = chunk_n(s, c);
	room_p = (char **)malloc(sizeof(char *) * (room_n + 1));
	if (!room_p)
		return (NULL);
	// whileをつかってroom_pに1つずつmallocで確保した文字列を代入する
	i = 0;
	while (i < room_n)
	{
		// 区切り文字が続く限り進める
		while (*s == c)
			s++;
		// 開始位置は&nで渡す
		// 文字の長さ = str_count(s, c, &開始位置)
		run = str_count(s, c);
		str = make_string(s, run);
		if (!str)
		{
			ft_free(room_p);
		}
		// アドレスずらす
		s += run + 1;
		// 区切り文字が続く限り進める
		while (*s == c)
			s++;
		room_p[i] = str;
		i++;
	}
	room_p[room_n] = NULL;
	return (room_p);
}

// #include <stdio.h>

// int		main(void)
// {
// 	char **tab;
// 	tab = ft_split("tripouille", 0);

// 	int i;
// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// 	system("leaks a.out");
// 	return (0);
// }

// int		main(void)
// {
// 	char **split_str;
// 	//char const *s = "  tripouille  42  ";
// 	//char c = ' ';
// 	int i;

// 	//split_str = ft_split(s, c);
// 	split_str = ft_split("--1-2--3---4----5-----42", '-');
// 	//printf("s = roppongi  42tokyo japan\n");
// 	printf("---result---\n");
// 	i = 0;
// 	while (split_str[i])
// 	{
// 		printf("%s\n", split_str[i]);
// 		i++;
// 	}
// 	return (0);
// }
