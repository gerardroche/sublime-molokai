COLOR SCHEME TEST "molokai/Monokai.tmTheme" "Ruby"

      g = Greeter.new('hello')
# ^ fg=#f8f8f2 bg=#272822 fs=

# The Greeter class
class Greeter
#       ^ fg=#a6e22e fs=
  def initialize(name)
#       ^ fg=#a6e22e fs=
    @name = name.capitalize
#         ^ fg=#f92672 fs=
  end

  def salute
#       ^ fg=#a6e22e fs=
    puts "Hello #{@name}!"
#        ^^^^^^ fg=#e6db74 fs=
#               ^^^^^^^^^^ fg=#e6db74 fs=
  end
end

g = Greeter.new("world")
# ^ fg=#f92672 fs=
#   ^ fg=#66d9ef fs=italic
#           ^ fg=#f92672 fs=
#               ^^^^^^^ fg=#e6db74 fs=
g.salute
