project('listboard', 'c', version: '0.1.0', default_options: ['c_std=gnu11', 'warning_level=2'])

assets_dir = meson.current_source_dir() / 'assets'

starlight = subproject('starlight')
starlight_dep = starlight.get_variable('starlight_dep')

subdir('src')
