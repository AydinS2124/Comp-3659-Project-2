int send_file_response(int client_fd, const char *document_root, const char *path);

static int is_safe_path(const char *path);	

static int build_file_path(const char *root, const char *path, char *out, size_t out_size);

static int open_regular_file(const char *full_path, off_t *size);

static const char *content_type(const char *path);

static int stream_file(int file_fd, int client_fd);