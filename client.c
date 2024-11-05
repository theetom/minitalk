/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:40:08 by toferrei          #+#    #+#             */
/*   Updated: 2024/11/04 18:35:51 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main(int argc, char **argv)
{
	pid_t	pid;
	if (argc != 3)
		return (1);
	if (kill(pid, 0) ==)
	{

	}
	pid = ft_atoi(argv[])
	if ()




	
	pid_t pid;
	ft_printf("Enter PID of Program 2: ");
	scanf("%d", &pid);

	// Send SIGUSR1 signal to Program 2
	if (kill(pid, SIGUSR1) == -1) {
		perror("Error sending signal");
		exit(EXIT_FAILURE);
	}
	usleep(1);
	printf("Signal 1 sent to Program 2\n");
	if (kill(pid, SIGUSR2) == -1) {
		perror("Error sending signal");
		exit(EXIT_FAILURE);
	}

	printf("Signal 2 sent to Program 2\n");
	return 0;
}