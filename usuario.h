//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//
//                                                                            //
//                Universidade Federal do Rio Grande do Norte                 //
//                         Disciplina de Programação                          //
//                          Prof, Flavius Gorgônio                            //
//                      Moisés Lucena, Isaque Guimarães                       //
//                                                                            //
//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//
//                                                                            //
//                                Versão 0.4                                  //
//                                                                            //
//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//


// --== * Assinaturas * ==-- //
typedef struct usuario Usuario;
struct usuario{
    int id;
    char nome[55];
    char email[55];
    char senha[26];
    char status;
};

void modulo_usuario(void);
char menu_usuario(void);
void ver_dados(void);
void altera_dados(void);
void deleta_conta(void);