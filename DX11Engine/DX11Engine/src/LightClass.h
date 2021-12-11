////////////////////////////////////////////////////////////////////////////////
// Filename: lightclass.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _LIGHTCLASS_H_
#define _LIGHTCLASS_H_


//////////////
// INCLUDES //
//////////////
#include <d3dx10math.h>


////////////////////////////////////////////////////////////////////////////////
// Class name: LightClass
////////////////////////////////////////////////////////////////////////////////
class LightClass
{
public:
	LightClass();
	LightClass(const LightClass&);
	~LightClass();

	void SetDiffuseColor(float, float, float, float);
	void SetPosition(float, float, float);
	void SetIntensity(float);

	D3DXVECTOR4 GetDiffuseColor();
	D3DXVECTOR3 GetPosition();
	float GetIntensity();

private:
	D3DXVECTOR4 m_diffuseColor;
	D3DXVECTOR3 m_position;
	float m_intensity;
};

#endif
