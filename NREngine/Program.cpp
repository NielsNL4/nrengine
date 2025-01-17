#include "common/core.h"
#include "myscene.h"

int main()
{
	Core core;

	Myscene* myscene = new Myscene();
	while (myscene->isRunning) {
		core.run(myscene);
		core.frameRate();
		glfwPollEvents();
	}
	core.cleanUp();
	delete myscene;

	glfwTerminate();
	return 0;
}
