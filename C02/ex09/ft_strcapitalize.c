/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:38:53 by grmortel          #+#    #+#             */
/*   Updated: 2023/02/23 18:08:20 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_char;

	i = 0;
	first_char = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (first_char)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				first_char = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		else
			first_char = 1;
		i++;
	}
	return (str);
}
