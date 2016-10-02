//T.Robert Ward
//June 19, 2013
//
// Includes, namespace and prototypes
#include "template.h"
using namespace AGK;
app App;

const int SCR_WIDTH = 640;
const int SCR_HEIGHT = 480;
int r,g,b = 0;

// Begin app, called once at the start
void app::Begin( void )
{
	agk::SetVirtualResolution(SCR_WIDTH, SCR_HEIGHT);
	agk::SetWindowTitle("Screen Color Random Generator"	);
	agk::SetSyncRate(1,1);
}

// Main loop, called every frame
void app::Loop ( void )
{
	r = agk::Random(0,255);
	g = agk::Random(0,255);
	b = agk::Random(0,255);

	agk::SetClearColor(r,g,b);
	agk::ClearScreen();

	agk::Print(" Changing Colors ... randomly.........");

	agk::Sync();

}

// Called when the app ends
void app::End ( void )
{
}
