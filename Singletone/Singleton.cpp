#include "stdafx.h"
#include "Singleton.h"


void Singleton::SetCount(int count)
{
	m_count = count;
}

int Singleton::GetCount()
{
	return m_count;
}