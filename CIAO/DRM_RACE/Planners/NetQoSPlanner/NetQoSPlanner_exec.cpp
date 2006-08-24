// $Id$
//
// ****              Code generated by the                 ****
// ****  Component Integrated ACE ORB (CIAO) CIDL Compiler ****
// CIAO has been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// CIDL Compiler has been developed by:
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about CIAO is available at:
//    http://www.dre.vanderbilt.edu/CIAO

#include "NetQoSPlanner_exec.h"
#include "ciao/CIAO_common.h"
#include "ciao/NetQoSC.h"
#include <iostream>

namespace CIAO
{
  namespace RACE
  {
    namespace CIDL_NetQoSPlanner_Impl
    {
      //==================================================================
      // Facet Executor Implementation Class:   Planner_I_exec_i
      //==================================================================

      Planner_I_exec_i::Planner_I_exec_i (void)
      {
      }

      Planner_I_exec_i::~Planner_I_exec_i (void)
      {
      }

      // Operations from ::CIAO::RACE::Planner_I

      ::CORBA::Boolean
      Planner_I_exec_i::process_plan (
        ::CIAO::RACE::Plan_Actions &  plans 
        ACE_ENV_ARG_DECL_NOT_USED)
      ACE_THROW_SPEC (( ::CORBA::SystemException,
                       ::CIAO::RACE::PlannerFailure))
      {
        // Your code here.
        ACE_DEBUG ((LM_DEBUG, "NetQoSPlanner::Planner_I_exec_i::process_plan()\n"));

        for (size_t i = 0; i < plans.length (); ++i)
          {
            ACE_DEBUG ((LM_DEBUG, "NetQoSPlanner: Inside plans.length loop\n"));
            ::CIAO::RACE::Plan_Action plan_action = plans [i];
            ::Deployment::DeploymentPlan dep_plan = plan_action.plan;
            for (size_t j = 0; 
                 j < dep_plan.infoProperty.length();
                 ++j)
              {
                ACE_DEBUG ((LM_DEBUG, "NetQoSPlanner: Inside infoProperty loop\n"));
                if (ACE_OS::strcmp (dep_plan.infoProperty[j].name.in (),
                                    "CIAONetworkQoS") == 0)
                 {
                   ACE_DEBUG ((LM_DEBUG, "NetQoSPlanner: Inside CIAONetworkQoS\n"));
                   ::CIAO::DAnCE::NetQoSRequirement *net_qos_req;
                   if (dep_plan.infoProperty [j].value >>= net_qos_req)
                    {
                       ACE_DEBUG ((LM_DEBUG, "NetQoSPlanner: Any successful\n"));
                       size_t set_len = net_qos_req->conn_qos_set.length();
                       for (size_t k = 0; k < set_len; ++k)
                         {
                           ::CIAO::DAnCE::ConnectionQoS conn_qos 
                            = net_qos_req->conn_qos_set[k];             
                           for (size_t conn_num = 0; 
                                conn_num < conn_qos.connections.length (); 
                                ++conn_num)
                             {
                               std::cerr << "Connection Name = " 
                               << conn_qos.connections [conn_num] 
                               << std::endl; 
                             }
                           std::cerr << "fwdBWD = " << conn_qos.fwdBWD << std::endl;
                           std::cerr << "revBWD = " << conn_qos.revBWD << std::endl;

                           if (CIAO::DAnCE::HIGH_PRIORITY == conn_qos.data_qos)
                              std::cerr << "DataTrafficQoS = NetworkQoS::HIGH_PRIORITY\n";
                           else if (CIAO::DAnCE::HIGH_RELIABILITY == conn_qos.data_qos)
                              std::cerr << "DataTrafficQoS = NetworkQoS::HIGH_RELIABILITY\n";
                           else if (CIAO::DAnCE::VIDEO == conn_qos.data_qos)
                              std::cerr << "DataTrafficQoS = NetworkQoS::VIDEO\n";
                           else if (CIAO::DAnCE::VOICE == conn_qos.data_qos)
                              std::cerr << "DataTrafficQoS = NetworkQoS::VOICE\n";
                           else if (CIAO::DAnCE::BEST_EFFORT == conn_qos.data_qos)
                              std::cerr << "DataTrafficQoS = NetworkQoS::BEST_EFFORT\n";

                           if (CIAO::DAnCE::NORMAL == conn_qos.priority)
                              std::cerr << "Priority = NORMAL\n";
                           else if (CIAO::DAnCE::HIGH == conn_qos.priority)
                              std::cerr << "Priority = HIGH\n";
                           else if (CIAO::DAnCE::LOW == conn_qos.priority)
                              std::cerr << "Priority = LOW\n";
                         }
                    }
                 }
              }
          }
        return true;
      }

      ::CORBA::Boolean
      Planner_I_exec_i::process_domain_change (
        const ::CIAO::RACE::Planner_I::Domain_Changes & /* changes */,
        ::CIAO::RACE::Plan_Actions_out /* plans */
        ACE_ENV_ARG_DECL_NOT_USED)
      ACE_THROW_SPEC (( ::CORBA::SystemException,
                       ::CIAO::RACE::PlannerFailure))
      {
        // Your code here.
        return true;
      }

      char *
      Planner_I_exec_i::name (
        ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
      ACE_THROW_SPEC (( ::CORBA::SystemException))
      {
        // Your code here.
        ACE_DEBUG ((LM_DEBUG, "NetQoSPlanner::Planner_I_exec_i::name()\n"));
        return CORBA::string_dup ("NetQoSPlanner");
      }

      //==================================================================
      // Component Executor Implementation Class:   NetQosPlanner_exec_i
      //==================================================================

      NetQosPlanner_exec_i::NetQosPlanner_exec_i (void)
      {
      }

      NetQosPlanner_exec_i::~NetQosPlanner_exec_i (void)
      {
      }

      // Supported or inherited operations.

      // Attribute operations.

      char *
      NetQosPlanner_exec_i::name (
        ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
      ACE_THROW_SPEC (( ::CORBA::SystemException))
      {
        ACE_DEBUG ((LM_DEBUG, "NetQoSPlanner_exec_i::name()\n"));
        return CORBA::string_dup ("NetQoSPlanner");
        // Your code here.
        //return 0;
      }

      void
      NetQosPlanner_exec_i::name (
        const char * /* name */
        ACE_ENV_ARG_DECL_NOT_USED)
      ACE_THROW_SPEC (( ::CORBA::SystemException))
      {
        // Your code here.
      }

      char *
      NetQosPlanner_exec_i::type (
        ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
      ACE_THROW_SPEC (( ::CORBA::SystemException))
      {
        ACE_DEBUG ((LM_DEBUG, "NetQoSPlanner_exec_i::type()\n"));
        return CORBA::string_dup ("Network QoS Planner");
        // Your code here.
        //return 0;
      }

      void
      NetQosPlanner_exec_i::type (
        const char * /* type */
        ACE_ENV_ARG_DECL_NOT_USED)
      ACE_THROW_SPEC (( ::CORBA::SystemException))
      {
        // Your code here.
      }

      // Port operations.

      ::CIAO::RACE::CCM_Planner_I_ptr
      NetQosPlanner_exec_i::get_planner_i (
        ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
      ACE_THROW_SPEC (( ::CORBA::SystemException))
      {
        // Your code here.
        return new Planner_I_exec_i ();
        //return ::CIAO::RACE::CCM_Planner_I::_nil ();
      }

      // Operations from Components::SessionComponent

      void
      NetQosPlanner_exec_i::set_session_context (
        ::Components::SessionContext_ptr ctx
        ACE_ENV_ARG_DECL)
      ACE_THROW_SPEC (( ::CORBA::SystemException,
                       ::Components::CCMException))
      {
        this->context_ =
          NetQosPlanner_Context::_narrow (
            ctx
            ACE_ENV_ARG_PARAMETER);
        ACE_CHECK;

        if (this->context_ == 0)
        {
          ACE_THROW ( ::CORBA::INTERNAL ());
        }
      }

      void
      NetQosPlanner_exec_i::ciao_preactivate (
        ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
      ACE_THROW_SPEC (( ::CORBA::SystemException,
                       ::Components::CCMException))
      {
        // Your code here.
      }

      void
      NetQosPlanner_exec_i::ciao_postactivate (
        ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
      ACE_THROW_SPEC (( ::CORBA::SystemException,
                       ::Components::CCMException))
      {
        // Your code here.
      }

      void
      NetQosPlanner_exec_i::ccm_activate (
        ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
      ACE_THROW_SPEC (( ::CORBA::SystemException,
                       ::Components::CCMException))
      {
        // Your code here.
      }

      void
      NetQosPlanner_exec_i::ccm_passivate (
        ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
      ACE_THROW_SPEC (( ::CORBA::SystemException,
                       ::Components::CCMException))
      {
        // Your code here.
      }

      void
      NetQosPlanner_exec_i::ccm_remove (
        ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
      ACE_THROW_SPEC (( ::CORBA::SystemException,
                       ::Components::CCMException))
      {
        // Your code here.
      }

      //==================================================================
      // Home Executor Implementation Class:   NetQoSPlanner_Home_exec_i
      //==================================================================

      NetQoSPlanner_Home_exec_i::NetQoSPlanner_Home_exec_i (void)
      {
      }

      NetQoSPlanner_Home_exec_i::~NetQoSPlanner_Home_exec_i (void)
      {
      }

      // Supported or inherited operations.

      // Home operations.

      // Factory and finder operations.

      // Attribute operations.

      // Implicit operations.

      ::Components::EnterpriseComponent_ptr
      NetQoSPlanner_Home_exec_i::create (
        ACE_ENV_SINGLE_ARG_DECL)
      ACE_THROW_SPEC (( ::CORBA::SystemException,
                       ::Components::CCMException))
      {
        ::Components::EnterpriseComponent_ptr retval =
          ::Components::EnterpriseComponent::_nil ();

        ACE_NEW_THROW_EX (
          retval,
          NetQosPlanner_exec_i,
          ::CORBA::NO_MEMORY ());
        ACE_CHECK_RETURN (::Components::EnterpriseComponent::_nil ());

        return retval;
      }

      extern "C" NETQOSPLANNER_EXEC_Export ::Components::HomeExecutorBase_ptr
      create_CIAO_RACE_NetQoSPlanner_Home_Impl (void)
      {
        ::Components::HomeExecutorBase_ptr retval =
          ::Components::HomeExecutorBase::_nil ();

        ACE_NEW_RETURN (
          retval,
          NetQoSPlanner_Home_exec_i,
          ::Components::HomeExecutorBase::_nil ());

        return retval;
      }
    }
  }
}

