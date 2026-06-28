listboard_inc = include_directories('.')

listboard_src = files(
  'main.c',
  'main_scene.c'
)

listboard_c_args = []
listboard_link_args = []
listboard_deps = [starlight_dep]

if host_machine.system() == 'emscripten'
  web_c_args = ['-pthread', '-DASSETS_DIR="assets/"']
  web_link_args = [
    '-sTOTAL_MEMORY=262144000',
    '-sALLOW_MEMORY_GROWTH=1',
    '--embed-file=' + assets_dir +  '@/assets/',
    '--shell-file=' + assets_dir + '/index.html',
  ]

  listboard_exe = executable('listboard', listboard_src, include_directories: listboard_inc, c_args: listboard_c_args + web_c_args, link_args: listboard_link_args + web_link_args, dependencies: listboard_deps, name_suffix: 'html')

else
  desktop_c_args = ['-DASSETS_DIR="assets/"']
  desktop_link_args = []

  listboard_exe = executable('listboard', listboard_src, include_directories: listboard_inc, c_args: listboard_c_args + desktop_c_args, link_args: listboard_link_args + desktop_link_args, dependencies: listboard_deps)
endif
