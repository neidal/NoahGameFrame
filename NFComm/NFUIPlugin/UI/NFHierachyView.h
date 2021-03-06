/*
			This file is part of:
				NoahFrame
			https://github.com/ketoo/NoahGameFrame

   Copyright 2009 - 2019 NoahFrame(NoahGameFrame)

   File creator: lvsheng.huang

   NoahFrame is open-source software and you can redistribute it and/or modify
   it under the terms of the License; besides, anyone who use this file/software must include this copyright announcement.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

	   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
#ifndef NF_HIERACHY_VIEW_H
#define NF_HIERACHY_VIEW_H

#include "NFComm/NFPluginModule/NFIUIModule.h"
#include "NFComm/NFPluginModule/NFIKernelModule.h"
#include "NFComm/NFPluginModule/NFIBluePrintModule.h"
#include "NFComm/NFPluginModule/NFIClassModule.h"
#include "NFComm/NFPluginModule/NFIElementModule.h"

class NFHierachyView : public NFIView
{
public:
	NFHierachyView(NFIPluginManager* p, NFViewType vt);
	virtual bool Execute();

   virtual void SubRender();

private:
   void GodViewSubRender();
   void GameViewSubRender();
   void ProjectViewSubRender();
   void BluePrintViewSubRender();

   void BluePrintViewSubRenderForLogicBlock();
   void BluePrintViewSubRenderForMonitor();
   void BluePrintViewSubRenderForJudgement();
   void BluePrintViewSubRenderForExecuter();

   void BluePrintViewSubRenderForMonitorHead(NF_SHARE_PTR<NFMonitor> monitor);
   void BluePrintViewSubRenderForMonitorBody(NF_SHARE_PTR<NFMonitor> monitor);
   void BluePrintViewSubRenderForMonitorBot(NF_SHARE_PTR<NFMonitor> monitor);

   void BluePrintViewSubRenderForJudgementHead(NF_SHARE_PTR<NFJudgement> judgement);
   void BluePrintViewSubRenderForJudgementBody(NF_SHARE_PTR<NFJudgement> judgement);
   void BluePrintViewSubRenderForJudgementBot(NF_SHARE_PTR<NFJudgement> judgement);

   void InitBluePrintMonitorArgs(NF_SHARE_PTR<NFMonitor> monitor);
   void InitBluePrintJudgementArgs(NF_SHARE_PTR<NFJudgement> judgement);
   void InitBluePrintExecuterArgs(NF_SHARE_PTR<NFExecuter> executer);

private:
	NFIClassModule* m_pClassModule;
	NFIElementModule* m_pElementModule;
	NFIKernelModule* m_pKernelModule;
	NFIBluePrintModule* m_pBluePrintModule;

};

#endif