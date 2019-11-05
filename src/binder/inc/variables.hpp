// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.
// ============================================================
//
// Variables.hpp
//


//
// Defines the Variables class
//
// ============================================================

#ifndef __BINDER__VARIABLES_HPP__
#define __BINDER__VARIABLES_HPP__

#include "bindertypes.hpp"

namespace BINDER_SPACE
{
    class Variables
    {
    public:
        Variables();
        ~Variables();

        HRESULT Init();

        // ApplicationContext string constants
        SString AppBaseURL;
        SString DynamicDirectory;
        SString DynamicBaseDirectory;
        SString AppName;
        SString AppConfigFile;
        SString AppDomainId;

        // AssemblyBinder string constants
        SString httpURLPrefix;

        // AssemblyName string constants
        SString cultureNeutral;
        SString emptyString;
        SString mscorlib;

#ifdef FEATURE_VERSIONING_LOG
        BOOL fLoggingNeeded;
        SString logPath;
#endif // FEATURE_VERSIONING_LOG
    };

    extern Variables *g_BinderVariables;
};

#endif
