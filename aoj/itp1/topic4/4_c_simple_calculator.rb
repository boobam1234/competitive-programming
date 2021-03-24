def calc(operant, num_a, num_b)
  case operant
  when '+'
    num_a + num_b
  when '-'
    num_a - num_b
  when '*'
    num_a * num_b
  else
    num_a / num_b
  end
end

loop do
  a, op, b = gets.chomp.split
  break if op == '?'

  puts calc(op, a.to_i, b.to_i)
end
