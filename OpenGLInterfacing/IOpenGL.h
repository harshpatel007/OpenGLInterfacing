#pragma once

class IOpenGL
{
public:
	virtual void initialize() = 0;
	virtual void update() = 0;
	virtual void display() = 0;
	virtual void uninitialize() = 0;
	static IOpenGL* GetInstance(int classIdentifier);
};
