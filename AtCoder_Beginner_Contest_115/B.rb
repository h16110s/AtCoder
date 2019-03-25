=begin 
    B - Christmas Eve Eve  Ruby (2.3.3)
    Accepted
=end 
N = gets.to_i
array = N.times.map{gets.chomp.to_i}
ans = array.inject(:+) - array.max / 2 
puts ans
 
