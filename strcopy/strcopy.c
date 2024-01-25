struct contato {
    char nome[20];
    char email[50];
};

typedef struct contato CONTATO;

int main() {
    CONTATO mauricio;
    strcpy(mauricio.nome, "Mauricio Aniche");
    strcpy(mauricio.email, "mauricio.aniche@caelum.com.br");
}