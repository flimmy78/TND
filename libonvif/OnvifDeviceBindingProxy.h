/* OnvifDeviceBindingProxy.h
   Generated by gSOAP 2.8.0 from onvif.h
   Copyright(C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.
   The generated code is released under one of the following licenses:
   GPL OR Genivia's license for commercial use.
*/

#ifndef OnvifDeviceBindingProxy_H
#define OnvifDeviceBindingProxy_H
#include "OnvifH.h"

class SOAP_CMAC DeviceBindingProxy : public soap
{ public:
	/// Endpoint URL of service 'DeviceBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	DeviceBindingProxy();
	/// Constructor with copy of another engine state
	DeviceBindingProxy(const struct soap&);
	/// Constructor with engine input+output mode control
	DeviceBindingProxy(soap_mode iomode);
	/// Constructor with engine input and output mode control
	DeviceBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~DeviceBindingProxy();
	/// Initializer used by constructors
	virtual	void DeviceBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (uses soap_destroy and soap_end)
	virtual	void destroy();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Force close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
	virtual	void soap_stream_fault(std::ostream&);
	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'GetDeviceInformation' (returns error code or SOAP_OK)
	virtual	int GetDeviceInformation(_tds__GetDeviceInformation *tds__GetDeviceInformation, _tds__GetDeviceInformationResponse *tds__GetDeviceInformationResponse);

	/// Web service operation 'SetSystemDateAndTime' (returns error code or SOAP_OK)
	virtual	int SetSystemDateAndTime(_tds__SetSystemDateAndTime *tds__SetSystemDateAndTime, _tds__SetSystemDateAndTimeResponse *tds__SetSystemDateAndTimeResponse);

	/// Web service operation 'GetSystemDateAndTime' (returns error code or SOAP_OK)
	virtual	int GetSystemDateAndTime(_tds__GetSystemDateAndTime *tds__GetSystemDateAndTime, _tds__GetSystemDateAndTimeResponse *tds__GetSystemDateAndTimeResponse);

	/// Web service operation 'SetSystemFactoryDefault' (returns error code or SOAP_OK)
	virtual	int SetSystemFactoryDefault(_tds__SetSystemFactoryDefault *tds__SetSystemFactoryDefault, _tds__SetSystemFactoryDefaultResponse *tds__SetSystemFactoryDefaultResponse);

	/// Web service operation 'UpgradeSystemFirmware' (returns error code or SOAP_OK)
	virtual	int UpgradeSystemFirmware(_tds__UpgradeSystemFirmware *tds__UpgradeSystemFirmware, _tds__UpgradeSystemFirmwareResponse *tds__UpgradeSystemFirmwareResponse);

	/// Web service operation 'SystemReboot' (returns error code or SOAP_OK)
	virtual	int SystemReboot(_tds__SystemReboot *tds__SystemReboot, _tds__SystemRebootResponse *tds__SystemRebootResponse);

	/// Web service operation 'RestoreSystem' (returns error code or SOAP_OK)
	virtual	int RestoreSystem(_tds__RestoreSystem *tds__RestoreSystem, _tds__RestoreSystemResponse *tds__RestoreSystemResponse);

	/// Web service operation 'GetSystemBackup' (returns error code or SOAP_OK)
	virtual	int GetSystemBackup(_tds__GetSystemBackup *tds__GetSystemBackup, _tds__GetSystemBackupResponse *tds__GetSystemBackupResponse);

	/// Web service operation 'GetSystemLog' (returns error code or SOAP_OK)
	virtual	int GetSystemLog(_tds__GetSystemLog *tds__GetSystemLog, _tds__GetSystemLogResponse *tds__GetSystemLogResponse);

	/// Web service operation 'GetSystemSupportInformation' (returns error code or SOAP_OK)
	virtual	int GetSystemSupportInformation(_tds__GetSystemSupportInformation *tds__GetSystemSupportInformation, _tds__GetSystemSupportInformationResponse *tds__GetSystemSupportInformationResponse);

	/// Web service operation 'GetScopes' (returns error code or SOAP_OK)
	virtual	int GetScopes(_tds__GetScopes *tds__GetScopes, _tds__GetScopesResponse *tds__GetScopesResponse);

	/// Web service operation 'SetScopes' (returns error code or SOAP_OK)
	virtual	int SetScopes(_tds__SetScopes *tds__SetScopes, _tds__SetScopesResponse *tds__SetScopesResponse);

	/// Web service operation 'AddScopes' (returns error code or SOAP_OK)
	virtual	int AddScopes(_tds__AddScopes *tds__AddScopes, _tds__AddScopesResponse *tds__AddScopesResponse);

	/// Web service operation 'RemoveScopes' (returns error code or SOAP_OK)
	virtual	int RemoveScopes(_tds__RemoveScopes *tds__RemoveScopes, _tds__RemoveScopesResponse *tds__RemoveScopesResponse);

	/// Web service operation 'GetDiscoveryMode' (returns error code or SOAP_OK)
	virtual	int GetDiscoveryMode(_tds__GetDiscoveryMode *tds__GetDiscoveryMode, _tds__GetDiscoveryModeResponse *tds__GetDiscoveryModeResponse);

	/// Web service operation 'SetDiscoveryMode' (returns error code or SOAP_OK)
	virtual	int SetDiscoveryMode(_tds__SetDiscoveryMode *tds__SetDiscoveryMode, _tds__SetDiscoveryModeResponse *tds__SetDiscoveryModeResponse);

	/// Web service operation 'GetRemoteDiscoveryMode' (returns error code or SOAP_OK)
	virtual	int GetRemoteDiscoveryMode(_tds__GetRemoteDiscoveryMode *tds__GetRemoteDiscoveryMode, _tds__GetRemoteDiscoveryModeResponse *tds__GetRemoteDiscoveryModeResponse);

	/// Web service operation 'SetRemoteDiscoveryMode' (returns error code or SOAP_OK)
	virtual	int SetRemoteDiscoveryMode(_tds__SetRemoteDiscoveryMode *tds__SetRemoteDiscoveryMode, _tds__SetRemoteDiscoveryModeResponse *tds__SetRemoteDiscoveryModeResponse);

	/// Web service operation 'GetDPAddresses' (returns error code or SOAP_OK)
	virtual	int GetDPAddresses(_tds__GetDPAddresses *tds__GetDPAddresses, _tds__GetDPAddressesResponse *tds__GetDPAddressesResponse);

	/// Web service operation 'GetUsers' (returns error code or SOAP_OK)
	virtual	int GetUsers(_tds__GetUsers *tds__GetUsers, _tds__GetUsersResponse *tds__GetUsersResponse);

	/// Web service operation 'CreateUsers' (returns error code or SOAP_OK)
	virtual	int CreateUsers(_tds__CreateUsers *tds__CreateUsers, _tds__CreateUsersResponse *tds__CreateUsersResponse);

	/// Web service operation 'DeleteUsers' (returns error code or SOAP_OK)
	virtual	int DeleteUsers(_tds__DeleteUsers *tds__DeleteUsers, _tds__DeleteUsersResponse *tds__DeleteUsersResponse);

	/// Web service operation 'SetUser' (returns error code or SOAP_OK)
	virtual	int SetUser(_tds__SetUser *tds__SetUser, _tds__SetUserResponse *tds__SetUserResponse);

	/// Web service operation 'GetWsdlUrl' (returns error code or SOAP_OK)
	virtual	int GetWsdlUrl(_tds__GetWsdlUrl *tds__GetWsdlUrl, _tds__GetWsdlUrlResponse *tds__GetWsdlUrlResponse);

	/// Web service operation 'GetCapabilities' (returns error code or SOAP_OK)
	virtual	int GetCapabilities(_tds__GetCapabilities *tds__GetCapabilities, _tds__GetCapabilitiesResponse *tds__GetCapabilitiesResponse);

	/// Web service operation 'SetDPAddresses' (returns error code or SOAP_OK)
	virtual	int SetDPAddresses(_tds__SetDPAddresses *tds__SetDPAddresses, _tds__SetDPAddressesResponse *tds__SetDPAddressesResponse);

	/// Web service operation 'GetHostname' (returns error code or SOAP_OK)
	virtual	int GetHostname(_tds__GetHostname *tds__GetHostname, _tds__GetHostnameResponse *tds__GetHostnameResponse);

	/// Web service operation 'SetHostname' (returns error code or SOAP_OK)
	virtual	int SetHostname(_tds__SetHostname *tds__SetHostname, _tds__SetHostnameResponse *tds__SetHostnameResponse);

	/// Web service operation 'GetDNS' (returns error code or SOAP_OK)
	virtual	int GetDNS(_tds__GetDNS *tds__GetDNS, _tds__GetDNSResponse *tds__GetDNSResponse);

	/// Web service operation 'SetDNS' (returns error code or SOAP_OK)
	virtual	int SetDNS(_tds__SetDNS *tds__SetDNS, _tds__SetDNSResponse *tds__SetDNSResponse);

	/// Web service operation 'GetNTP' (returns error code or SOAP_OK)
	virtual	int GetNTP(_tds__GetNTP *tds__GetNTP, _tds__GetNTPResponse *tds__GetNTPResponse);

	/// Web service operation 'SetNTP' (returns error code or SOAP_OK)
	virtual	int SetNTP(_tds__SetNTP *tds__SetNTP, _tds__SetNTPResponse *tds__SetNTPResponse);

	/// Web service operation 'GetDynamicDNS' (returns error code or SOAP_OK)
	virtual	int GetDynamicDNS(_tds__GetDynamicDNS *tds__GetDynamicDNS, _tds__GetDynamicDNSResponse *tds__GetDynamicDNSResponse);

	/// Web service operation 'SetDynamicDNS' (returns error code or SOAP_OK)
	virtual	int SetDynamicDNS(_tds__SetDynamicDNS *tds__SetDynamicDNS, _tds__SetDynamicDNSResponse *tds__SetDynamicDNSResponse);

	/// Web service operation 'GetNetworkInterfaces' (returns error code or SOAP_OK)
	virtual	int GetNetworkInterfaces(_tds__GetNetworkInterfaces *tds__GetNetworkInterfaces, _tds__GetNetworkInterfacesResponse *tds__GetNetworkInterfacesResponse);

	/// Web service operation 'SetNetworkInterfaces' (returns error code or SOAP_OK)
	virtual	int SetNetworkInterfaces(_tds__SetNetworkInterfaces *tds__SetNetworkInterfaces, _tds__SetNetworkInterfacesResponse *tds__SetNetworkInterfacesResponse);

	/// Web service operation 'GetNetworkProtocols' (returns error code or SOAP_OK)
	virtual	int GetNetworkProtocols(_tds__GetNetworkProtocols *tds__GetNetworkProtocols, _tds__GetNetworkProtocolsResponse *tds__GetNetworkProtocolsResponse);

	/// Web service operation 'SetNetworkProtocols' (returns error code or SOAP_OK)
	virtual	int SetNetworkProtocols(_tds__SetNetworkProtocols *tds__SetNetworkProtocols, _tds__SetNetworkProtocolsResponse *tds__SetNetworkProtocolsResponse);

	/// Web service operation 'GetNetworkDefaultGateway' (returns error code or SOAP_OK)
	virtual	int GetNetworkDefaultGateway(_tds__GetNetworkDefaultGateway *tds__GetNetworkDefaultGateway, _tds__GetNetworkDefaultGatewayResponse *tds__GetNetworkDefaultGatewayResponse);

	/// Web service operation 'SetNetworkDefaultGateway' (returns error code or SOAP_OK)
	virtual	int SetNetworkDefaultGateway(_tds__SetNetworkDefaultGateway *tds__SetNetworkDefaultGateway, _tds__SetNetworkDefaultGatewayResponse *tds__SetNetworkDefaultGatewayResponse);

	/// Web service operation 'GetZeroConfiguration' (returns error code or SOAP_OK)
	virtual	int GetZeroConfiguration(_tds__GetZeroConfiguration *tds__GetZeroConfiguration, _tds__GetZeroConfigurationResponse *tds__GetZeroConfigurationResponse);

	/// Web service operation 'SetZeroConfiguration' (returns error code or SOAP_OK)
	virtual	int SetZeroConfiguration(_tds__SetZeroConfiguration *tds__SetZeroConfiguration, _tds__SetZeroConfigurationResponse *tds__SetZeroConfigurationResponse);

	/// Web service operation 'GetIPAddressFilter' (returns error code or SOAP_OK)
	virtual	int GetIPAddressFilter(_tds__GetIPAddressFilter *tds__GetIPAddressFilter, _tds__GetIPAddressFilterResponse *tds__GetIPAddressFilterResponse);

	/// Web service operation 'SetIPAddressFilter' (returns error code or SOAP_OK)
	virtual	int SetIPAddressFilter(_tds__SetIPAddressFilter *tds__SetIPAddressFilter, _tds__SetIPAddressFilterResponse *tds__SetIPAddressFilterResponse);

	/// Web service operation 'AddIPAddressFilter' (returns error code or SOAP_OK)
	virtual	int AddIPAddressFilter(_tds__AddIPAddressFilter *tds__AddIPAddressFilter, _tds__AddIPAddressFilterResponse *tds__AddIPAddressFilterResponse);

	/// Web service operation 'RemoveIPAddressFilter' (returns error code or SOAP_OK)
	virtual	int RemoveIPAddressFilter(_tds__RemoveIPAddressFilter *tds__RemoveIPAddressFilter, _tds__RemoveIPAddressFilterResponse *tds__RemoveIPAddressFilterResponse);

	/// Web service operation 'GetAccessPolicy' (returns error code or SOAP_OK)
	virtual	int GetAccessPolicy(_tds__GetAccessPolicy *tds__GetAccessPolicy, _tds__GetAccessPolicyResponse *tds__GetAccessPolicyResponse);

	/// Web service operation 'SetAccessPolicy' (returns error code or SOAP_OK)
	virtual	int SetAccessPolicy(_tds__SetAccessPolicy *tds__SetAccessPolicy, _tds__SetAccessPolicyResponse *tds__SetAccessPolicyResponse);

	/// Web service operation 'CreateCertificate' (returns error code or SOAP_OK)
	virtual	int CreateCertificate(_tds__CreateCertificate *tds__CreateCertificate, _tds__CreateCertificateResponse *tds__CreateCertificateResponse);

	/// Web service operation 'GetCertificates' (returns error code or SOAP_OK)
	virtual	int GetCertificates(_tds__GetCertificates *tds__GetCertificates, _tds__GetCertificatesResponse *tds__GetCertificatesResponse);

	/// Web service operation 'GetCertificatesStatus' (returns error code or SOAP_OK)
	virtual	int GetCertificatesStatus(_tds__GetCertificatesStatus *tds__GetCertificatesStatus, _tds__GetCertificatesStatusResponse *tds__GetCertificatesStatusResponse);

	/// Web service operation 'SetCertificatesStatus' (returns error code or SOAP_OK)
	virtual	int SetCertificatesStatus(_tds__SetCertificatesStatus *tds__SetCertificatesStatus, _tds__SetCertificatesStatusResponse *tds__SetCertificatesStatusResponse);

	/// Web service operation 'DeleteCertificates' (returns error code or SOAP_OK)
	virtual	int DeleteCertificates(_tds__DeleteCertificates *tds__DeleteCertificates, _tds__DeleteCertificatesResponse *tds__DeleteCertificatesResponse);

	/// Web service operation 'GetPkcs10Request' (returns error code or SOAP_OK)
	virtual	int GetPkcs10Request(_tds__GetPkcs10Request *tds__GetPkcs10Request, _tds__GetPkcs10RequestResponse *tds__GetPkcs10RequestResponse);

	/// Web service operation 'LoadCertificates' (returns error code or SOAP_OK)
	virtual	int LoadCertificates(_tds__LoadCertificates *tds__LoadCertificates, _tds__LoadCertificatesResponse *tds__LoadCertificatesResponse);

	/// Web service operation 'GetClientCertificateMode' (returns error code or SOAP_OK)
	virtual	int GetClientCertificateMode(_tds__GetClientCertificateMode *tds__GetClientCertificateMode, _tds__GetClientCertificateModeResponse *tds__GetClientCertificateModeResponse);

	/// Web service operation 'SetClientCertificateMode' (returns error code or SOAP_OK)
	virtual	int SetClientCertificateMode(_tds__SetClientCertificateMode *tds__SetClientCertificateMode, _tds__SetClientCertificateModeResponse *tds__SetClientCertificateModeResponse);

	/// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
	virtual	int GetRelayOutputs(_tds__GetRelayOutputs *tds__GetRelayOutputs, _tds__GetRelayOutputsResponse *tds__GetRelayOutputsResponse);

	/// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
	virtual	int SetRelayOutputSettings(_tds__SetRelayOutputSettings *tds__SetRelayOutputSettings, _tds__SetRelayOutputSettingsResponse *tds__SetRelayOutputSettingsResponse);

	/// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
	virtual	int SetRelayOutputState(_tds__SetRelayOutputState *tds__SetRelayOutputState, _tds__SetRelayOutputStateResponse *tds__SetRelayOutputStateResponse);
};
#endif