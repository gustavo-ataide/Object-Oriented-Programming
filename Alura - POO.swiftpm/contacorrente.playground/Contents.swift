struct ContaCorrente {
    var saldo = 0.0
    var nome: String
    mutating func sacar (_ valor:Double) {
        saldo -= valor
    }
    mutating func depositar (_ valor:Double){
        saldo += valor
    }
}

var ContaGuga = ContaCorrente(nome: "Gustavo")
ContaGuga.depositar(500)
print(ContaGuga.nome,ContaGuga.saldo)


