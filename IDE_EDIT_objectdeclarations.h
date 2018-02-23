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

#include "Universal_System/collisions_object.h"
#include "Universal_System/object.h"

#include <map>// Script identifiers




namespace enigma
{
  extern std::map<int,object_basic*> instance_deactivated_list;
  extern objectstruct** objectdata;

  struct object_locals: event_parent,
      virtual extension_path /* DateTime */ /* DataStructures */ /* MotionPlanning */,
      virtual extension_alarm /* Timelines */ /* ParticleSystems */
  {
    #include "Preprocessor_Environment_Editable/IDE_EDIT_inherited_locals.h"

    std::map<string, var> *vmap;
    object_locals() {vmap = NULL;}
    object_locals(unsigned _x, int _y): event_parent(_x,_y) {vmap = NULL;}
  };

  namespace extension_cast {
    extension_path *as_extension_path(object_basic* x) {
      return (extension_path*)(object_locals*)x;
    }
    extension_alarm *as_extension_alarm(object_basic* x) {
      return (extension_alarm*)(object_locals*)x;
    }
  }
}

namespace enigma // TODO: Replace with enigma_user
{
  
  struct OBJ_obj_0: object_locals
  {
    // Local variables
    var o;
    
    //Scripts called by this object
    
    
    //Timelines called by this object

    variant myevent_step();
    inline bool myevent_draw_subcheck();
      
      // Grouped event bases
      // Event Perform Code
      variant myevents_perf(int type, int numb)
      {
        if (type == 3 && numb == 0)
          return myevent_step();
        return 0;
      }

    // Self-tracking
      enigma::pinstance_list_iterator ENOBJ_ITER_me;
      enigma::inst_iter *ENOBJ_ITER_myobj60;
      enigma::inst_iter *ENOBJ_ITER_myevent_step;
      enigma::inst_iter *ENOBJ_ITER_myevent_beginstep;
      enigma::inst_iter *ENOBJ_ITER_myevent_localsweep;
      enigma::inst_iter *ENOBJ_ITER_myevent_beforecollisionautomaticcollisionhandling;
      enigma::inst_iter *ENOBJ_ITER_myevent_endstep;
      enigma::inst_iter *ENOBJ_ITER_myevent_particlesystemsupdate;

    void unlink()
    {
      instance_iter_queue_for_destroy(this); // Queue for delete while we're still valid
      if (enigma::instance_deactivated_list.erase(id)==0) {
        //If it's not in the deactivated list, then it's active (so deactivate it).
        deactivate();
      }
    }

    void deactivate()
    {
      enigma::unlink_main(ENOBJ_ITER_me); // Remove this instance from the non-redundant, tree-structured list.
      unlink_object_id_iter(ENOBJ_ITER_myobj60, 60);
      enigma::event_step->unlink(ENOBJ_ITER_myevent_step);
      enigma::event_beginstep->unlink(ENOBJ_ITER_myevent_beginstep);
      enigma::event_localsweep->unlink(ENOBJ_ITER_myevent_localsweep);
      enigma::event_beforecollisionautomaticcollisionhandling->unlink(ENOBJ_ITER_myevent_beforecollisionautomaticcollisionhandling);
      enigma::event_endstep->unlink(ENOBJ_ITER_myevent_endstep);
      enigma::event_particlesystemsupdate->unlink(ENOBJ_ITER_myevent_particlesystemsupdate);
      depth.remove();;
    }

    OBJ_obj_0(int enigma_genericconstructor_newinst_x = 0, int enigma_genericconstructor_newinst_y = 0, const int id = (enigma::maxid++), const int enigma_genericobjid = 60, bool handle = true): object_locals(id,enigma_genericobjid) 
    {
      if (!handle) return;
      sprite_index = enigma::objectdata[60]->sprite;
      mask_index = enigma::objectdata[60]->mask;
      visible = enigma::objectdata[60]->visible;
      solid = enigma::objectdata[60]->solid;
      persistent = enigma::objectdata[60]->persistent;
      activate();
      x = enigma_genericconstructor_newinst_x, y = enigma_genericconstructor_newinst_y;
      enigma::constructor(this);
    }

    void activate()
    {
      depth.init(enigma::objectdata[60]->depth, this);
      ENOBJ_ITER_me = enigma::link_instance(this);
      ENOBJ_ITER_myobj60 = enigma::link_obj_instance(this, 60);
      ENOBJ_ITER_myevent_step = enigma::event_step->add_inst(this);
      ENOBJ_ITER_myevent_beginstep = enigma::event_beginstep->add_inst(this);
      ENOBJ_ITER_myevent_localsweep = enigma::event_localsweep->add_inst(this);
      ENOBJ_ITER_myevent_beforecollisionautomaticcollisionhandling = enigma::event_beforecollisionautomaticcollisionhandling->add_inst(this);
      ENOBJ_ITER_myevent_endstep = enigma::event_endstep->add_inst(this);
      ENOBJ_ITER_myevent_particlesystemsupdate = enigma::event_particlesystemsupdate->add_inst(this);
    }
    
    ~OBJ_obj_0()
    {
      delete vmap;
      enigma::winstance_list_iterator_delete(ENOBJ_ITER_me);
      delete ENOBJ_ITER_myobj60;
      delete ENOBJ_ITER_myevent_step;
      delete ENOBJ_ITER_myevent_beginstep;
      delete ENOBJ_ITER_myevent_localsweep;
      delete ENOBJ_ITER_myevent_beforecollisionautomaticcollisionhandling;
      delete ENOBJ_ITER_myevent_endstep;
      delete ENOBJ_ITER_myevent_particlesystemsupdate;
    }
    virtual bool can_cast(int obj) const;
  };
  
  struct OBJ_obj_1: object_locals
  {
    // Local variables
    int o;
    
    //Scripts called by this object
    
    
    //Timelines called by this object

    variant myevent_create();
    inline bool myevent_draw_subcheck();
      
      // Grouped event bases
      // Event Perform Code
      variant myevents_perf(int type, int numb)
      {
        if (type == 0 && numb == 0)
          return myevent_create();
        return 0;
      }

    // Self-tracking
      enigma::pinstance_list_iterator ENOBJ_ITER_me;
      enigma::inst_iter *ENOBJ_ITER_myobj61;
      enigma::inst_iter *ENOBJ_ITER_myevent_create;
      enigma::inst_iter *ENOBJ_ITER_myevent_beginstep;
      enigma::inst_iter *ENOBJ_ITER_myevent_step;
      enigma::inst_iter *ENOBJ_ITER_myevent_localsweep;
      enigma::inst_iter *ENOBJ_ITER_myevent_beforecollisionautomaticcollisionhandling;
      enigma::inst_iter *ENOBJ_ITER_myevent_endstep;
      enigma::inst_iter *ENOBJ_ITER_myevent_particlesystemsupdate;

    void unlink()
    {
      instance_iter_queue_for_destroy(this); // Queue for delete while we're still valid
      if (enigma::instance_deactivated_list.erase(id)==0) {
        //If it's not in the deactivated list, then it's active (so deactivate it).
        deactivate();
      }
    }

    void deactivate()
    {
      enigma::unlink_main(ENOBJ_ITER_me); // Remove this instance from the non-redundant, tree-structured list.
      unlink_object_id_iter(ENOBJ_ITER_myobj61, 61);
      enigma::event_create->unlink(ENOBJ_ITER_myevent_create);
      enigma::event_beginstep->unlink(ENOBJ_ITER_myevent_beginstep);
      enigma::event_step->unlink(ENOBJ_ITER_myevent_step);
      enigma::event_localsweep->unlink(ENOBJ_ITER_myevent_localsweep);
      enigma::event_beforecollisionautomaticcollisionhandling->unlink(ENOBJ_ITER_myevent_beforecollisionautomaticcollisionhandling);
      enigma::event_endstep->unlink(ENOBJ_ITER_myevent_endstep);
      enigma::event_particlesystemsupdate->unlink(ENOBJ_ITER_myevent_particlesystemsupdate);
      depth.remove();;
    }

    OBJ_obj_1(int enigma_genericconstructor_newinst_x = 0, int enigma_genericconstructor_newinst_y = 0, const int id = (enigma::maxid++), const int enigma_genericobjid = 61, bool handle = true): object_locals(id,enigma_genericobjid) 
    {
      if (!handle) return;
      sprite_index = enigma::objectdata[61]->sprite;
      mask_index = enigma::objectdata[61]->mask;
      visible = enigma::objectdata[61]->visible;
      solid = enigma::objectdata[61]->solid;
      persistent = enigma::objectdata[61]->persistent;
      activate();
      x = enigma_genericconstructor_newinst_x, y = enigma_genericconstructor_newinst_y;
      enigma::constructor(this);
    }

    void activate()
    {
      depth.init(enigma::objectdata[61]->depth, this);
      ENOBJ_ITER_me = enigma::link_instance(this);
      ENOBJ_ITER_myobj61 = enigma::link_obj_instance(this, 61);
      ENOBJ_ITER_myevent_create = enigma::event_create->add_inst(this);
      ENOBJ_ITER_myevent_beginstep = enigma::event_beginstep->add_inst(this);
      ENOBJ_ITER_myevent_step = enigma::event_step->add_inst(this);
      ENOBJ_ITER_myevent_localsweep = enigma::event_localsweep->add_inst(this);
      ENOBJ_ITER_myevent_beforecollisionautomaticcollisionhandling = enigma::event_beforecollisionautomaticcollisionhandling->add_inst(this);
      ENOBJ_ITER_myevent_endstep = enigma::event_endstep->add_inst(this);
      ENOBJ_ITER_myevent_particlesystemsupdate = enigma::event_particlesystemsupdate->add_inst(this);
    }
    
    ~OBJ_obj_1()
    {
      delete vmap;
      enigma::winstance_list_iterator_delete(ENOBJ_ITER_me);
      delete ENOBJ_ITER_myobj61;
      delete ENOBJ_ITER_myevent_create;
      delete ENOBJ_ITER_myevent_beginstep;
      delete ENOBJ_ITER_myevent_step;
      delete ENOBJ_ITER_myevent_localsweep;
      delete ENOBJ_ITER_myevent_beforecollisionautomaticcollisionhandling;
      delete ENOBJ_ITER_myevent_endstep;
      delete ENOBJ_ITER_myevent_particlesystemsupdate;
    }
    virtual bool can_cast(int obj) const;
  };
}

namespace enigma {
  objectstruct objs[] = {
    {-1,0,1,0.000000,0,-1,-100,60},
    {-1,0,1,0.000000,0,-1,-100,61},
  };
  int objectcount = 2;
  int obj_idmax = 62;
}