/*
 * © 2018 Aaron Taylor <ataylor at subgeniuskitty dot com>
 * See LICENSE.txt file for copyright and license details.
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

#define VER_MAJOR 1
#define VER_MINOR 0

void print_usage(char ** argv) {
    printf( "PROJECT_NAME %d.%d (www.subgeniuskitty.com)\n"
            "Usage: %s [option] ...\n"
            "  -h    Help (prints this message)\n"
            , VER_MAJOR, VER_MINOR, argv[0]
    );
}

int main(int argc, char ** argv) {
    /*
     * Process command line arguments
     */
    int c;
    while((c = getopt(argc,argv,"h")) != -1) {
        switch(c) {
            case 'h':
                print_usage(argv);
                exit(EXIT_SUCCESS);
                break;
            default:
                break;
        }
    }

    printf("Hello, World!\n");

    exit(EXIT_SUCCESS);
}
