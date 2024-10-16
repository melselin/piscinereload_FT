int ft_count_if(char **tab, int (*f)(char*)) {
    int i = 0;
    int count = 0;

    while (tab[i] != 0) {
        if (f(tab[i]) == 1) {  
            count++;
        }
        i++;
    }

    return count;
}

