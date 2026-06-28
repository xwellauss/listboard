#include <starlight/starlight.h>

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "main_scene.h"

#define WINDOW_TITLE "Listboard"
#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720
#define UI_FONT_FILE "fonts/ubuntu-nerd-font.ttf"

int main()
{
	if(strlen(ASSETS_DIR) > 0) chdir(ASSETS_DIR);

	EngineConfig config = {0};
	config.window_title = WINDOW_TITLE;
	config.window_width = WINDOW_WIDTH;
	config.window_height = WINDOW_HEIGHT;
	config.enable_ui = true;
	config.enable_network = false;
	config.enable_audio = true;
	config.font_path = UI_FONT_FILE;

	engine_init(config);

	scene_manager_register_scene(&main_scene);
	scene_manager_switch_scene("MainScene");

	engine_run();

	engine_destroy();

	return EXIT_SUCCESS;
}
