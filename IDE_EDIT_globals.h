/********************************************************************************\
**                                                                              **
**  Copyright (C) 2008 Josh Ventura                                             **
**                                                                              **
**  This file is a part of the ENIGMA Development Environment.                  **
**                                                                              **
**                                                                              **
**  ENIGMA is free software: you can redistribute it and/or modify it under the **
**  terms of the GNU General Public License as published by the Free Software   **
**  Foundation, version 3 of the license or any later version.                  **
**                                                                              **
**  This application and its source code is distributed AS-IS, WITHOUT ANY      **
**  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS   **
**  FOR A PARTICULAR PURPOSE. See the GNU General Public License for more       **
**  details.                                                                    **
**                                                                              **
**  You should have recieved a copy of the GNU General Public License along     **
**  with this code. If not, see <http://www.gnu.org/licenses/>                  **
**                                                                              **
**  ENIGMA is an environment designed to create games and other programs with a **
**  high-level, fully compilable language. Developers of ENIGMA or anything     **
**  associated with ENIGMA are in no way responsible for its users or           **
**  applications created by its users, or damages caused by the environment     **
**  or programs made in the environment.                                        **
**                                                                              **
\********************************************************************************/

//This file was generated by the ENIGMA Development Environment.
//Editing it is a sign of a certain medical condition. We're not sure which one.

// Script arguments
variant argument0 = 0, argument1 = 0, argument2 = 0, argument3 = 0, argument4 = 0, argument5 = 0, argument6 = 0, argument7 = 0, argument8 = 0, argument9 = 0, argument10 = 0, argument11 = 0, argument12 = 0, argument13 = 0, argument14 = 0, argument15 = 0;

namespace enigma_user { 
  unsigned int game_id = 878339;
}

namespace enigma_user {
}
//Default variable type: "undefined" or "real"
const int variant::default_type = ty_undefined;

namespace enigma {
  bool interpolate_textures = 0;
  bool forceSoftwareVertexProcessing = 0;
  bool isSizeable = -1;
  bool showBorder = 1;
  bool showIcons = 1;
  bool freezeOnLoseFocus = 0;
  bool treatCloseAsEscape = -1;
  bool isFullScreen = 0;
  string gameInfoText = "{\\rtf1\\ansi\n{\\fonttbl\\f0\\fnil Monospaced;\\f1\\fnil DejaVu Sans;}\n\n\\li0\\ri0\\fi0\\ql\\f0\\fs24\\i0\\b0\\ul0\\sl-240\\cf0\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\f1\\fs32\\par\n\\par\n\\par\n\\fs24\\par\n\\fs32\\par\n\\fs24\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\sl0\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\par\n\\fs24\\i0\\b0\\ul0\\sl0\\par\n}\n";
  string gameInfoCaption = "";
  int gameInfoBackgroundColor = 0xe1ffff;
  int gameInfoLeft = -1;
  int gameInfoTop = -1;
  int gameInfoWidth = 600;
  int gameInfoHeight = 400;
  bool gameInfoEmbedGameWindow = 0;
  bool gameInfoShowBorder = -1;
  bool gameInfoAllowResize = -1;
  bool gameInfoStayOnTop = 0;
  bool gameInfoPauseGame = -1;
  int viewScale = 0;
  int windowColor = 0;
}

namespace enigma
{
  struct ENIGMA_global_structure: object_locals
  {
    int o;
    ENIGMA_global_structure(const int _x, const int _y): object_locals(_x,_y) {}
  };
  object_basic *ENIGMA_global_instance = new ENIGMA_global_structure(global,global);
}
