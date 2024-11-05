/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:41:01 by toferrei          #+#    #+#             */
/*   Updated: 2024/11/04 16:54:47 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_sigusr1(int sig)
{
	printf("sig:%d\n", sig);
	printf("Received SIGUSR1 signal from Program 1\n");
}

void	handle_sigusr2(int sig)
{
	printf("sig:%d\n", sig);
	printf("Received SIGUSR2 signal from Program 1\n");
}

int main(void)
{
	// Set up the signal handler for SIGUSR1
	if (signal(SIGUSR1, handle_sigusr1) == SIG_ERR) {
		perror("Error setting up signal handler");
		exit(EXIT_FAILURE);
	}
	if (signal(SIGUSR2, handle_sigusr2) == SIG_ERR) {
		perror("Error setting up signal handler");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", getpid());
	printf("Waiting for signal...\n");

	// Infinite loop to keep the program running
	while (1)
	{
		pause();  // Wait for signals
	}

	return 0;
}
