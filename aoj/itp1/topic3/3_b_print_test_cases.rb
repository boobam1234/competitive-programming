count = 0
loop do
  x = gets.to_i
  break if x.zero?

  count = count.succ
  puts "Case #{count}: #{x}"
end
