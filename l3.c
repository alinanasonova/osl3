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

    pid_t p;

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
	execl(argv[2], argv[2], argv[3], argv[4], argv[5], NULL);
	break;
    case 'p':
	switch(p = fork()) {
	case -1:
	    perror("fork");
	    exit(-1);
	    break;
	case 0:
	    printf(" CHILD: Это процесс-потомок!\n");
	    printf(" CHILD: Мой PID -- %d\n", getpid());
	    printf(" CHILD: PID моего родителя -- %d\n", getppid());
	    break;
	default:
	    printf("PARENT: Это процесс-родитель!\n");
	    printf("PARENT: Мой PID -- %d\n", getpid());
	    printf("PARENT: PID моего потомка %d\n",p);
	    printf("PARENT: Я жду, пока потомок не вызовет exit()...\n");
	    waitpid(p, 0, 0);
	    break;
	}
	char *killme = (char*)malloc(sizeof(char)*5);
	printf("Kill? PID:\n");
	scanf("%s", killme);
	kill(atoi(killme), 9);
	break;
    }
}