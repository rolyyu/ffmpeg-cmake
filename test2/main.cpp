extern "C" {
#include <libavformat/avformat.h>
}

const char* filename = "test.mp4";

int main(int argc, const char** argv) {

    AVFormatContext* pFormatCtx = NULL;
    int ret = avformat_open_input(&pFormatCtx, filename, NULL, NULL);
    if (ret < 0)
    {
        printf("Could not open file %s.\n", filename);
        return -1;
    }

    printf("Opened the file!!!!\n");
    return 0;
}
