class Conta {
    var saldo: Double
    var nome: String
    func sacar (_ valor:Double) {
        saldo -= valor
    }
    func depositar (_ valor:Double){
        saldo += valor
    }
    
    init(nome:String){
        self.nome = nome
        self.saldo = 0.0
    }
    
}

var ContaGuga = Conta(nome: "Gustav")
ContaGuga.depositar(500)
print(ContaGuga.nome,ContaGuga.saldo)

//heranca

class ContaPoupanca: Conta {
    
    var possui_cartao = false
    func solicitar_cartao_debito (){
        possui_cartao = true
        print("O cliente está solicitando um cartão de débito")
    }
    
    init(nome:String, possui_cartao:Bool){
        self.possui_cartao = possui_cartao
        super.init(nome: nome)
    }
    
    override func sacar(_ valor:Double){
        saldo -= valor + 5
    }
}

class ContaCorrente: Conta {
    func solicitar_emprestimo () {
        print("O cliente \(nome) está solicitando um emprestimo")
        // SUPER é usado para se referir a funcoes da classe pai
        super.depositar(50.0)
        
        override func sacar(_ valor:Double){
            saldo -= valor + 10
        }
    }
}

//use "final" na frente da declaracao da classe para impedi-la de ser herdada


