char **ft_split(char *str, char *charset)
{

}

int main()
{
    int j;
    char **str;

    j  = 0;
    str = ft_split(".../coucou je suis split. si je marche je suis la deuxieme ligne .7/q4 je suis insuportable qje marche 1 fois sur deux //////////44444; je suis une nouvelle ligne ; en vrai si tu me rentre en premiere piscine c est pas mal 7 je tombe aussi en exam btw 4qq faut aussi me test avec des charset vide ///.. bon je te laisse bonne chance pour la piscine frero..///////....q44q;",".7/q4;");

    while(str[j])
        printf("===%s\n", str[j++]);
    free(str);

    printf("\n\n\noutput normal : \n===coucou je suis split\n=== si je marche je suis la deuxieme ligne \n=== je suis insuportable \n===je marche 1 fois sur deux \n=== je suis une nouvelle ligne \n=== en vrai si tu me rentre en premiere piscine c est pas mal \n=== je tombe aussi en exam btw \n=== faut aussi me test avec des charset vide \n=== bon je te laisse bonne chance pour la piscine frero");
}