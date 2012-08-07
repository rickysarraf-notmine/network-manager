


/* Generated by glib-mkenums. Do not edit */

#include "nm-enum-types.h"

#include "nm-ip4-config.h" 
#include "nm-device-olpc-mesh.h" 
#include "nm-hostname-provider.h" 
#include "nm-device.h" 
#include "nm-rfkill.h" 
#include "NetworkManagerUtils.h" 
#include "nm-device-vlan.h" 
#include "nm-device-factory.h" 
#include "nm-active-connection.h" 
#include "nm-wifi-ap.h" 
#include "nm-device-bt.h" 
#include "nm-device-private.h" 
#include "nm-device-wifi.h" 
#include "nm-dbus-manager.h" 
#include "nm-dhcp4-config.h" 
#include "nm-dhcp6-config.h" 
#include "nm-netlink-compat.h" 
#include "nm-session-monitor.h" 
#include "nm-device-bond.h" 
#include "nm-wifi-ap-utils.h" 
#include "nm-device-adsl.h" 
#include "nm-policy-hosts.h" 
#include "nm-udev-manager.h" 
#include "nm-connection-provider.h" 
#include "nm-manager.h" 
#include "nm-device-modem.h" 
#include "nm-device-wired.h" 
#include "nm-activation-request.h" 
#include "nm-session-utils.h" 
#include "nm-policy-hostname.h" 
#include "nm-device-infiniband.h" 
#include "nm-properties-changed-signal.h" 
#include "nm-ip6-config.h" 
#include "nm-call-store.h" 
#include "nm-policy.h" 
#include "nm-manager-auth.h" 
#include "nm-config.h" 
#include "nm-netlink-utils.h" 
#include "nm-netlink-monitor.h" 
#include "nm-system.h" 
#include "nm-connectivity.h" 
#include "nm-device-ethernet.h" 
#include "nm-logging.h" 
#include "nm-dns-utils.h" 
#include "nm-dns-plugin.h" 
#include "nm-dns-manager.h" 
#include "nm-dns-bind.h" 
#include "nm-dns-dnsmasq.h" 
#include "nm-vpn-manager.h" 
#include "nm-vpn-service.h" 
#include "nm-vpn-connection.h" 
#include "nm-dhcp-dhcpcd.h" 
#include "nm-dhcp-dhclient.h" 
#include "nm-dhcp-manager.h" 
#include "nm-dhcp-client.h" 
#include "nm-dhcp-dhclient-utils.h" 
#include "nm-ip6-manager.h" 
#include "nm-supplicant-types.h" 
#include "nm-supplicant-config.h" 
#include "nm-supplicant-settings-verify.h" 
#include "nm-supplicant-manager.h" 
#include "nm-supplicant-interface.h" 
#include "nm-backend.h" 
#include "NetworkManagerGeneric.h" 
#include "nm-ppp-status.h" 
#include "nm-pppd-plugin.h" 
#include "nm-ppp-manager.h" 
#include "nm-dnsmasq-manager.h" 
#include "nm-modem.h" 
#include "nm-modem-cdma.h" 
#include "nm-modem-types.h" 
#include "nm-modem-gsm.h" 
#include "nm-modem-manager.h" 
#include "nm-bluez-device.h" 
#include "nm-bluez-manager.h" 
#include "nm-bluez-adapter.h" 
#include "nm-bluez-common.h" 
#include "nm-firewall-manager.h" 
#include "nm-settings.h" 
#include "nm-settings-connection.h" 
#include "nm-default-wired-connection.h" 
#include "nm-system-config-interface.h" 
#include "nm-settings-utils.h" 
#include "nm-settings-error.h" 
#include "nm-agent-manager.h" 
#include "nm-inotify-helper.h" 
#include "nm-secret-agent.h" 
#include "nm-device-wimax.h" 
#include "iwmxsdk.h" 
#include "nm-wimax-types.h" 
#include "nm-wimax-util.h" 
#include "nm-wimax-nsp.h"

GType
nm_ip4_config_compare_flags_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_IP4_COMPARE_FLAG_NONE, "NM_IP4_COMPARE_FLAG_NONE", "none" },
        { NM_IP4_COMPARE_FLAG_ADDRESSES, "NM_IP4_COMPARE_FLAG_ADDRESSES", "addresses" },
        { NM_IP4_COMPARE_FLAG_PTP_ADDRESS, "NM_IP4_COMPARE_FLAG_PTP_ADDRESS", "ptp-address" },
        { NM_IP4_COMPARE_FLAG_NAMESERVERS, "NM_IP4_COMPARE_FLAG_NAMESERVERS", "nameservers" },
        { NM_IP4_COMPARE_FLAG_ROUTES, "NM_IP4_COMPARE_FLAG_ROUTES", "routes" },
        { NM_IP4_COMPARE_FLAG_DOMAINS, "NM_IP4_COMPARE_FLAG_DOMAINS", "domains" },
        { NM_IP4_COMPARE_FLAG_SEARCHES, "NM_IP4_COMPARE_FLAG_SEARCHES", "searches" },
        { NM_IP4_COMPARE_FLAG_MTU, "NM_IP4_COMPARE_FLAG_MTU", "mtu" },
        { NM_IP4_COMPARE_FLAG_MSS, "NM_IP4_COMPARE_FLAG_MSS", "mss" },
        { NM_IP4_COMPARE_FLAG_WINS_SERVERS, "NM_IP4_COMPARE_FLAG_WINS_SERVERS", "wins-servers" },
        { NM_IP4_COMPARE_FLAG_NIS_SERVERS, "NM_IP4_COMPARE_FLAG_NIS_SERVERS", "nis-servers" },
        { NM_IP4_COMPARE_FLAG_NIS_DOMAIN, "NM_IP4_COMPARE_FLAG_NIS_DOMAIN", "nis-domain" },
        { NM_IP4_COMPARE_FLAG_ALL, "NM_IP4_COMPARE_FLAG_ALL", "all" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMIP4ConfigCompareFlags"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_olpc_mesh_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_OLPC_MESH_ERROR_CONNECTION_NOT_MESH, "NM_OLPC_MESH_ERROR_CONNECTION_NOT_MESH", "ConnectionNotMesh" },
        { NM_OLPC_MESH_ERROR_CONNECTION_INVALID, "NM_OLPC_MESH_ERROR_CONNECTION_INVALID", "ConnectionInvalid" },
        { NM_OLPC_MESH_ERROR_CONNECTION_INCOMPATIBLE, "NM_OLPC_MESH_ERROR_CONNECTION_INCOMPATIBLE", "ConnectionIncompatible" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMOlpcMeshError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_device_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_DEVICE_ERROR_CONNECTION_ACTIVATING, "NM_DEVICE_ERROR_CONNECTION_ACTIVATING", "ConnectionActivating" },
        { NM_DEVICE_ERROR_CONNECTION_INVALID, "NM_DEVICE_ERROR_CONNECTION_INVALID", "ConnectionInvalid" },
        { NM_DEVICE_ERROR_NOT_ACTIVE, "NM_DEVICE_ERROR_NOT_ACTIVE", "NotActive" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMDeviceError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_rf_kill_state_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { RFKILL_UNBLOCKED, "RFKILL_UNBLOCKED", "unblocked" },
        { RFKILL_SOFT_BLOCKED, "RFKILL_SOFT_BLOCKED", "soft-blocked" },
        { RFKILL_HARD_BLOCKED, "RFKILL_HARD_BLOCKED", "hard-blocked" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("RfKillState"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_rf_kill_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { RFKILL_TYPE_WLAN, "RFKILL_TYPE_WLAN", "wlan" },
        { RFKILL_TYPE_WWAN, "RFKILL_TYPE_WWAN", "wwan" },
        { RFKILL_TYPE_WIMAX, "RFKILL_TYPE_WIMAX", "wimax" },
        { RFKILL_TYPE_UNKNOWN, "RFKILL_TYPE_UNKNOWN", "unknown" },
        { RFKILL_TYPE_MAX, "RFKILL_TYPE_MAX", "max" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("RfKillType"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_vlan_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_VLAN_ERROR_CONNECTION_NOT_VLAN, "NM_VLAN_ERROR_CONNECTION_NOT_VLAN", "ConnectionNotVlan" },
        { NM_VLAN_ERROR_CONNECTION_INVALID, "NM_VLAN_ERROR_CONNECTION_INVALID", "ConnectionInvalid" },
        { NM_VLAN_ERROR_CONNECTION_INCOMPATIBLE, "NM_VLAN_ERROR_CONNECTION_INCOMPATIBLE", "ConnectionIncompatible" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMVlanError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_bt_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_BT_ERROR_CONNECTION_NOT_BT, "NM_BT_ERROR_CONNECTION_NOT_BT", "ConnectionNotBt" },
        { NM_BT_ERROR_CONNECTION_INVALID, "NM_BT_ERROR_CONNECTION_INVALID", "ConnectionInvalid" },
        { NM_BT_ERROR_CONNECTION_INCOMPATIBLE, "NM_BT_ERROR_CONNECTION_INCOMPATIBLE", "ConnectionIncompatible" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMBtError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_wifi_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_WIFI_ERROR_CONNECTION_NOT_WIRELESS, "NM_WIFI_ERROR_CONNECTION_NOT_WIRELESS", "ConnectionNotWireless" },
        { NM_WIFI_ERROR_CONNECTION_INVALID, "NM_WIFI_ERROR_CONNECTION_INVALID", "ConnectionInvalid" },
        { NM_WIFI_ERROR_CONNECTION_INCOMPATIBLE, "NM_WIFI_ERROR_CONNECTION_INCOMPATIBLE", "ConnectionIncompatible" },
        { NM_WIFI_ERROR_ACCESS_POINT_NOT_FOUND, "NM_WIFI_ERROR_ACCESS_POINT_NOT_FOUND", "AccessPointNotFound" },
        { NM_WIFI_ERROR_SCAN_NOT_ALLOWED, "NM_WIFI_ERROR_SCAN_NOT_ALLOWED", "ScanNotAllowed" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMWifiError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_bond_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_BOND_ERROR_CONNECTION_NOT_BOND, "NM_BOND_ERROR_CONNECTION_NOT_BOND", "ConnectionNotBond" },
        { NM_BOND_ERROR_CONNECTION_INVALID, "NM_BOND_ERROR_CONNECTION_INVALID", "ConnectionInvalid" },
        { NM_BOND_ERROR_CONNECTION_INCOMPATIBLE, "NM_BOND_ERROR_CONNECTION_INCOMPATIBLE", "ConnectionIncompatible" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMBondError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_adsl_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_ADSL_ERROR_CONNECTION_NOT_ADSL, "NM_ADSL_ERROR_CONNECTION_NOT_ADSL", "ConnectionNotAdsl" },
        { NM_ADSL_ERROR_CONNECTION_INVALID, "NM_ADSL_ERROR_CONNECTION_INVALID", "ConnectionInvalid" },
        { NM_ADSL_ERROR_CONNECTION_INCOMPATIBLE, "NM_ADSL_ERROR_CONNECTION_INCOMPATIBLE", "ConnectionIncompatible" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMAdslError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_manager_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_MANAGER_ERROR_UNKNOWN_CONNECTION, "NM_MANAGER_ERROR_UNKNOWN_CONNECTION", "UnknownConnection" },
        { NM_MANAGER_ERROR_UNKNOWN_DEVICE, "NM_MANAGER_ERROR_UNKNOWN_DEVICE", "UnknownDevice" },
        { NM_MANAGER_ERROR_UNMANAGED_DEVICE, "NM_MANAGER_ERROR_UNMANAGED_DEVICE", "UnmanagedDevice" },
        { NM_MANAGER_ERROR_SYSTEM_CONNECTION, "NM_MANAGER_ERROR_SYSTEM_CONNECTION", "SystemConnection" },
        { NM_MANAGER_ERROR_PERMISSION_DENIED, "NM_MANAGER_ERROR_PERMISSION_DENIED", "PermissionDenied" },
        { NM_MANAGER_ERROR_CONNECTION_NOT_ACTIVE, "NM_MANAGER_ERROR_CONNECTION_NOT_ACTIVE", "ConnectionNotActive" },
        { NM_MANAGER_ERROR_ALREADY_ASLEEP_OR_AWAKE, "NM_MANAGER_ERROR_ALREADY_ASLEEP_OR_AWAKE", "AlreadyAsleepOrAwake" },
        { NM_MANAGER_ERROR_ALREADY_ENABLED_OR_DISABLED, "NM_MANAGER_ERROR_ALREADY_ENABLED_OR_DISABLED", "AlreadyEnabledOrDisabled" },
        { NM_MANAGER_ERROR_UNSUPPORTED_CONNECTION_TYPE, "NM_MANAGER_ERROR_UNSUPPORTED_CONNECTION_TYPE", "UnsupportedConnectionType" },
        { NM_MANAGER_ERROR_DEPENDENCY_FAILED, "NM_MANAGER_ERROR_DEPENDENCY_FAILED", "DependencyFailed" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMManagerError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_act_request_dependency_result_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_ACT_REQUEST_DEP_RESULT_UNKNOWN, "NM_ACT_REQUEST_DEP_RESULT_UNKNOWN", "unknown" },
        { NM_ACT_REQUEST_DEP_RESULT_WAIT, "NM_ACT_REQUEST_DEP_RESULT_WAIT", "wait" },
        { NM_ACT_REQUEST_DEP_RESULT_READY, "NM_ACT_REQUEST_DEP_RESULT_READY", "ready" },
        { NM_ACT_REQUEST_DEP_RESULT_FAILED, "NM_ACT_REQUEST_DEP_RESULT_FAILED", "failed" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMActRequestDependencyResult"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_session_monitor_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_SESSION_MONITOR_ERROR_IO_ERROR, "NM_SESSION_MONITOR_ERROR_IO_ERROR", "IOError" },
        { NM_SESSION_MONITOR_ERROR_MALFORMED_DATABASE, "NM_SESSION_MONITOR_ERROR_MALFORMED_DATABASE", "MalformedDatabase" },
        { NM_SESSION_MONITOR_ERROR_UNKNOWN_USER, "NM_SESSION_MONITOR_ERROR_UNKNOWN_USER", "UnknownUser" },
        { NM_SESSION_MONITOR_ERROR_NO_DATABASE, "NM_SESSION_MONITOR_ERROR_NO_DATABASE", "NoDatabase" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMSessionMonitorError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_infiniband_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_INFINIBAND_ERROR_CONNECTION_NOT_INFINIBAND, "NM_INFINIBAND_ERROR_CONNECTION_NOT_INFINIBAND", "ConnectionNotInfiniband" },
        { NM_INFINIBAND_ERROR_CONNECTION_INVALID, "NM_INFINIBAND_ERROR_CONNECTION_INVALID", "ConnectionInvalid" },
        { NM_INFINIBAND_ERROR_CONNECTION_INCOMPATIBLE, "NM_INFINIBAND_ERROR_CONNECTION_INCOMPATIBLE", "ConnectionIncompatible" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMInfinibandError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_ip6_config_compare_flags_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_IP6_COMPARE_FLAG_NONE, "NM_IP6_COMPARE_FLAG_NONE", "none" },
        { NM_IP6_COMPARE_FLAG_ADDRESSES, "NM_IP6_COMPARE_FLAG_ADDRESSES", "addresses" },
        { NM_IP6_COMPARE_FLAG_PTP_ADDRESS, "NM_IP6_COMPARE_FLAG_PTP_ADDRESS", "ptp-address" },
        { NM_IP6_COMPARE_FLAG_NAMESERVERS, "NM_IP6_COMPARE_FLAG_NAMESERVERS", "nameservers" },
        { NM_IP6_COMPARE_FLAG_ROUTES, "NM_IP6_COMPARE_FLAG_ROUTES", "routes" },
        { NM_IP6_COMPARE_FLAG_DOMAINS, "NM_IP6_COMPARE_FLAG_DOMAINS", "domains" },
        { NM_IP6_COMPARE_FLAG_SEARCHES, "NM_IP6_COMPARE_FLAG_SEARCHES", "searches" },
        { NM_IP6_COMPARE_FLAG_MSS, "NM_IP6_COMPARE_FLAG_MSS", "mss" },
        { NM_IP6_COMPARE_FLAG_ALL, "NM_IP6_COMPARE_FLAG_ALL", "all" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMIP6ConfigCompareFlags"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_auth_call_result_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_AUTH_CALL_RESULT_UNKNOWN, "NM_AUTH_CALL_RESULT_UNKNOWN", "unknown" },
        { NM_AUTH_CALL_RESULT_YES, "NM_AUTH_CALL_RESULT_YES", "yes" },
        { NM_AUTH_CALL_RESULT_AUTH, "NM_AUTH_CALL_RESULT_AUTH", "auth" },
        { NM_AUTH_CALL_RESULT_NO, "NM_AUTH_CALL_RESULT_NO", "no" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMAuthCallResult"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_config_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_CONFIG_ERROR_NO_MEMORY, "NM_CONFIG_ERROR_NO_MEMORY", "NoMemory" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMConfigError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_nm_nl_prop_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NMNL_PROP_INVALID, "NMNL_PROP_INVALID", "invalid" },
        { NMNL_PROP_PROT, "NMNL_PROP_PROT", "prot" },
        { NMNL_PROP_SCOPE, "NMNL_PROP_SCOPE", "scope" },
        { NMNL_PROP_TABLE, "NMNL_PROP_TABLE", "table" },
        { NMNL_PROP_PRIO, "NMNL_PROP_PRIO", "prio" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NmNlProp"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_netlink_monitor_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_NETLINK_MONITOR_ERROR_GENERIC, "NM_NETLINK_MONITOR_ERROR_GENERIC", "generic" },
        { NM_NETLINK_MONITOR_ERROR_NETLINK_ALLOC_HANDLE, "NM_NETLINK_MONITOR_ERROR_NETLINK_ALLOC_HANDLE", "netlink-alloc-handle" },
        { NM_NETLINK_MONITOR_ERROR_NETLINK_CONNECT, "NM_NETLINK_MONITOR_ERROR_NETLINK_CONNECT", "netlink-connect" },
        { NM_NETLINK_MONITOR_ERROR_NETLINK_JOIN_GROUP, "NM_NETLINK_MONITOR_ERROR_NETLINK_JOIN_GROUP", "netlink-join-group" },
        { NM_NETLINK_MONITOR_ERROR_NETLINK_ALLOC_LINK_CACHE, "NM_NETLINK_MONITOR_ERROR_NETLINK_ALLOC_LINK_CACHE", "netlink-alloc-link-cache" },
        { NM_NETLINK_MONITOR_ERROR_PROCESSING_MESSAGE, "NM_NETLINK_MONITOR_ERROR_PROCESSING_MESSAGE", "processing-message" },
        { NM_NETLINK_MONITOR_ERROR_BAD_ALLOC, "NM_NETLINK_MONITOR_ERROR_BAD_ALLOC", "bad-alloc" },
        { NM_NETLINK_MONITOR_ERROR_WAITING_FOR_SOCKET_DATA, "NM_NETLINK_MONITOR_ERROR_WAITING_FOR_SOCKET_DATA", "waiting-for-socket-data" },
        { NM_NETLINK_MONITOR_ERROR_LINK_CACHE_UPDATE, "NM_NETLINK_MONITOR_ERROR_LINK_CACHE_UPDATE", "link-cache-update" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMNetlinkMonitorError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_ethernet_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_ETHERNET_ERROR_CONNECTION_NOT_WIRED, "NM_ETHERNET_ERROR_CONNECTION_NOT_WIRED", "ConnectionNotWired" },
        { NM_ETHERNET_ERROR_CONNECTION_INVALID, "NM_ETHERNET_ERROR_CONNECTION_INVALID", "ConnectionInvalid" },
        { NM_ETHERNET_ERROR_CONNECTION_INCOMPATIBLE, "NM_ETHERNET_ERROR_CONNECTION_INCOMPATIBLE", "ConnectionIncompatible" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMEthernetError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_logging_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_LOGGING_ERROR_UNKNOWN_LEVEL, "NM_LOGGING_ERROR_UNKNOWN_LEVEL", "UnknownLevel" },
        { NM_LOGGING_ERROR_UNKNOWN_DOMAIN, "NM_LOGGING_ERROR_UNKNOWN_DOMAIN", "UnknownDomain" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMLoggingError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_dns_manager_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_DNS_MANAGER_ERROR_SYSTEM, "NM_DNS_MANAGER_ERROR_SYSTEM", "system" },
        { NM_DNS_MANAGER_ERROR_INVALID_NAMESERVER, "NM_DNS_MANAGER_ERROR_INVALID_NAMESERVER", "invalid-nameserver" },
        { NM_DNS_MANAGER_ERROR_INVALID_HOST, "NM_DNS_MANAGER_ERROR_INVALID_HOST", "invalid-host" },
        { NM_DNS_MANAGER_ERROR_INVALID_ID, "NM_DNS_MANAGER_ERROR_INVALID_ID", "invalid-id" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMDnsManagerError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_dns_ip_config_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_DNS_IP_CONFIG_TYPE_DEFAULT, "NM_DNS_IP_CONFIG_TYPE_DEFAULT", "default" },
        { NM_DNS_IP_CONFIG_TYPE_BEST_DEVICE, "NM_DNS_IP_CONFIG_TYPE_BEST_DEVICE", "best-device" },
        { NM_DNS_IP_CONFIG_TYPE_VPN, "NM_DNS_IP_CONFIG_TYPE_VPN", "vpn" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMDnsIPConfigType"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_vpn_manager_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_VPN_MANAGER_ERROR_DEVICE_NOT_ACTIVE, "NM_VPN_MANAGER_ERROR_DEVICE_NOT_ACTIVE", "BaseDeviceNotActive" },
        { NM_VPN_MANAGER_ERROR_CONNECTION_INVALID, "NM_VPN_MANAGER_ERROR_CONNECTION_INVALID", "ConnectionInvalid" },
        { NM_VPN_MANAGER_ERROR_SERVICE_INVALID, "NM_VPN_MANAGER_ERROR_SERVICE_INVALID", "ServiceInvalid" },
        { NM_VPN_MANAGER_ERROR_SERVICE_START_FAILED, "NM_VPN_MANAGER_ERROR_SERVICE_START_FAILED", "ServiceStartFailed" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMVPNManagerError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_dhcp_manager_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_DHCP_MANAGER_ERROR_BAD_CLIENT, "NM_DHCP_MANAGER_ERROR_BAD_CLIENT", "BadClient" },
        { NM_DHCP_MANAGER_ERROR_INTERNAL, "NM_DHCP_MANAGER_ERROR_INTERNAL", "InternalError" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMDHCPManagerError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_dhcp_state_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { DHC_NBI, "DHC_NBI", "nbi" },
        { DHC_PREINIT, "DHC_PREINIT", "preinit" },
        { DHC_PREINIT6, "DHC_PREINIT6", "preinit6" },
        { DHC_BOUND4, "DHC_BOUND4", "bound4" },
        { DHC_BOUND6, "DHC_BOUND6", "bound6" },
        { DHC_IPV4LL, "DHC_IPV4LL", "ipv4ll" },
        { DHC_RENEW4, "DHC_RENEW4", "renew4" },
        { DHC_RENEW6, "DHC_RENEW6", "renew6" },
        { DHC_REBOOT, "DHC_REBOOT", "reboot" },
        { DHC_REBIND4, "DHC_REBIND4", "rebind4" },
        { DHC_REBIND6, "DHC_REBIND6", "rebind6" },
        { DHC_DEPREF6, "DHC_DEPREF6", "depref6" },
        { DHC_STOP, "DHC_STOP", "stop" },
        { DHC_STOP6, "DHC_STOP6", "stop6" },
        { DHC_MEDIUM, "DHC_MEDIUM", "medium" },
        { DHC_TIMEOUT, "DHC_TIMEOUT", "timeout" },
        { DHC_FAIL, "DHC_FAIL", "fail" },
        { DHC_EXPIRE, "DHC_EXPIRE", "expire" },
        { DHC_EXPIRE6, "DHC_EXPIRE6", "expire6" },
        { DHC_RELEASE, "DHC_RELEASE", "release" },
        { DHC_RELEASE6, "DHC_RELEASE6", "release6" },
        { DHC_START, "DHC_START", "start" },
        { DHC_ABEND, "DHC_ABEND", "abend" },
        { DHC_END, "DHC_END", "end" },
        { DHC_END_OPTIONS, "DHC_END_OPTIONS", "end-options" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMDHCPState"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_opt_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { TYPE_INVALID, "TYPE_INVALID", "invalid" },
        { TYPE_INT, "TYPE_INT", "int" },
        { TYPE_BYTES, "TYPE_BYTES", "bytes" },
        { TYPE_UTF8, "TYPE_UTF8", "utf8" },
        { TYPE_KEYWORD, "TYPE_KEYWORD", "keyword" },
        { TYPE_STRING, "TYPE_STRING", "string" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("OptType"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_ppp_status_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_PPP_STATUS_UNKNOWN, "NM_PPP_STATUS_UNKNOWN", "unknown" },
        { NM_PPP_STATUS_DEAD, "NM_PPP_STATUS_DEAD", "dead" },
        { NM_PPP_STATUS_INITIALIZE, "NM_PPP_STATUS_INITIALIZE", "initialize" },
        { NM_PPP_STATUS_SERIALCONN, "NM_PPP_STATUS_SERIALCONN", "serialconn" },
        { NM_PPP_STATUS_DORMANT, "NM_PPP_STATUS_DORMANT", "dormant" },
        { NM_PPP_STATUS_ESTABLISH, "NM_PPP_STATUS_ESTABLISH", "establish" },
        { NM_PPP_STATUS_AUTHENTICATE, "NM_PPP_STATUS_AUTHENTICATE", "authenticate" },
        { NM_PPP_STATUS_CALLBACK, "NM_PPP_STATUS_CALLBACK", "callback" },
        { NM_PPP_STATUS_NETWORK, "NM_PPP_STATUS_NETWORK", "network" },
        { NM_PPP_STATUS_RUNNING, "NM_PPP_STATUS_RUNNING", "running" },
        { NM_PPP_STATUS_TERMINATE, "NM_PPP_STATUS_TERMINATE", "terminate" },
        { NM_PPP_STATUS_DISCONNECT, "NM_PPP_STATUS_DISCONNECT", "disconnect" },
        { NM_PPP_STATUS_HOLDOFF, "NM_PPP_STATUS_HOLDOFF", "holdoff" },
        { NM_PPP_STATUS_MASTER, "NM_PPP_STATUS_MASTER", "master" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMPPPStatus"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_dns_masq_status_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_DNSMASQ_STATUS_UNKNOWN, "NM_DNSMASQ_STATUS_UNKNOWN", "unknown" },
        { NM_DNSMASQ_STATUS_DEAD, "NM_DNSMASQ_STATUS_DEAD", "dead" },
        { NM_DNSMASQ_STATUS_RUNNING, "NM_DNSMASQ_STATUS_RUNNING", "running" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMDnsMasqStatus"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_cdma_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_CDMA_ERROR_CONNECTION_NOT_CDMA, "NM_CDMA_ERROR_CONNECTION_NOT_CDMA", "ConnectionNotCdma" },
        { NM_CDMA_ERROR_CONNECTION_INVALID, "NM_CDMA_ERROR_CONNECTION_INVALID", "ConnectionInvalid" },
        { NM_CDMA_ERROR_CONNECTION_INCOMPATIBLE, "NM_CDMA_ERROR_CONNECTION_INCOMPATIBLE", "ConnectionIncompatible" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMCdmaError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_gsm_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_GSM_ERROR_CONNECTION_NOT_GSM, "NM_GSM_ERROR_CONNECTION_NOT_GSM", "ConnectionNotGsm" },
        { NM_GSM_ERROR_CONNECTION_INVALID, "NM_GSM_ERROR_CONNECTION_INVALID", "ConnectionInvalid" },
        { NM_GSM_ERROR_CONNECTION_INCOMPATIBLE, "NM_GSM_ERROR_CONNECTION_INCOMPATIBLE", "ConnectionIncompatible" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMGsmError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_system_config_interface_capabilities_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_SYSTEM_CONFIG_INTERFACE_CAP_NONE, "NM_SYSTEM_CONFIG_INTERFACE_CAP_NONE", "none" },
        { NM_SYSTEM_CONFIG_INTERFACE_CAP_MODIFY_CONNECTIONS, "NM_SYSTEM_CONFIG_INTERFACE_CAP_MODIFY_CONNECTIONS", "modify-connections" },
        { NM_SYSTEM_CONFIG_INTERFACE_CAP_MODIFY_HOSTNAME, "NM_SYSTEM_CONFIG_INTERFACE_CAP_MODIFY_HOSTNAME", "modify-hostname" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMSystemConfigInterfaceCapabilities"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_system_config_interface_prop_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_SYSTEM_CONFIG_INTERFACE_PROP_FIRST, "NM_SYSTEM_CONFIG_INTERFACE_PROP_FIRST", "first" },
        { NM_SYSTEM_CONFIG_INTERFACE_PROP_NAME, "NM_SYSTEM_CONFIG_INTERFACE_PROP_NAME", "name" },
        { NM_SYSTEM_CONFIG_INTERFACE_PROP_INFO, "NM_SYSTEM_CONFIG_INTERFACE_PROP_INFO", "info" },
        { NM_SYSTEM_CONFIG_INTERFACE_PROP_CAPABILITIES, "NM_SYSTEM_CONFIG_INTERFACE_PROP_CAPABILITIES", "capabilities" },
        { NM_SYSTEM_CONFIG_INTERFACE_PROP_HOSTNAME, "NM_SYSTEM_CONFIG_INTERFACE_PROP_HOSTNAME", "hostname" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMSystemConfigInterfaceProp"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_settings_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_SETTINGS_ERROR_GENERAL, "NM_SETTINGS_ERROR_GENERAL", "GeneralError" },
        { NM_SETTINGS_ERROR_INVALID_CONNECTION, "NM_SETTINGS_ERROR_INVALID_CONNECTION", "InvalidConnection" },
        { NM_SETTINGS_ERROR_READ_ONLY_CONNECTION, "NM_SETTINGS_ERROR_READ_ONLY_CONNECTION", "ReadOnlyConnection" },
        { NM_SETTINGS_ERROR_INTERNAL_ERROR, "NM_SETTINGS_ERROR_INTERNAL_ERROR", "InternalError" },
        { NM_SETTINGS_ERROR_SECRETS_UNAVAILABLE, "NM_SETTINGS_ERROR_SECRETS_UNAVAILABLE", "SecretsUnavailable" },
        { NM_SETTINGS_ERROR_SECRETS_REQUEST_CANCELED, "NM_SETTINGS_ERROR_SECRETS_REQUEST_CANCELED", "SecretsRequestCanceled" },
        { NM_SETTINGS_ERROR_PERMISSION_DENIED, "NM_SETTINGS_ERROR_PERMISSION_DENIED", "PermissionDenied" },
        { NM_SETTINGS_ERROR_INVALID_SETTING, "NM_SETTINGS_ERROR_INVALID_SETTING", "InvalidSetting" },
        { NM_SETTINGS_ERROR_NOT_PRIVILEGED, "NM_SETTINGS_ERROR_NOT_PRIVILEGED", "NotPrivileged" },
        { NM_SETTINGS_ERROR_ADD_NOT_SUPPORTED, "NM_SETTINGS_ERROR_ADD_NOT_SUPPORTED", "AddNotSupported" },
        { NM_SETTINGS_ERROR_UPDATE_NOT_SUPPORTED, "NM_SETTINGS_ERROR_UPDATE_NOT_SUPPORTED", "UpdateNotSupported" },
        { NM_SETTINGS_ERROR_DELETE_NOT_SUPPORTED, "NM_SETTINGS_ERROR_DELETE_NOT_SUPPORTED", "DeleteNotSupported" },
        { NM_SETTINGS_ERROR_ADD_FAILED, "NM_SETTINGS_ERROR_ADD_FAILED", "AddFailed" },
        { NM_SETTINGS_ERROR_SAVE_HOSTNAME_NOT_SUPPORTED, "NM_SETTINGS_ERROR_SAVE_HOSTNAME_NOT_SUPPORTED", "SaveHostnameNotSupported" },
        { NM_SETTINGS_ERROR_SAVE_HOSTNAME_FAILED, "NM_SETTINGS_ERROR_SAVE_HOSTNAME_FAILED", "SaveHostnameFailed" },
        { NM_SETTINGS_ERROR_UUID_EXISTS, "NM_SETTINGS_ERROR_UUID_EXISTS", "UuidExists" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMSettingsError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_agent_manager_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_AGENT_MANAGER_ERROR_SENDER_UNKNOWN, "NM_AGENT_MANAGER_ERROR_SENDER_UNKNOWN", "SenderUnknown" },
        { NM_AGENT_MANAGER_ERROR_PERMISSION_DENIED, "NM_AGENT_MANAGER_ERROR_PERMISSION_DENIED", "PermissionDenied" },
        { NM_AGENT_MANAGER_ERROR_SESSION_NOT_FOUND, "NM_AGENT_MANAGER_ERROR_SESSION_NOT_FOUND", "SessionNotFound" },
        { NM_AGENT_MANAGER_ERROR_INVALID_IDENTIFIER, "NM_AGENT_MANAGER_ERROR_INVALID_IDENTIFIER", "InvalidIdentifier" },
        { NM_AGENT_MANAGER_ERROR_NOT_REGISTERED, "NM_AGENT_MANAGER_ERROR_NOT_REGISTERED", "NotRegistered" },
        { NM_AGENT_MANAGER_ERROR_INTERNAL_ERROR, "NM_AGENT_MANAGER_ERROR_INTERNAL_ERROR", "InternalError" },
        { NM_AGENT_MANAGER_ERROR_NO_SECRETS, "NM_AGENT_MANAGER_ERROR_NO_SECRETS", "NoSecrets" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMAgentManagerError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_wimax_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_WIMAX_ERROR_CONNECTION_NOT_WIMAX, "NM_WIMAX_ERROR_CONNECTION_NOT_WIMAX", "ConnectionNotWimax" },
        { NM_WIMAX_ERROR_CONNECTION_INVALID, "NM_WIMAX_ERROR_CONNECTION_INVALID", "ConnectionInvalid" },
        { NM_WIMAX_ERROR_CONNECTION_INCOMPATIBLE, "NM_WIMAX_ERROR_CONNECTION_INCOMPATIBLE", "ConnectionIncompatible" },
        { NM_WIMAX_ERROR_NSP_NOT_FOUND, "NM_WIMAX_ERROR_NSP_NOT_FOUND", "NspNotFound" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMWimaxError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
nm_wimax_nsp_network_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NM_WIMAX_NSP_NETWORK_TYPE_UNKNOWN, "NM_WIMAX_NSP_NETWORK_TYPE_UNKNOWN", "unknown" },
        { NM_WIMAX_NSP_NETWORK_TYPE_HOME, "NM_WIMAX_NSP_NETWORK_TYPE_HOME", "home" },
        { NM_WIMAX_NSP_NETWORK_TYPE_PARTNER, "NM_WIMAX_NSP_NETWORK_TYPE_PARTNER", "partner" },
        { NM_WIMAX_NSP_NETWORK_TYPE_ROAMING_PARTNER, "NM_WIMAX_NSP_NETWORK_TYPE_ROAMING_PARTNER", "roaming-partner" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NMWimaxNspNetworkType"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}


