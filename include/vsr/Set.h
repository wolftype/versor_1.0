//
//  Model.h
//  vsr
//
//  Created by Pablo Colapinto on 3/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_Set_h
#define vsr_Set_h

namespace vsr  {

    template<typename T>
    class Set {

    protected:
    
        vector<T*> mStates;
        vector<T> mTmp;
        unsigned long mActiveId;
    
    public:


        unsigned long& activeId() { return mActiveId; }
        unsigned long activeId() const { return mActiveId; }
        
        Set& add(T* s) { mStates.push_back(s); mActiveId = mStates.size(); return *this; }
        
        T& active() { return *mStates[mActiveId-1]; }
        T active() const { return *mStates[mActiveId-1]; }

        vector<T>& tmp() { return mTmp; }
        vector<T> tmp() const { return mTmp; }
        
        Set& push(const T& s) { mTmp.push_back(s); }
        T& get() { return mTmp.back(); }
        
 
    };
    



} //vsr::
#endif
