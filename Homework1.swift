import Foundation
class Figure{
    var name: String
    var cornerRadius: Int
    init(name: String, cornerRadius: Int){
        self.name = name
        self.cornerRadius = cornerRadius
    }
	
}

class Triangel: Figure{
    var a: Double
    var b: Double
    var c: Double
    init(a:Double, b: Double,c: Double){
        self.a = a
        self.b = b
        self.c = c
        super.init(name:"Треугольник",cornerRadius: 3)
    }
	func area() -> Double{
		let p2: Double = (a+b+c)/2
		return sqrt(p2*(p2-a)*(p2-b)*(p2-c))
	}
}

class Rectangel: Figure{
	var Height: Double
	var Width: Double
	init(Height: Double,Width: Double){
		self.Height = Height
		self.Width = Width
		super.init(name:"Четырехугольник",cornerRadius: 4)
	}
	func area() -> Double{
		return Height*Width
	}
	func perimeter() -> Double{
		return 2*(Height+Width)
	}
}

class Circle: Figure{
	var Radius: Double
	init(Radius: Double){
		self.Radius = Radius
		super.init(name:"Круг",cornerRadius: 0)
	}
	func area() -> Double{
		return Radius * Radius * Double.pi
	}
}

protocol PerimetrForEqual{
	var Height: Double {get}
	var Width: Double {get}
	func perimeter() -> Double
}
