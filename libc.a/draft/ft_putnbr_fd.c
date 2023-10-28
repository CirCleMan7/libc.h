/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:41:22 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/28 17:47:55 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lenint(int n)
{
	int	count;

	count = 1;
	while (n > 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	number;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n < 0 && n != -2147483648)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10 && n != -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n != -2147483648)
	{
		number = n + 48;
		write(fd, &number, 1);
	}
}
