#ifndef STORAGE_H
#define STORAGE_H

int lru_maintainer_store(void *storage, const int clsid);
int start_storage_compact_thread(void *arg);

#endif
