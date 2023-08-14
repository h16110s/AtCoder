=begin
    A - B+/-A Ruby (2.3.3)
    Accepted
=end
a,b = gets.chomp.split(" ").map(&:to_i);
if (b % a) == 0 then
    print("#{a+b}\n");
else
    print("#{b-a}\n");
end


=begin

a = gets.chomp.split(" ").map(&:to_i);
if (a[1] % a[0]) == 0 then
    print("#{a[0]+a[1]}\n");
else
    print("#{a[1]-a[0]}\n");
end

=end