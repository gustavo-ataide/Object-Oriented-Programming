class Retangulo {
    let Base:Double
    let Altura: Double
    
    init(Base:Double, Altura:Double){
        self.Base = Base
        self.Altura = Altura
    }
    func calculaperimetro() -> Double {return Double((Base*2) + (Altura*2))}
    func calculaarea() -> Double {return Double((Base*Altura)/2)}
}

var retangulin = Retangulo(Base:10, Altura:15)
retangulin.calculaperimetro()
retangulin.calculaarea()
