tb_loginUserInfoRecord|loginUserId|loginUserAccessToken|loginTime;

tb_userInfoRecord|userId|userName|userCellphone|userHeaderImageHash;

tb_lockAndConfigInfoRecord|userId|lockId|lockName|lockHeaderImageHash|lockBlueToothName|lockAutoTurn|lockAutoSignal|lockOpenDoorVoiceTurn|lockOpenDoorShakeTurn|lockStatus|lockMacAddress|lockDeviceUUID|lockSerialNumber|lockSetupKey|lockAuthKey|lockTestFlag;

tb_lockAndUserRecord|lockId|userId|userPrivilege|userComment|userVisitType|userVisitWeekDay|userVisitTimeStart|userVisitTimeEnd|keyUseNotify|shareCode|passCode|keyStatus;

tb_lockManualRecord|manualId|lockId|userIdFrom|userIdTo|manualType|manualTime;

tb_lockManualMessage|manualMessageId|manualMessageTime|manualMessage|manualUserHeaderImageHash|lockId|manualMessageType;

tb_lockBLEInfo|lockMacAddress|lockSetupState|lockMode|lockManualState|lockManualCount|lockPowerStatus|lockKeyState|lockKeyHorizonState|lockRomVersion|lockRomVersionTip|lockRomUpdateFlag;

tb_smartKey|smartKeyId|smartKeyMacAddress|smartKeyName|lockMacAddress;