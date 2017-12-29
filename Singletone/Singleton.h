#pragma once

class Singleton
{
public:
	static Singleton& Instance()
	{
		static Singleton s;
		return s;
	}

	int GetCount();
	void SetCount(int count);
private:
	Singleton() = default;
	int m_count;
}; 