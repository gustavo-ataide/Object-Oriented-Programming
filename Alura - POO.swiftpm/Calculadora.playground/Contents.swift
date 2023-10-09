import Cocoa
class Calculadora{
    let num1:Double
    let num2:Double
    
    init(num1:Double, num2:Double){
        self.num1 = num1
        self.num2 = num2
    }
    
    func soma() -> Double {return num1+num2}
    func sub() -> Double {return num1-num2}
    func multiplicacao() -> Double {return num1*num2}
    func divisao() -> Double {return (num1/num2)}
}

var calc = Calculadora(num1: 5.0, num2: 3.0)

calc.soma()
calc.sub()
calc.divisao()
calc.multiplicacao()
