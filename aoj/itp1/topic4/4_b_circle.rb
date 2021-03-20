r = gets.to_f
radius = Math::PI * r * r
circumference = 2 * Math::PI * r
puts "#{format('%.5f', radius)} #{format('%.5f', circumference)}"
