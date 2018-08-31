
struct obstacle{
	int x, y, flag,type, changeRate;
}obs[100];

int obsmv, now=0;
int ob, ab, fb, db;

int endGameImage;
int loadingImage; //storing loading image
int menu;	//storing menu image
int aust;	//storing aust image
int backButton;	//storing back button image
int loadImage = 0;	//Checking different states with this variable for example when loadImage = 1 it will load the menu image.
int exitButton; //storing exit button image
int score;
int credit;
int rules;
int t,x,k,z,j; //Timer variable

//variables for player state change
int playerMoving = 0;
int playerJumping = 0;

int playerSelection;
int playerSelected = 0;

bool jump = false;
int	 jumpFinishChecker = 0;

//Jump Functionalities Variables
int Y = 10;
int X = 50;
bool jumped = false;

//players running and jumping image variables
int playerImage[8];
int playerJumpingImage[8];


//background rendering variables
int background[4];
int background_x[] = {0,720},background_y[]={0,0};

bool gameSound = false;

//end game variables
int endGame= 0;



//CGPA variables
int cgpa = 0;

//Collusion variable
int collusion = 0;


//Ghost Variables
int ghost1;
int ghost2;
int ghost3;