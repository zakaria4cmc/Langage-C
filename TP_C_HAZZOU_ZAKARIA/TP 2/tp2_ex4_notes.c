int  main()
{
    float  notes[30];
    float  somme = 0;
    float  max, min;
    int  n, i;
    int  admis = 0;
    printf("Nombre de stagiaires : ");
    scanf("%d", &n);
     

    
    // TODO : verifier que n est  valide 

    while (n < 1 || n > 30)// tant que n < 1 ou n > 30, redemander 
    {   
        printf("Nombre de stagiaires (un entier entre 1 et 30) : ");
        scanf("%d", &n);
        printf("\n");
    }
  

    
    for (i = 0; i < n; i++)
    {
        printf("Note du stagiaire %d : ", i + 1);
        scanf("%f", &notes[i]);
        //TODO : ajouter a somme 
        somme += notes[i];

        //TODO : compter les admis 
        if (notes[i] >= 10)
            admis += 1;
    }
    // TODO : calculer max et min 
        // (commencer avec max = notes[0] et min  = notes[0]) 
    min = notes[0];
    max = notes[0];
    for (i = 1; i <= n - 1 ; i++)// i = 0 notes[0] = max = min ; i = 1
    {
        if (notes[i] > max)
        {
            max = notes[i];
        }
        if (notes[i] < min)
        {
            min = notes[i];
        }
    }

    // TODO : afficher des notes resultats 
    printf("Notes saisies : ");
    for (i = 0; i < n; i++)
    {   
        
            printf("%5.2f ",notes[i]);
            if ((i + 1) % 5 == 0)
                printf("\n\t\t");
    }
    printf("\n");
    // TODO : afficher les resultats 
    printf("Moyenne du groupe : %.2f \n", somme / n);
    printf("Meilleure note : %.2f \n", max);
    printf("Plus faible note : %.2f \n", min);   
    printf("Admis : %d / %d \n", admis , n);
        return  0;
}