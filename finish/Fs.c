// Implementation of the File System ADT
// COMP2521 Assignment 1

// Written by:
// Date:

#include <assert.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "FileType.h"
#include "Fs.h"
#include "utility.h"

struct FsRep {
     File root;
     File curr;
};

struct file {
    FileType type;
    File parent;
    File child;
    File next;
    char name[PATH_MAX];
    char path[PATH_MAX];
};

Fs FsNew(void) {
    // TODO
    return NULL;
}

File FileNew(char name, File parent, FileType type) {
    File file = malloc(sizeof(file));    

    strcpy(file->name, name);
    file->parent = parent;
    file->type = type;
    file->child = NULL;
    file->next = NULL;

    if (_parent != NULL) {

        strcpy(file->path, _parent->path);
        strcat(file->path, "/");
        strcat(file->path, name);

    }
    else {

        strcpy(file->path, "/");

    }

    return file;

}

void FsGetCwd(Fs fs, char cwd[PATH_MAX + 1]) {
    // TODO
}

void FsFree(Fs fs) {
    // TODO
}

void FsMkdir(Fs fs, char *path) {
    // TODO
}

void FsMkfile(Fs fs, char *path) {
    // TODO
}

void FsCd(Fs fs, char *path) {
    // TODO
}

void FsLs(Fs fs, char *path) {
    // TODO
}

void FsPwd(Fs fs) {
    // TODO
}

void FsTree(Fs fs, char *path) {
    // TODO
}

void FsPut(Fs fs, char *path, char *content) {
    // TODO
}

void FsCat(Fs fs, char *path) {
    // TODO
}

void FsDldir(Fs fs, char *path) {
    // TODO
}

void FsDl(Fs fs, bool recursive, char *path) {
    // TODO
}

void FsCp(Fs fs, bool recursive, char *src[], char *dest) {
    // TODO
}

void FsMv(Fs fs, char *src[], char *dest) {
    // TODO
}

