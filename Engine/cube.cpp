#include "cube.h"



cube::cube()
{
}


cube::~cube()
{
}

bool cube::Estrategia() {
	int i = 0;

	m_vertexCount = 8;
	m_indexCount = 36;

	// Create the vertex array.
	vertices = new VertexType[m_vertexCount];
	if (!vertices)
	{
		return false;
	}

	// Create the index array.
	indices = new unsigned long[m_indexCount];
	if (!indices)
	{
		return false;
	}

	i = 0;
	vertices[i++].position = D3DXVECTOR3(-1, -1, -1); //0
	vertices[i++].position = D3DXVECTOR3(-1, -1, +1); //1
	vertices[i++].position = D3DXVECTOR3(-1, +1, -1); //2
	vertices[i++].position = D3DXVECTOR3(-1, +1, +1); //3
	vertices[i++].position = D3DXVECTOR3(+1, -1, -1); //4
	vertices[i++].position = D3DXVECTOR3(+1, -1, +1); //5
	vertices[i++].position = D3DXVECTOR3(+1, +1, -1); //6
	vertices[i++].position = D3DXVECTOR3(+1, +1, +1); //7

	i = 0;
	vertices[i++].normal = D3DXVECTOR3(-1, -1, -1); //0
	vertices[i++].normal = D3DXVECTOR3(-1, -1, +1); //1
	vertices[i++].normal = D3DXVECTOR3(-1, +1, -1); //2
	vertices[i++].normal = D3DXVECTOR3(-1, +1, +1); //3
	vertices[i++].normal = D3DXVECTOR3(+1, -1, -1); //4
	vertices[i++].normal = D3DXVECTOR3(+1, -1, +1); //5
	vertices[i++].normal = D3DXVECTOR3(+1, +1, -1); //6
	vertices[i++].normal = D3DXVECTOR3(+1, +1, +1); //7


	i = 0;
	vertices[i].texture.x = 0; //0
	vertices[i++].texture.y = 1; //0
	vertices[i].texture.x = 0; //0
	vertices[i++].texture.y = 0; //0
	vertices[i].texture.x = 1; //0
	vertices[i++].texture.y = 0; //0
	vertices[i].texture.x = 1; //0
	vertices[i++].texture.y = 1; //0
	vertices[i].texture.x = 0; //0
	vertices[i++].texture.y = 1; //0
	vertices[i].texture.x = 0; //0
	vertices[i++].texture.y = 0; //0
	vertices[i].texture.x = 1; //0
	vertices[i++].texture.y = 0; //0
	vertices[i].texture.x = 1; //0
	vertices[i++].texture.y = 1; //0


	i = 0;
	indices[i++] = 2;
	indices[i++] = 6;
	indices[i++] = 0;
	indices[i++] = 0;
	indices[i++] = 6;
	indices[i++] = 4;

	indices[i++] = 4;
	indices[i++] = 6;
	indices[i++] = 7;
	indices[i++] = 4;
	indices[i++] = 7;
	indices[i++] = 5;

	indices[i++] = 5;
	indices[i++] = 7;
	indices[i++] = 3;
	indices[i++] = 3;
	indices[i++] = 1;
	indices[i++] = 5;

	indices[i++] = 1;
	indices[i++] = 3;
	indices[i++] = 2;
	indices[i++] = 2;
	indices[i++] = 0;
	indices[i++] = 1;

	indices[i++] = 2;
	indices[i++] = 3;
	indices[i++] = 7;
	indices[i++] = 2;
	indices[i++] = 7;
	indices[i++] = 6;

	indices[i++] = 1;
	indices[i++] = 4;
	indices[i++] = 5;
	indices[i++] = 1;
	indices[i++] = 0;
	indices[i++] = 4;
}