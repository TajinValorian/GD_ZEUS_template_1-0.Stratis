params [["_cid",""],["_cpass",""]];

_i = campaignIds find _cid;
if (_i isEqualTo -1) exitWith {
	[] remoteExec ["T_fnc_campaignSelect", gm];
	diag_log "couldn't find selected campaign id"
};

_cname = profileNamespace getVariable ["T_campaign_name_" + _cid, ""];
_ccheck = profileNamespace getVariable ["T_campaign_password_" + _cid, ""];
if (_cpass != _ccheck) exitWith {
	[] remoteExec ["T_fnc_campaignSelect", gm];
	diag_log "wrong password"
};

missionNamespace setVariable ["T_campaign_name", _cname, true];