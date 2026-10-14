// sub_080343B0 at 0x080343B0 (thumb)

undefined8 sub_080343B0(int param_1,int param_2,undefined4 param_3,byte param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  
  cVar1 = sub_08034598(param_1,*(char *)(param_1 + 0xc0) != '\0');
  if ((cVar1 != '\x02') && (*(char *)(param_1 + 0x225) == '\x03')) {
    if (*(char *)(param_1 + 0xd) == '\x03') {
      pbVar4 = (byte *)(param_1 + 0x226);
      *(byte *)(param_1 + 0x4c) = *pbVar4 & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar4 & 1) << 4);
      if ((*pbVar4 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      param_4 = *pbVar4;
    }
    cVar1 = '\x01';
    *(char *)(param_1 + 0x225) = '\0';
  }
  if (*(char *)(param_1 + 0x228) == '\x06') {
    if (*(char *)(param_1 + 0xd) == '\x03') {
      pbVar4 = (byte *)(param_1 + 0x229);
      *(byte *)(param_1 + 0x4c) = *pbVar4 & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar4 & 1) << 4);
      if ((*pbVar4 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      param_4 = *pbVar4;
    }
    cVar1 = '\x02';
    *(char *)(param_1 + 0x228) = '\0';
  }
  if (param_4 != 0) {
    param_2 = -param_2;
  }
  if ((cVar1 == '\x02') && (bVar2 = *(byte *)(param_1 + 0xc2), bVar2 != 1)) {
    if (bVar2 < 2) {
      if ((bVar2 == 0) && ((*(ushort *)(param_1 + 0xc6) & 1) != 0)) {
        cVar1 = '\x03';
      }
    }
    else if (bVar2 == 2) {
      if ((*(ushort *)(param_1 + 0xc6) & 4) != 0) {
        cVar1 = '\x04';
      }
    }
    else if ((bVar2 == 3) && ((*(ushort *)(param_1 + 0xc6) & 8) != 0)) {
      cVar1 = '\x05';
    }
  }
  local_24 = param_2;
  local_20 = param_3;
  uVar3 = sub_080370FC(param_1,&local_24,cVar1,param_4,0);
  if ((*(char *)(param_1 + 0xc2) == '\x01') && ((*(ushort *)(param_1 + 0xc6) & 2) != 0)) {
    sub_080370FC(param_1,&local_24,cVar1,param_4,1);
  }
  return CONCAT44(in_lr,uVar3);
}

