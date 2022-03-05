#include <stdio.h>

int main()
{
	FILE *infile;
	char text[100];
	infile = fopen("file.txt", "r");
	if (infile)
	{	
		perror("打开文件失败");
		return -1;
	}
	fgets(text, 100, infile);
	puts(text);
	fclose(infile);
	return 0;
}
