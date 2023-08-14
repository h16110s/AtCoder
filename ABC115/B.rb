=begin 
    B - Christmas Eve Eve  Ruby (2.3.3)
    Accepted
=end 
# 整数の取得
N = gets.to_i
# 取得した整数回の繰り返し-整数の取得 -> 配列にて取得
array = N.times.map{gets.chomp.to_i}
# 配列の合計から配列の最大値の半分を引く
ans = array.inject(:+) - array.max / 2 
puts ans
 
