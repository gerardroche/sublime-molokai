# COLOR SCHEME TEST "molokai/molokai.tmTheme" "Python"  # flake8: noqa
    # This test is testing
    # the whitespace before
    # the comment.
# ^ fg=#f8f8f2 bg=#1b1d1e fs=

import os
# ^ fg=#a6e22e fs=
#      ^ fg=#f8f8f2 fs=

_var = 'xy'
#      ^^^^ fg=#e6db74 fs=

if _var:
    if _var == 'xy':
    #^ fg=#f92672 fs=bold
        # ^ fg=#f8f8f2 fs=
        #   ^^ fg=#f92672 fs=bold
        #      ^^^^ fg=#e6db74 fs=
        pass
        # ^ fg=#f92672 fs=bold
