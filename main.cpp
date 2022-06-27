#include"Mesh.h"



const unsigned int width = 800;
const unsigned int height = 600;



// Vertices coordinates
Vertex vertices[] =
{ //               COORDINATES           /            COLORS          /           TexCoord         /       NORMALS         //
	//floor
	//________________________

	Vertex{glm::vec3(-5.0f, 0.0f,  5.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)}, //0 
	Vertex{glm::vec3(-5.0f, 0.0f, -5.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)}, //1
	Vertex{glm::vec3(5.0f, 0.0f, -5.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)}, //2
	Vertex{glm::vec3(5.0f, 0.0f,  5.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)} //3

};

// Indices for vertices order
GLuint indices[] =
{
	0, 1, 2,
	0, 2, 3

};

Vertex Tissue[]=
{
	//               COORDINATES           /            COLORS          /           TexCoord         /       NORMALS         //
//Tissue Box
//___________________

//front
Vertex{ glm::vec3(-0.5f,  -0.5f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 0
Vertex{ glm::vec3(0.5f, -0.5f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 1
Vertex{ glm::vec3(0.5f, 0.5f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 2
Vertex{ glm::vec3(-0.5f,  0.5f, 0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 3


//back
Vertex{ glm::vec3(-0.5, -0.5,  -0.5), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 4
Vertex{ glm::vec3(0.5, -0.5,  -0.5), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 5
Vertex{ glm::vec3(0.5, 0.5,  -0.5), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 6
Vertex{ glm::vec3(-0.5,  0.5,  -0.5), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) } // 7
};

GLuint TissueIndices[] =
{
	// front
		0, 1, 2,
		2, 3, 0,
		// right
		1, 5, 6,
		6, 2, 1,
		// back
		7, 6, 5,
		5, 4, 7,
		// left
		4, 0, 3,
		3, 7, 4,
		// bottom
		4, 5, 1,
		1, 0, 4,
		// top
		3, 2, 6,
		6, 7, 3

};

Vertex KodakTop[] =
{
	//               COORDINATES           /            COLORS          /           TexCoord         /       NORMALS         //
//Kodak Top
//___________________

Vertex{glm::vec3(-0.5f, 0.2f,  1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)}, //0 
	Vertex{glm::vec3(-0.5f, 0.2f, -1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)}, //1
	Vertex{glm::vec3(0.5f, 0.2f, -1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)}, //2
	Vertex{glm::vec3(0.5f, 0.2f,  1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)} //3

};

// Indices for vertices order
GLuint KodakTopindices[] =
{
	0, 1, 2,
	0, 2, 3

};

Vertex Kodak[] =
{
	//               COORDINATES           /            COLORS          /           TexCoord         /       NORMALS         //
//Kodak
//___________________

//front
Vertex{ glm::vec3(-0.5f,  -0.2f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 0
Vertex{ glm::vec3(0.5f, -0.2f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 1
Vertex{ glm::vec3(0.5f, 0.2f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 2
Vertex{ glm::vec3(-0.5f,  0.2f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 3


//back
Vertex{ glm::vec3(-0.5, -0.2,  -1.0), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 4
Vertex{ glm::vec3(0.5, -0.2,  -1.0), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 5
Vertex{ glm::vec3(0.5, 0.2,  -1.0), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 6
Vertex{ glm::vec3(-0.5,  0.2,  -1.0), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) } // 7
};

GLuint KodakIndices[] =
{
	// front
		0, 1, 2,
		2, 3, 0,
		// right
		1, 5, 6,
		6, 2, 1,
		// back
		7, 6, 5,
		5, 4, 7,
		// left
		4, 0, 3,
		3, 7, 4,
		// bottom
		4, 5, 1,
		1, 0, 4,
		// top
		3, 2, 6,
		6, 7, 3

};

Vertex holeVERT[] =
{
	//               COORDINATES           /            COLORS          /           TexCoord         /       NORMALS         //
//Tissue Box
//___________________
//front
	//triangle 1
Vertex{ glm::vec3(0.6f, 0.01f, -0.2f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 0
Vertex{ glm::vec3(0.45f, 0.01f, -0.25f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 1
Vertex{ glm::vec3(0.43f, 0.01f, -0.2f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 2

	//triangle 2
Vertex{ glm::vec3(0.6f, 0.01f, -0.2f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 3
Vertex{ glm::vec3(0.6f, 0.01f, -0.26f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 4
Vertex{ glm::vec3(0.45f, 0.01f, -0.25f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 5

	//triangle 3

	Vertex{ glm::vec3(0.6f, 0.01f, -0.2f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 6
Vertex{ glm::vec3(0.75f, 0.01f, -0.25), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 7
Vertex{ glm::vec3(0.6f, 0.01f, -0.26f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 8

	//triangle 4

		Vertex{ glm::vec3(0.6f, 0.01f, -0.2f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 9
Vertex{ glm::vec3(0.77f, 0.01f, -0.2f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 10
Vertex{ glm::vec3(0.75f, 0.01f, -0.25f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 11



//Triangle 5
		Vertex{ glm::vec3(0.6f, 0.01f, -0.2f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 12
Vertex{ glm::vec3(0.75f, 0.01f, -0.15), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 13
Vertex{ glm::vec3(0.77f, 0.01f, -0.2f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 14

//triangle 6
		Vertex{ glm::vec3(0.6f, 0.01f, -0.2f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 15
Vertex{ glm::vec3(0.6f, 0.01f, -0.14f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 16
Vertex{ glm::vec3(0.75f, 0.01f, -0.15f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 17


//triangle 7
		Vertex{ glm::vec3(0.6f, 0.01f, -0.2f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 18
Vertex{ glm::vec3(0.45f, 0.01f, -0.15f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 19
Vertex{ glm::vec3(0.6f, 0.01f, -0.14f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 20

//triangle 8
		Vertex{ glm::vec3(0.6f, 0.01f, -0.2f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 21
Vertex{ glm::vec3(0.43f, 0.01f, -0.2f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 22
Vertex{ glm::vec3(0.45f, 0.01f, -0.15f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 23

};

GLuint holeIND[] =
{
	// front
	0, 1, 2,
	3, 4, 5,

	6,7,8,
	9,10,11,

	12,13,14,
	15,16,17,

	18,19,20,
	21,22,23,

	/*
	24, 25, 26,
	27,28,29,

	30,31,32,
	33,34,35,

	36,37,38,
	39,40,41,

	42,43,44,
	45,46,47,

	48,49,50,
	51,52,53,*/

};

Vertex lightVertices[] =
{ //     COORDINATES     //
	Vertex{glm::vec3(-0.1f, -0.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f, -0.1f, -0.1f)},
	Vertex{glm::vec3(0.1f, -0.1f, -0.1f)},
	Vertex{glm::vec3(0.1f, -0.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f,  0.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f,  0.1f, -0.1f)},
	Vertex{glm::vec3(0.1f,  0.1f, -0.1f)},
	Vertex{glm::vec3(0.1f,  0.1f,  0.1f)},
};

GLuint lightIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	0, 4, 7,
	0, 7, 3,
	3, 7, 6,
	3, 6, 2,
	2, 6, 5,
	2, 5, 1,
	1, 5, 4,
	1, 4, 0,
	4, 5, 6,
	4, 6, 7
};


Vertex TP[] =
{
	//               COORDINATES           /            COLORS          /           TexCoord         /       NORMALS         //
//Kodak
//___________________

//front 1
Vertex{ glm::vec3(0.05f, 0.01f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 0
Vertex{ glm::vec3(0.05f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 1
Vertex{ glm::vec3(-0.05f, 0.01f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 2
Vertex{ glm::vec3(-0.05f, 0.01f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 3


//set 2

Vertex{ glm::vec3(0.05f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 4
Vertex{ glm::vec3(-0.10f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 5
Vertex{ glm::vec3(-0.10f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 6
Vertex{ glm::vec3(0.05f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 7

//set 3
Vertex{ glm::vec3(-0.05f, 0.01f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 8
Vertex{ glm::vec3(-0.05f, 0.01f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 9
Vertex{ glm::vec3(0.05f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 10
Vertex{ glm::vec3(0.05f, 0.01f, -0.65f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 11

//set 4
Vertex{ glm::vec3(0.05f, 0.01f, -0.65f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 12
Vertex{ glm::vec3(0.05f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 13
Vertex{ glm::vec3(0.15f, 0.01f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 14
Vertex{ glm::vec3(0.15f, 0.01f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 15


//set5
Vertex{ glm::vec3(0.05f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 16
Vertex{ glm::vec3(0.20f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 17
Vertex{ glm::vec3(0.20f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 18
Vertex{ glm::vec3(0.05f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 19

//set 6
Vertex{ glm::vec3(0.15f, 0.01f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 20
Vertex{ glm::vec3(0.15f, 0.01f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 21
Vertex{ glm::vec3(0.05f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 22
Vertex{ glm::vec3(0.05f, 0.01f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 23

//set 7
Vertex{ glm::vec3(0.05f, 0.70f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 24
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 25
Vertex{ glm::vec3(-0.05f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 26

//top circle
//SET 8
Vertex{ glm::vec3(-0.05f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 27
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 28
Vertex{ glm::vec3(-0.10f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 29

//set 9
Vertex{ glm::vec3(-0.10f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 30
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 31
Vertex{ glm::vec3(-0.05f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 32

//set 10
Vertex{ glm::vec3(-0.05f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 33
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 34
Vertex{ glm::vec3(0.05f, 0.70f, -0.65f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 35

//set 11
Vertex{ glm::vec3(0.05f, 0.70f, -0.65f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 36
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 37
Vertex{ glm::vec3(0.15f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 38

//set 12
Vertex{ glm::vec3(0.15f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 39
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 40
Vertex{ glm::vec3(0.20f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 41

//set 13
Vertex{ glm::vec3(0.20f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 42
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 43
Vertex{ glm::vec3(0.15f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 44

//set 14
Vertex{ glm::vec3(0.15f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 45
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 46
Vertex{ glm::vec3(0.05f, 0.70f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 47

//cylinder planes

//set 14
Vertex{ glm::vec3(0.05f, 0.01f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 48
Vertex{ glm::vec3(0.05f, 0.70f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 49
Vertex{ glm::vec3(-0.05f, 0.01f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 50

//set15
Vertex{ glm::vec3(0.05f, 0.01f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 51
Vertex{ glm::vec3(0.05f, 0.70f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 52
Vertex{ glm::vec3(-0.05f, 0.01f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 53

//set 16
Vertex{ glm::vec3(0.05f, 0.70f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 54
Vertex{ glm::vec3(-0.05f, 0.01f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 55
Vertex{ glm::vec3(-0.05f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 56

//set 17
Vertex{ glm::vec3(-0.05f, 0.01f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 57
Vertex{ glm::vec3(-0.05f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 58
Vertex{ glm::vec3(-0.10f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 59

//set 18
Vertex{ glm::vec3(-0.10f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 60
Vertex{ glm::vec3(-0.05f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 61
Vertex{ glm::vec3(-0.10f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 62

//set 19 
Vertex{ glm::vec3(-0.10f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 63
Vertex{ glm::vec3(-0.10f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 64
Vertex{ glm::vec3(-0.05f, 0.01f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 65

//set 20
Vertex{ glm::vec3(-0.05f, 0.01f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 66
Vertex{ glm::vec3(-0.05f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 67
Vertex{ glm::vec3(-0.10f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 68

//set 21
Vertex{ glm::vec3(-0.05f, 0.01f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 69
Vertex{ glm::vec3(-0.05f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 70
Vertex{ glm::vec3(0.05f, 0.01f, -0.65f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 71

//set 22
Vertex{ glm::vec3(0.05f, 0.01f, -0.65f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 72
Vertex{ glm::vec3(0.05f, 0.70f, -0.65f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 73
Vertex{ glm::vec3(-0.05f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 74

//set 23
Vertex{ glm::vec3(0.05f, 0.01f, -0.65f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 75
Vertex{ glm::vec3(0.05f, 0.70f, -0.65f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 76
Vertex{ glm::vec3(0.15f, 0.01f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 77

//set 24
Vertex{ glm::vec3(0.15f, 0.01f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 78
Vertex{ glm::vec3(0.15f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 79
Vertex{ glm::vec3(0.05f, 0.70f, -0.65f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 80

//set 25
Vertex{ glm::vec3(0.15f, 0.01f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 81
Vertex{ glm::vec3(0.15f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 82
Vertex{ glm::vec3(0.20f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 83

//set 26
Vertex{ glm::vec3(0.20f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 84
Vertex{ glm::vec3(0.20f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 85
Vertex{ glm::vec3(0.15f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 86

//set 27
Vertex{ glm::vec3(0.20f, 0.01f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 87
Vertex{ glm::vec3(0.20f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 88
Vertex{ glm::vec3(0.15f, 0.01f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 89

//set 28
Vertex{ glm::vec3(0.15f, 0.01f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 90
Vertex{ glm::vec3(0.15f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 91
Vertex{ glm::vec3(0.20f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 92

//set 29
Vertex{ glm::vec3(0.15f, 0.01f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 93
Vertex{ glm::vec3(0.15f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 94
Vertex{ glm::vec3(0.05f, 0.01f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 95

//set 30
Vertex{ glm::vec3(0.05f, 0.01f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 96
Vertex{ glm::vec3(0.05f, 0.70f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 97
Vertex{ glm::vec3(0.15f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 98

};

GLuint TPIndices[] =
{
	// front
	0, 1, 2,
	3, 4, 5,

	6,7,8,
	9,10,11,

	12,13,14,
	15,16,17,

	18,19,20,
	21,22,23,

	24, 25, 26,
	27,28,29,

	30,31,32,
	33,34,35,

	36,37,38,
	39,40,41,

	42,43,44,
	45,46,47,

	48,49,50,
	51,52,53,

	54,55,56,
	57,58,59,

	60,61,62,
	63,64,65,

	66,67,68,
	69,70,71,

	72,73,74,
	75,76,77,

	78,79,80,
	81,82,83,

	84,85,86,
	87,88,89,

	90,91,92,
	93,94,95,

	96,97,98,
};

Vertex TPHole[] =
{
	//               COORDINATES           /            COLORS          /           TexCoord         /       NORMALS         //
//TPhole
//___________________

//top circle
 	   //set 7
Vertex{ glm::vec3(0.05f, 0.70f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 24
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 25
Vertex{ glm::vec3(-0.05f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 26
//SET 8
Vertex{ glm::vec3(-0.05f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 27
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 28
Vertex{ glm::vec3(-0.10f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 29

//set 9
Vertex{ glm::vec3(-0.10f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 30
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 31
Vertex{ glm::vec3(-0.05f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 32

//set 10
Vertex{ glm::vec3(-0.05f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 33
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 34
Vertex{ glm::vec3(0.05f, 0.70f, -0.65f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 35

//set 11
Vertex{ glm::vec3(0.05f, 0.70f, -0.65f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 36
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 37
Vertex{ glm::vec3(0.15f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 38

//set 12
Vertex{ glm::vec3(0.15f, 0.70f, -0.60f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 39
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 40
Vertex{ glm::vec3(0.20f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 41

//set 13
Vertex{ glm::vec3(0.20f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 42
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 43
Vertex{ glm::vec3(0.15f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 44

//set 14
Vertex{ glm::vec3(0.15f, 0.70f, -0.40f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 45
Vertex{ glm::vec3(0.05f, 0.70f, -0.50f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 46
Vertex{ glm::vec3(0.05f, 0.70f, -0.35f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 47

};

GLuint TPHoleIndices[] =
{
	// front
	0, 1, 2,
	3, 4, 5,

	6,7,8,
	9,10,11,

	12,13,14,
	15,16,17,

	18,19,20,
	21,22,23,

	24, 25, 26,
	27,28,29,

	30,31,32,
	33,34,35,

	36,37,38,
	39,40,41,

	42,43,44,
	45,46,47,
};

Vertex CatToy[] =
{
	//               COORDINATES           /            COLORS          /           TexCoord         /       NORMALS         //
//TPhole
//___________________

//triangle1
Vertex{ glm::vec3(0.0f,1.0f,0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f) }, // 0
Vertex{ glm::vec3(1.0f,0.0f,0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 1

Vertex{ glm::vec3(-1.0f,-1.0f,1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 2
Vertex{ glm::vec3(0.0f,1.0f,0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 3

Vertex{ glm::vec3(1.0f,-1.0f,1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 4
Vertex{ glm::vec3(0.0f,0.0f,1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 5

//triangle 2
Vertex{ glm::vec3(0.0f,1.0f,0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 6
Vertex{ glm::vec3(1.0f,0.0f,0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 7

Vertex{ glm::vec3(1.0f,-1.0f,1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 8
Vertex{ glm::vec3(0.0f,0.0f,1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 9

Vertex{ glm::vec3(1.0f,-1.0f,-1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 10
Vertex{ glm::vec3(0.0f,1.0f,0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 11

//triangle 3
Vertex{ glm::vec3(0.0f,1.0f,0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 36
Vertex{ glm::vec3(1.0f,0.0f,0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 37

Vertex{ glm::vec3(1.0f,-1.0f,-1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 38
Vertex{ glm::vec3(0.0f,1.0f,0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 39

Vertex{ glm::vec3(-1.0f,-1.0f,-1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 40
Vertex{ glm::vec3(0.0f,0.0f,1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 41

//triangle 4
Vertex{ glm::vec3(0.0f,1.0f,0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 42
Vertex{ glm::vec3(1.0f,0.0f,0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 43

Vertex{ glm::vec3(-1.0f,-1.0f,-1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 44
Vertex{ glm::vec3(0.0f,0.0f,1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f) }, // 45

Vertex{ glm::vec3(-1.0f,-1.0f,1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f) }, // 46
Vertex{ glm::vec3(0.0f,1.0f,0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f) }, // 47

};

GLuint CatToyIndices[] =
{
	// First triangle
	0, 1, 2,
};




int main()
{
	// Initialize GLFW
	glfwInit();

	// Tell GLFW what version of OpenGL we are using 
	// In this case we are using OpenGL 3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// Tell GLFW we are using the CORE profile
	// So that means we only have the modern functions
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Create a GLFWwindow object of 800 by 600 pixels, naming it "Talia Cunningham"
	GLFWwindow* window = glfwCreateWindow(width, height, "Talia Cunningham", NULL, NULL);
	// Error check if the window fails to create
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	// Introduce the window into the current context
	glfwMakeContextCurrent(window);

	//Load GLAD so it configures OpenGL
	gladLoadGL();
	// Specify the viewport of OpenGL in the Window
	glViewport(0, 0, width, height);



	// Generates Shader object using shaders default.vert and default.frag for the floor
	Shader shaderProgram("default.vert", "default.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> verts(vertices, vertices + sizeof(vertices) / sizeof(Vertex));
	std::vector <GLuint> ind(indices, indices + sizeof(indices) / sizeof(GLuint));
	// Create floor mesh
	Mesh floor(verts, ind); //, tex

	// Generates Shader object using shaders default.vert and default.frag for the Tissue
	Shader tissueProgram("default.vert", "default.frag");
	//Store mesh data in vectors for the mesh
	std::vector <Vertex> tissueVerts(Tissue, Tissue + sizeof(Tissue) / sizeof(Vertex));
	std::vector <GLuint> tissueInd(TissueIndices, TissueIndices + sizeof(TissueIndices) / sizeof(GLuint));
	Mesh tissueBox(tissueVerts, tissueInd);

	// Generates Shader object using shaders default.vert and default.frag for the Tissue
	Shader TPProgram("default.vert", "default.frag");
	//Store mesh data in vectors for the mesh
	std::vector <Vertex> TPVerts(TP, TP + sizeof(TP) / sizeof(Vertex));
	std::vector <GLuint> TPInd(TPIndices, TPIndices + sizeof(TPIndices) / sizeof(GLuint));
	Mesh TPBox(TPVerts, TPInd);

	// Generates Shader object using shaders default.vert and default.frag for the Tissue
	Shader TPHoleProgram("default.vert", "default.frag");
	//Store mesh data in vectors for the mesh
	std::vector <Vertex> TPHoleVerts(TPHole, TPHole + sizeof(TPHole) / sizeof(Vertex));
	std::vector <GLuint> TPHoleInd(TPHoleIndices, TPHoleIndices + sizeof(TPHoleIndices) / sizeof(GLuint));
	Mesh TPHoleBox(TPHoleVerts, TPHoleInd);


		// Generates Shader object using shaders default.vert and default.frag for the Tissue
	Shader KodakProgram("default.vert", "default.frag");
	//Store mesh data in vectors for the mesh
	std::vector <Vertex> KodakVerts(Kodak, Kodak + sizeof(Kodak) / sizeof(Vertex));
	std::vector <GLuint> KodakInd(KodakIndices, KodakIndices + sizeof(KodakIndices) / sizeof(GLuint));
	Mesh KodakCamera(KodakVerts, KodakInd);//, tex

			// Generates Shader object using shaders default.vert and default.frag for the Tissue
	Shader KodakTopProgram("default.vert", "default.frag");
	//Store mesh data in vectors for the mesh
	std::vector <Vertex> KodakTopVerts(KodakTop, KodakTop + sizeof(KodakTop) / sizeof(Vertex));
	std::vector <GLuint> KodakTopInd(KodakTopindices, KodakTopindices + sizeof(KodakTopindices) / sizeof(GLuint));
	Mesh KodakTopCamera(KodakTopVerts, KodakTopInd);//, tex

	// Generates Shader object using shaders default.vert and default.frag for the Tissue
	Shader holeprogram("default.vert", "default.frag");
	//Store mesh data in vectors for the mesh
	std::vector <Vertex> holeVerts(holeVERT, holeVERT + sizeof(holeVERT) / sizeof(Vertex));
	std::vector <GLuint> holesInd(holeIND, holeIND + sizeof(holeIND) / sizeof(GLuint));
	Mesh holeTissue(holeVerts, holesInd);

	// Generates Shader object using shaders default.vert and default.frag for the Tissue
	Shader CatToyProgram("default.vert", "default.frag");
	//Store mesh data in vectors for the mesh
	std::vector <Vertex> CatToyVerts(CatToy, CatToy + sizeof(CatToy) / sizeof(Vertex));
	std::vector <GLuint> CatToyInd(CatToyIndices, CatToyIndices + sizeof(CatToyIndices) / sizeof(GLuint));
	Mesh CatToys(CatToyVerts, CatToyInd);


	// Shader for light cube
	Shader lightShader("light.vert", "light.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> lightVerts(lightVertices, lightVertices + sizeof(lightVertices) / sizeof(Vertex));
	std::vector <GLuint> lightInd(lightIndices, lightIndices + sizeof(lightIndices) / sizeof(GLuint));
	// Crate light mesh
	Mesh light(lightVerts, lightInd);


	//get textures

	Texture wood("IMG_9430.png", GL_TEXTURE_2D, GL_TEXTURE0, GL_RGBA, GL_UNSIGNED_BYTE);
	wood.texUnit(shaderProgram, "tex0", 0);

	Texture cameratex("kodak.png", GL_TEXTURE_2D, GL_TEXTURE0, GL_RGBA, GL_UNSIGNED_BYTE);
	cameratex.texUnit(KodakProgram, "tex0", 0);

	Texture tissueTex("tissue.png", GL_TEXTURE_2D, GL_TEXTURE0, GL_RGBA, GL_UNSIGNED_BYTE);
	tissueTex.texUnit(tissueProgram, "tex0", 0);

	Texture blackTex("black.png", GL_TEXTURE_2D, GL_TEXTURE0, GL_RGBA, GL_UNSIGNED_BYTE);
	blackTex.texUnit(holeprogram, "tex0", 0);

	Texture whiteTex("white.png", GL_TEXTURE_2D, GL_TEXTURE0, GL_RGBA, GL_UNSIGNED_BYTE);
	whiteTex.texUnit(holeprogram, "tex0", 0);


	Texture CatToyTex("cattoy.png", GL_TEXTURE_2D, GL_TEXTURE0, GL_RGBA, GL_UNSIGNED_BYTE);
	CatToyTex.texUnit(CatToyProgram, "tex0", 0);





	//SCALE AND POSITION

	glm::vec4 lightColor = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	glm::vec3 lightPos = glm::vec3(0.5f, 0.5f, -0.5f);
	glm::mat4 lightModel = glm::mat4(1.0f);
	lightModel = glm::translate(lightModel, lightPos);

	glm::vec3 objectPos = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::mat4 objectModel = glm::mat4(0.15f);
	objectModel = glm::translate(objectModel, objectPos);

	//tissue
	glm::vec3 tissuePos = glm::vec3(0.0f, 0.5f, 0.0f);
	glm::mat4 tissueModel = glm::mat4(0.3f);
	tissueModel = glm::translate(tissueModel, tissuePos);


	//kodak Top
	glm::vec3 kodakTopPos = glm::vec3(1.0f, 0.01f, 3.0f);
	glm::mat4 kodakTopModel = glm::mat4(0.1f);
	kodakTopModel = glm::translate(kodakTopModel, kodakTopPos);

	//kodak
	glm::vec3 kodakPos = glm::vec3(1.0f, 0.0f, 3.0f);
	glm::mat4 kodakModel = glm::mat4(0.1f);
	kodakModel = glm::translate(kodakModel, kodakPos);

	//hole
	glm::vec3 holePos = glm::vec3(-0.60f, 0.42f, 0.20f);
	glm::mat4 holeModel = glm::mat4(0.7f);
	holeModel = glm::translate(holeModel, holePos);

	//TP
	glm::vec3 TPPos = glm::vec3(0.8f, 0.0f, 1.0f);
	glm::mat4 TPModel = glm::mat4(0.4f);
	TPModel = glm::translate(TPModel, TPPos);

	//TP Hole
	glm::vec3 TPHolePos = glm::vec3(1.10f, 0.24f, 1.17f);
	glm::mat4 TPHoleModel = glm::mat4(0.3f);
	TPHoleModel = glm::translate(TPHoleModel, TPHolePos);

	//CatToy
	glm::vec3 CatToyTopPos = glm::vec3(-1.0f, 0.01f, 3.0f);
	glm::mat4 CatToyTopModel = glm::mat4(0.1f);
	CatToyTopModel = glm::translate(CatToyTopModel, CatToyTopPos);



	lightShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(lightShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(lightModel));
	glUniform4f(glGetUniformLocation(lightShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);

	tissueProgram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(tissueProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(tissueModel));
	glUniform4f(glGetUniformLocation(tissueProgram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(tissueProgram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	KodakProgram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(KodakProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(kodakModel));
	glUniform4f(glGetUniformLocation(KodakProgram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(KodakProgram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	TPProgram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(TPProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(TPModel));
	glUniform4f(glGetUniformLocation(TPProgram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(TPProgram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	TPHoleProgram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(TPHoleProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(TPHoleModel));
	glUniform4f(glGetUniformLocation(TPHoleProgram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(TPHoleProgram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	KodakTopProgram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(KodakTopProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(kodakTopModel));
	glUniform4f(glGetUniformLocation(KodakTopProgram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(KodakTopProgram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	holeprogram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(holeprogram.ID, "model"), 1, GL_FALSE, glm::value_ptr(holeModel));
	glUniform4f(glGetUniformLocation(holeprogram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(holeprogram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	shaderProgram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(shaderProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	glUniform4f(glGetUniformLocation(shaderProgram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(shaderProgram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);


	CatToyProgram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(shaderProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(CatToyTopModel));
	glUniform4f(glGetUniformLocation(shaderProgram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(shaderProgram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);


	// Enables the Depth Buffer
	glEnable(GL_DEPTH_TEST);

	// Creates camera object
	Camera camera(width, height, glm::vec3(0.0f, 0.0f, 2.0f));

	// Main while loop
	while (!glfwWindowShouldClose(window))
	{
		// Specify the color of the background
		glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
		// Clean the back buffer and depth buffer
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


		// Handles camera inputs
		camera.Inputs(window);
		// Updates and exports the camera matrix to the Vertex Shader
		camera.updateMatrix(45.0f, 0.1f, 100.0f);

	

		// Draws different meshes
	
		wood.Bind();
		floor.Draw(shaderProgram, camera);
		tissueTex.Bind();
		tissueBox.Draw(tissueProgram, camera);
		whiteTex.Bind();
		TPBox.Draw(TPProgram, camera);
		cameratex.Bind();
		KodakTopCamera.Draw(KodakTopProgram, camera);
		blackTex.Bind();
		KodakCamera.Draw(KodakProgram, camera);
		TPHoleBox.Draw(TPHoleProgram, camera);
		holeTissue.Draw(holeprogram, camera);
		CatToyTex.Bind();
		CatToys.Draw(CatToyProgram, camera);
		light.Draw(lightShader, camera);




		// Swap the back buffer with the front buffer
		glfwSwapBuffers(window);
		// Take care of all GLFW events
		glfwPollEvents();
	}



	// Delete all the objects we've created
	shaderProgram.Delete();
	tissueProgram.Delete();
	KodakProgram.Delete();
	KodakTopProgram.Delete();
	holeprogram.Delete();
	lightShader.Delete();
	TPProgram.Delete();
	TPHoleProgram.Delete();
	CatToyProgram.Delete();

	//delete textures
	wood.Delete();
	tissueTex.Delete();
	cameratex.Delete();
	blackTex.Delete();
	whiteTex.Delete();
	CatToyTex.Delete();

	// Delete window before ending the program
	glfwDestroyWindow(window);
	// Terminate GLFW before ending the program
	glfwTerminate();
	return 0;
}