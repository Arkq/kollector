/*
 * kollector - find.h
 * Copyright (c) 2012 Arkadiusz Bokowy
 *
 * This file is a part of a kollector.
 *
 * This project is licensed under the terms of the MIT license.
 *
 */

#ifndef KOLLECTOR_FIND_H_
#define KOLLECTOR_FIND_H_

#include <dirent.h>
#include <sys/stat.h>

#define DIR_SEPARATOR '/'

char *joindir(const char *path1, const char *path2);

typedef int (*find_callback_t)(const char *dirname, const char *entry,
		const struct stat *entry_stat, void *data);
int find(const char *dirname, find_callback_t callback, void *data);

#endif /* KOLLECTOR_FIND_H_ */
