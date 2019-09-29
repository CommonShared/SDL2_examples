#ifndef __UITIMER_H__
#define __UITIMER_H__

#include <UICaption.h>
#include <SDL.h>
#include <SDL_ttf.h>
#include <string>
#include <iostream>

using std::string;

class UITimer : public UICaption
{
	public:
		UITimer(uint32_t inId, uint32_t inX, uint32_t inY, uint32_t inWidth, uint32_t inHeight, string inCaption, string inFontName, uint32_t inFontSize, SDL_Color &inColor, uiguiTextAdjust inAdjust, uint32_t inTimeSec, uint32_t inExpireMsg);
		~UITimer();

		void SetTime(uint32_t inTimeSec);
		uint32_t GetTime();
		void Start();
		void Stop();

	public:
		void Render();
		void RenderText();
		void PassingTime();

	protected:
		bool mIsRunning;
		uint32_t mExpireMsg;
		uint32_t mTimeSec;
		uint32_t mLastTimeStamp;

};

#endif // __UITIMER_H__
