main(int argc, char *argv[]) {
    char* segment_p = malloc(512);
    char* segment_q = malloc(512);

    strcpy(segment_p, argv[1]);
    free(segment_q);
    free(segment_p);
}
