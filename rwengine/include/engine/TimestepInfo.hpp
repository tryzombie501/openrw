#ifndef RWENGINE_TIMESTEPINFO_HPP
#define RWENGINE_TIMESTEPINFO_HPP

/**
 * Passes client and server timestep information into update functions
 *
 * Updates on the client-side of things, such as drawing can happen at any
 * framerate using the clientTimestep memeber.
 * Fixed-timestep updates can use the serverTimestep member, which is constant.
 */
struct TimestepInfo
{
public:
	TimestepInfo (float serverTimestep)
		: m_serverTimestep(serverTimestep)
		, m_clientTimestep(0.f)
	{ }

	float getServerTimestep() const { return m_serverTimestep; }
	float getClientTimestep() const { return m_clientTimestep; }

	void setServerTimestep(float timestep) { m_serverTimestep = timestep; }
	void setClientTimestep(float timestep) { m_clientTimestep = timestep; }

private:
	float m_serverTimestep;
	float m_clientTimestep;
};

#endif
