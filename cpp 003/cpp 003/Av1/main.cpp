#include "Policial.hpp"
#include "Suspeito.hpp"
#include "Vestigio.hpp"
#include "Caso.hpp"

int main(void){
    Policial Da_cunha("Delegado da Cunha", "Delegado");
    Policial Peçanha("Peçanha", "Perito");
    Policial Nantes("Nantes", "Investigador");
    Policial Cap_Nascimento("Cap.Nascimento", "Perito");
    Policial Matias("Matias", "Escrivao");
    
    Suspeito Sr_furtado("Sr Furtado (chaves)");
    Suspeito Bahiano("Bahiano (Tropa de Elite)");
    Suspeito Voldemort("Voldemort");
    Suspeito Pedrinho("Pedrinho MATADOR");
    Suspeito Tonho("Tonho");
    Suspeito Symon("Symon");

    
    Vestigio Ep_chaves("Episodio Perdido de chaves", "Digital");
    Vestigio Foice("Foice boladona", "Fisico", true);
    Vestigio Fotos("Fotos da bezerra", "Fisico", true);
    Vestigio Veneno("Veneno para animais caprinos", "Biológico", true);
    Vestigio Ar_15("AR-15 com pente extendido", "Fisico", true);
    
    
    Caso morte_da_bezerra("# Morte da bezerra #", "22/11/2003", Da_cunha);
    
    morte_da_bezerra.insertPerito(Peçanha);
    morte_da_bezerra.insertPerito(Nantes);
    morte_da_bezerra.insertPerito(Cap_Nascimento);
    morte_da_bezerra.insertPerito(Matias);
    
    
    morte_da_bezerra.insertSuspeito(Sr_furtado);
    morte_da_bezerra.insertSuspeito(Bahiano);
    morte_da_bezerra.insertSuspeito(Voldemort);
    morte_da_bezerra.insertSuspeito(Pedrinho);
    morte_da_bezerra.insertSuspeito(Tonho);
    morte_da_bezerra.insertSuspeito(Symon);
    
    morte_da_bezerra.insertVestigio(Ep_chaves);
    morte_da_bezerra.insertVestigio(Foice);
    morte_da_bezerra.insertVestigio(Fotos);
    morte_da_bezerra.insertVestigio(Veneno);
    morte_da_bezerra.insertVestigio(Ar_15);
    
    
    Symon.Ser_indiciado();
    cout << "Peçanha achou Symon chato demais e o indiciou!" << endl;
    
    Pedrinho.Ser_indiciado();
    cout << "Cap_Nascimento encontrou a assinatua de Pedrinho MATADOR na foto da cabra e após um interrogatório leve, o indiciou!" << endl;
    
    Sr_furtado.Ser_indiciado();
    cout << "Nantes encontrou veneno de cabra no bolso de Sr Furtado e o indiciou!" << endl;
    

    
    cout << endl;
    cout << endl;
    morte_da_bezerra.displayCaso();
    return 0;
}



