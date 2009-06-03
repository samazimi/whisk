#ifndef H_WHISKER_IO_WHISKBIN1
#define H_WHISKER_IO_WHISKBIN1

#include <stdio.h>
#include "trace.h"

int            is_file_whiskbin1         ( const char* filename);
FILE          *open_whiskbin1            ( const char* filename, const char* mode);
void           close_whiskbin1           ( FILE* fp);
void           append_segments_whiskbin1 ( FILE *fp, Whisker_Seg *wv, int n );
Whisker_Seg   *read_segments_whiskbin1   ( FILE *file, int *n);

#endif //H_WHISKER_IO_WHISKER1