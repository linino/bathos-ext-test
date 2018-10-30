/*
 * Copyright (c) dog hunter AG - Zug - CH
 * Public domain
 * Author: Davide Ciminaghi <ciminaghi@gnudd.com> 2016
 */
#include <bathos/bathos.h>

/*
 * test task
 */

static void *test_periodic(void *arg)
{
	printf("test periodic\n");
	return NULL;
}

static int test_init(void *arg)
{
	printf("test init\n");
	return 0;
}

static struct bathos_task __task t_test = {
	.name = "test", .period = 5 * HZ,
	.job = test_periodic,
	.arg = NULL,
	.init = test_init,
	.release = 3,
};
