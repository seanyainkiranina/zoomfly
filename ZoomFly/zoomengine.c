
#include "gd.h"
#include "gdfonts.h"
#include "gdfontl.h"
#include "gdfontg.h"
#include "gdfontmb.h"
#include "gdfontt.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "unistd.h"
#include <fcntl.h>
#include <io.h>

#include "zoomengine.h"



int unitTest() {

	FILE *outfile;

	if ((outfile = fopen("test.png", "wb")) == NULL) {
		fprintf(stderr, "Failed to open output file, \n");
		return FALSE;
	}
	gdImagePtr image = gdImageCreate(640, 480);
	int colour = gdImageColorExact(image, 255, 0, 0);
	gdImageLine(image, 0, 0, 639, 479, colour);
	gdImagePng(image, outfile);
	fclose(outfile);
	gdImageDestroy(image);


	return FALSE;
}