# Ostrich.rb | Defines the Ostrich class which inherits attributes and methods
#   from the Bird superclass.
#
# Begun by: Dr. Adams, for CS 214 at Calvin College.
# Completed by:Charles Blum
# Date:29 April 2014
####################################################

require 'WalkingBird.rb'

class Ostrich < WalkingBird

  def call
    'Snork!'
  end

end

