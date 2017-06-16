# COLOR SCHEME TEST "molokai/Monokai.tmTheme" "Python"  # flake8: noqa
    # This test is testing
    # the whitespace before
    # the comment.
# ^ fg=#f8f8f2 bg=#272822 fs=

@requires_authorization
# ^ fg=#f8f8f2 fs=
def abc(param1='', param2=0):
# ^ fg=#66d9ef fs=italic
#   ^ fg=#a6e22e fs=
#              ^^ fg=#e6db74 fs=
#                         ^ fg=#ae81ff fs=
    r'''A docstring'''
    if param1 > param2: # interesting
#   ^ fg=#f92672 fs=
#             ^ fg=#f92672 fs=
        print 'Gre\'ater'
#       ^ fg=#f92672 fs=
#             ^^^^ fg=#e6db74 fs=
#                 ^^ fg=#ae81ff fs=
#                   ^^^^^ fg=#e6db74 fs=
    return (param2 - param1 + 1 + 0b10l) or None
#   ^ fg=#f92672 fs=
#                  ^ fg=#f92672 fs=
#                           ^ fg=#f92672 fs=
#                             ^ fg=#ae81ff fs=
#                               ^ fg=#f92672 fs=
#                                        ^^ fg=#f92672 fs=
#                                           ^ fg=#ae81ff fs=

_AB = 'ab'
# ^ fg=#f8f8f2 fs=
#   ^ fg=#f92672 fs=
#     ^^^ fg=#e6db74 fs=

class PassMe():
# ^ fg=#66d9ef fs=italic
#     ^ fg=#a6e22e fs=
#           ^^^ fg=#f8f8f2 fs=
    pass
#   ^ fg=#f92672 fs=

>>> message = '''interpreter
# ^ fg=#f92672 fs=
#           ^ fg=#f92672 fs=
#             ^^^^^^^^^^^^^^ fg=#e6db74 fs=
... prompt'''
# ^ fg=#e6db74 fs=
