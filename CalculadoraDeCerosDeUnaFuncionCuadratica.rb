def igualUno(a, b, c)
    discriminante = (b/2) ** 2 - c
    if discriminante < 0
      puts "La ecuación no tiene soluciones reales"
      x1 = (-b/2) + Math.sqrt(-discriminante) * Complex::I
      x2 = (-b/2) - Math.sqrt(-discriminante) * Complex::I
      puts "La primera raiz es ", x1
      puts "La segunda raiz es ", x2
    else
      x1 = (-b/2) + Math.sqrt(discriminante)
      x2 = (-b/2) - Math.sqrt(discriminante)
      puts "La primera raiz es ", x1
      puts "La segunda raiz es ", x2
    end
  end
  
  def diferenteUno(a, b, c)
    discriminante = b ** 2 - 4 * a * c
    if discriminante < 0
      puts "La ecuación no tiene soluciones reales"
      x1 = ((-b) + Math.sqrt(-discriminante) * Complex::I) / (2 * a)
      x2 = ((-b) - Math.sqrt(-discriminante) * Complex::I) / (2 * a)
      puts "La primera raiz es ", x1
      puts "La segunda raiz es ", x2
    else
      x1 = ((-b) + Math.sqrt(discriminante)) / (2 * a)
      x2 = ((-b) - Math.sqrt(discriminante)) / (2 * a)
      puts "La primera raiz es ", x1
      puts "La segunda raiz es ", x2
    end
  end
  
  puts "-------------- Hola esta es una calculadora para calcular las raices de una ecuación de segundo grado --------------"
  opc = "Si"
  while(opc != "No")
    puts "Ingrese el valor de a: "
    a = gets.chomp.to_f
    puts "Ingrese el valor de b: "
    b = gets.chomp.to_f
    puts "Ingrese el valor de c: "
    c = gets.chomp.to_f
    if a == 1 or a == -1
      igualUno(a, b, c)
    else
      diferenteUno(a, b, c)
    end
    puts "¿Desea continuar? (Si/No)"
    opc = gets.chomp
  end