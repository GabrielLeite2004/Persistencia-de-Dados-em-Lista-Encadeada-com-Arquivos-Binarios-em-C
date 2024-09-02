int gravar_lista(tipo_lista la);
int carregar_lista(tipo_lista *la);

int carregar_lista(tipo_lista *la) {
   FILE *arquivo;
   elemento e; int i=0;
   arquivo = fopen("dados.dat","rb");
   if (arquivo!=NULL) {
      while(fread(&e, sizeof(elemento),1,arquivo)) {
         incluir_elemento(la, ++i, e); 
      }
      fclose(arquivo);
      return 1;
   }
   else
      return 0;
}

int gravar_lista(tipo_lista la) {
   FILE *arquivo;
   elemento e;
   arquivo = fopen("dados.dat","wb");
   for (int i=1; i<=tamanho(la);i++) {
       obter_elemento(la,i,&e);
       fwrite(&e, sizeof(elemento),1,arquivo);     
   }
   fclose(arquivo);
}