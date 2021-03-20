loop do
  x, y = gets.split.map(&:to_i)
  break if x.zero? && y.zero?

  x, y = y, x if x > y
  puts "#{x} #{y}"
end
