// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.0.1
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/
#ifndef CIAO_COMPONENT1_EXEC_9WAS1H_H_
#define CIAO_COMPONENT1_EXEC_9WAS1H_H_

#include /**/ "ace/pre.h"

#include "Component1EC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Component1_exec_export.h"
#include "tao/LocalObject.h"

namespace CIAO_Threading_Component1_Impl
{

  /**
   * Provider Executor Implementation Class: prov_interface_1_exec_i
   */

  class prov_interface_1_exec_i
    : public virtual ::Threading::CCM_interface_1,
      public virtual ::CORBA::LocalObject
  {
  public:
    prov_interface_1_exec_i (
      ::Threading::CCM_Component1_Context_ptr ctx);
    virtual ~prov_interface_1_exec_i (void);

    /** @name Operations and attributes from Threading::interface_1 */
    //@{

    virtual
    void invoke_on_interface_1 (void);
    //@}

  private:
    ::Threading::CCM_Component1_Context_var ciao_context_;
  };

  /**
   * Component Executor Implementation Class: Component1_exec_i
   */

  class Component1_exec_i
    : public virtual Component1_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    Component1_exec_i (void);
    virtual ~Component1_exec_i (void);

    /** @name Supported operations and attributes. */
    //@{

    //@}

    /** @name Component attributes and port operations. */
    //@{

    virtual ::Threading::CCM_interface_1_ptr
    get_prov_interface_1 (void);
    //@}

    /** @name Operations from Components::SessionComponent. */
    //@{
    virtual void set_session_context (::Components::SessionContext_ptr ctx);
    virtual void configuration_complete (void);
    virtual void ccm_activate (void);
    virtual void ccm_passivate (void);
    virtual void ccm_remove (void);
    //@}

    /** @name User defined public operations. */
    //@{

    //@}

  private:
    ::Threading::CCM_Component1_Context_var ciao_context_;

    /** @name Component attributes. */
    //@{
    ::Threading::CCM_interface_1_var ciao_prov_interface_1_;
    //@}

    /** @name User defined members. */
    //@{

    //@}

    /** @name User defined private operations. */
    //@{

    //@}
  };

  extern "C" COMPONENT1_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Threading_Component1_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */
