#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 1){
	printf ("?\ntry\n./l2 -h\n./l2 --help\n");
	exit(1);
    }
    
    int c = 0;
    
    char *opt = argv[1];
    
    if(opt[1] == '-')
	opt[1] = 'h';
    if(strcmp(opt, "-hhelp") && (opt[2] != NULL)){
	printf("?\ntry\n./l2 -h\n./l2 --help\n");
    exit(1);
    }
    switch(opt[1]){
	default:
	    printf("?\ntry\n./l2 -h\n./l2 --help\n");
	    break;
	case 'h':
	    printf("Авторы: Александр Шихалев\n\tАлина Насонова\n\tГригорий Голомидов\nВсе доступные аргументы:\n\t-c - Строка ввода команд для вызова проекта из лабораторной 2\n");
	    printf("\t-p - Порождение процесса по его имени и возврат в строку команд после завершения дочернего процесса\n");
	    printf("\nКраткое описание проекта:\n\tПроект позволяет работать с процессами в ОС Linux\n");
	    printf("Примеры запуска:\n\t./l2 -m <путь к файлу> <пункт назначения файла\n");
	    printf("\t./l2 -c <путь к файлу> <пункт назначениф файла>\n\t./l2 -d <путь к файлу>");
	    printf("\n\t./l2 -s <директория>\n\t./l2 -l <директория>\n");
	    printf("\t<Путь к файлу>/<пункт назначения файла> для -m, -c, -d может быть путем к файлу </home/admin/text.txt> или именем файла в текущей папке <text.txt>\n");
	    printf("\t<Директория> для -s может быть путем </home/admin/>, текущей директорией <.>, файлом в текущей дир. <text.txt>, файлом в другой дир. </home/admin/text.txt>\n");
        break;
    }
}