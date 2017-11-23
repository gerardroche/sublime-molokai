import sublime


def plugin_loaded():
    try:
        from package_control import events
        if events.post_upgrade('molokai'):
            window = sublime.active_window()
            if window:
                view = window.active_view()
                if view:
                    settings = sublime.load_settings('Preferences.sublime-settings')
                    color_scheme = settings.get('color_scheme')
                    if color_scheme == 'Packages/molokai/Monokai.tmTheme':
                        window.run_command("advanced_install_package", {"packages": "MonokaiFree"})

                        def set_to_new_monokai_color_scheme():
                            settings.set('color_scheme', 'Packages/MonokaiFree/MonokaiFree.tmTheme')
                            sublime.save_settings('Preferences.sublime-settings')

                        sublime.set_timeout(set_to_new_monokai_color_scheme, 10000)
    except ImportError:
        # Fail silently if package control isn't installed.
        pass
