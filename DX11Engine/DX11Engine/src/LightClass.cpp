////////////////////////////////////////////////////////////////////////////////
// Filename: lightclass.cpp
////////////////////////////////////////////////////////////////////////////////
#include "lightclass.h"


LightClass::LightClass()
{
}


LightClass::LightClass(const LightClass& other)
{
}


LightClass::~LightClass()
{
}

void LightClass::SetAmbientColor(float r, float g, float b, float a)
{
	m_ambientColor = D3DXVECTOR4(r, g, b, a);
}

void LightClass::SetSpecularColor(float r, float g, float b, float a)
{
	m_specularColor = D3DXVECTOR4(r, g, b, a);
}


void LightClass::SetDiffuseColor(float red, float green, float blue, float alpha)
{
	m_diffuseColor = D3DXVECTOR4(red, green, blue, alpha);
}


void LightClass::SetPosition(float x, float y, float z)
{
	m_position = D3DXVECTOR3(x, y, z);
}

void LightClass::SetIntensity(float intensity)
{
	m_intensity = intensity;
}

void LightClass::SetSpecularPower(float power)
{
	m_specularPower = power;
}

D3DXVECTOR4 LightClass::GetAmibientColor()
{
	return m_ambientColor;
}

D3DXVECTOR4 LightClass::GetSpecularColor()
{
	return m_diffuseColor;
}

D3DXVECTOR4 LightClass::GetDiffuseColor()
{
	return m_diffuseColor;
}

D3DXVECTOR3 LightClass::GetPosition()
{
	return m_position;
}

float LightClass::GetIntensity()
{
	return m_intensity;
}

float LightClass::GetSpecularPower()
{
	return m_specularPower;
}
