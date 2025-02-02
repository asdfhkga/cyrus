#ifndef _UTILS_H_
#define _UTILS_H_

struct file_data {
    int size;
    void *data;
};

extern struct file_data *file_load(char *filename);
extern void file_free(struct file_data *filedata);
extern char *get_content_type(char *filename);
extern char *find_body(char *request);
extern char *get_uptime_string(int seconds);
extern int strlen_int(int value);

#endif