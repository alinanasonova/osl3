#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    if (argc == 1){
	printf ("?\ntry\n./l2 -h\n./l2 --help\n");
	exit(1);
    }
    
    int c = 0;
    
    char *opt = argv[1];

    //pid_t p = fork();

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
	    printf("Примеры запуска:\n\t./l3 -c <путь к файлу> <аргументы>\n");
	    printf("\t\n\t");
	    printf("\n\t\n\t\n");
	    printf("\t\n");
	    printf("\t\n");
	    break;
	case 'c':
	    //pid_t p = fork();
	    //if(p == 0){
	    execl(argv[2], argv[2], argv[3], argv[4], argv[5]);
	    //exit(127);
	    //}
	    //else{
	    //waitpid(p, 0, 0);
	    //}
	    break;
    }
}