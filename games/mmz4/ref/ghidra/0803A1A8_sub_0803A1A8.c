// sub_0803A1A8 at 0x0803A1A8 (thumb)

undefined4 sub_0803A1A8(int param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  
  bVar3 = *(byte *)(param_1 + 0x144);
  cVar2 = sub_0803A434(param_1,(uint)*(byte *)(param_1 + 0xc0) != (uint)bVar3);
  iVar1 = -(uint)bVar3;
  if ((iVar1 < 0) && (*(char *)(param_1 + 0xd) == '\x03')) {
    uVar4 = 0;
  }
  else {
    if ((cVar2 != '\x02') && (*(char *)(param_1 + 0x267) == '\x03')) {
      if (*(char *)(param_1 + 0xd) == '\x03') {
        pbVar5 = (byte *)(param_1 + 0x268);
        *(byte *)(param_1 + 0x4c) = *pbVar5 & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar5 & 1) << 4);
        if ((*pbVar5 & 1) == 0) {
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
      }
      cVar2 = '\x01';
      *(char *)(param_1 + 0x267) = '\0';
    }
    if (*(char *)(param_1 + 0x26a) == '\x06') {
      if (*(char *)(param_1 + 0xd) == '\x03') {
        pbVar5 = (byte *)(param_1 + 0x26b);
        *(byte *)(param_1 + 0x4c) = *pbVar5 & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar5 & 1) << 4);
        if ((*pbVar5 & 1) == 0) {
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
      }
      cVar2 = '\x02';
      *(char *)(param_1 + 0x26a) = '\0';
    }
    uVar4 = sub_0803D9C0(param_1,-(iVar1 >> 0x1f),cVar2);
  }
  return uVar4;
}

