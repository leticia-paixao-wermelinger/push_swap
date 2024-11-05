
#include "push_swap.h"

int	check_errors(char **str)
{
	int	i;
	int	ret;

	i = 1;
	ret = NO_ERROR;
	while (str[i])
	{
		ret = is_num(str[i]);
		if (ret == ERROR)
			return (ret);
		ret = is_int(str[i]);
		if (ret == ERROR)
			return (ret);
		i++;
	}
	ret = duplicate(str);
	return (ret);
}

int	is_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[0] != '-' && str[0] != '+')
			return (ERROR);
		i++;
	}
	return (NO_ERROR);
}

int	is_int(char *str)
{
	long int	n;

	if (my_strlen(str) > 11)
		return (ERROR);
	n = my_atol(str);
	if (n > INT_MAX || n < INT_MIN)
		return (ERROR);
	return (NO_ERROR);
}

int	duplicate(char **str)
{
	int	i;
	int	j;
	int	*arr;

	i = 0;
	arr = make_arr(str);
	while (i <= len_numb(str))
	{
		j = i + 1;
		while (j < len_numb(str))
		{
			if (arr[i] == arr[j])
				return (ERROR);
			j++;
		}
		i++;
	}
	free(arr);
	return (NO_ERROR);
}

int	check_sorted(t_node *list)
{
	t_node	*t1;
	t_node	*t2;

	t1 = list;
	while (t1)
	{
		t2 = t1;
		while (t2)
		{
			if (t1->val > t2->val)
				return (DIF);
			t2 = t2->next;
		}
		t1 = t1->next;
	}
	return (ORDER);
}
