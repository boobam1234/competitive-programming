loop do
  height, width = gets.split.map(&:to_i)
  break if height.zero? && width.zero?

  height.times do
    puts '#' * width
  end
  puts
end
