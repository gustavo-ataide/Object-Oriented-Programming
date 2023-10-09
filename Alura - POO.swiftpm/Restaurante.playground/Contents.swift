
class Restaurante {
    let Nome: String
    let Tipodecomida: String
    var Numerodepedidos: Int
    
    init(Nome: String,Tipodecomida: String){
        self.Numerodepedidos = 0
        self.Nome = Nome
        self.Tipodecomida = Tipodecomida
    }
    
    func adicionapedido() ->Void { Numerodepedidos += 1 }
    func calculaTotalPedidos() -> Double {return Double(Numerodepedidos * 35)}
}

var Rest = Restaurante(Nome: "Guimaraes", Tipodecomida: "Pizza")
Rest.adicionapedido()
Rest.adicionapedido()
Rest.calculaTotalPedidos()
