// A função realloc permite redimensionar um vetor, preservando os elementos existentes, que permanecem inalterados após a realocação.

...
vet = (float*) realloc (vet. m*sizeof (float));
...

Exemplo:

float* temp = (float*) malloc (m*sizeof(float)); // aloca novo vetor
int min = m < n ? m : n; // menor valor entre m e n
memcpy (temp, vet, min*sizeof (float)); //copia elementos
free (vet); //libera vetor original
vet = temp; //atribui novo endereço á variável original
