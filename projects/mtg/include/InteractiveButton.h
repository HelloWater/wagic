//
//  InteractiveButton.h
//
//  Created by Michael Nguyen on 1/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef wagic_InteractiveButton_h
#define wagic_InteractiveButton_h

#include <string>
#include <JLBFont.h>
#include <JGui.h>
#include "WResource_Fwd.h"
#include "SimpleButton.h"

using std::string;

#define SCALE_SELECTED      1.2f
#define SCALE_NORMAL        1.0f

const int kDismissButtonId       = 10000;
const int kToggleDeckActionId    = 10001;
const int kSellCardActionId      = 10002;
const int kSBActionId            = 10003;
const int kMenuButtonId          = 10004;
const int kFilterButtonId        = 10005;
const int kNextStatsButtonId     = 10006;
const int kPrevStatsButtonId     = 10007;
const int kCycleCardsButtonId    = 10008;
const int kShowCardListButtonId  = 10009;
const int kSwitchViewButton      = 10010;
const int kToggleUpButton        = 10011;
const int kToggleDownButton      = 10012;
const int kToggleLeftButton      = 10013;
const int kToggleRightButton     = 10014;

class InteractiveButton: public SimpleButton
{
private:
    JQuadPtr buttonImage;
    JButton mActionKey;
    
public:
    InteractiveButton(JGuiController* _parent, int id, int fontId, string text, float x, float y, JButton actionKey, bool hasFocus = false, bool autoTranslate = false);
    
    virtual void Entering();
    virtual bool ButtonPressed();
    virtual void setImage( const JQuadPtr imagePtr );
    virtual void checkUserClick();
    virtual void Render();
    virtual ostream& toString(ostream& out) const;
    
};

#endif
