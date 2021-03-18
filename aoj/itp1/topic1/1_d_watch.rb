s = gets.to_i
hours = s / 3600
minutes = s % 3600 / 60
seconds = s % 60
puts "#{hours}:#{minutes}:#{seconds}"
