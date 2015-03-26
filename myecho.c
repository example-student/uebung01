/*
 * Grundgebiete der Informatik 4
 *
 * Uebung 1
 *
 * myecho
 *
 */

int main(int argc, char* argv[], char* envp[])
{
    int i;

    for(i = 1; i < argc; i++)
    {
        printf("%s ", argv[i]);
    }

    printf("\n");
}
