loop do
  x, y = gets.split.map(&:to_i)
  break if x.zero? && y.zero?

  x, y = y, x
  puts "#{x} #{y}"
end
