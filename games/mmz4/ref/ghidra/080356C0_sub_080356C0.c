// sub_080356C0 at 0x080356C0 (thumb)

undefined4 sub_080356C0(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  pcVar5 = (char *)(param_1 + 0x102);
  if (*pcVar5 == '\0') {
    sub_0801CF00(param_1,0x1700);
    *(undefined *)(param_1 + 0x145) = 0x10;
    *pcVar5 = *pcVar5 + '\x01';
  }
  else {
    sub_0803A3BC(param_1,0x1700);
    if (*pcVar5 == '\x01') {
      if (*(char *)(param_1 + 0x72) < '\x02') {
        sub_0803C490(param_1,4);
        *pcVar5 = *pcVar5 + '\x01';
      }
    }
    else if (*(char *)(param_1 + 0x73) == '\x03') {
      *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) & 0xfd;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0x100) = 0;
    }
  }
  pbVar6 = (byte *)(param_1 + 0x145);
  if (*pbVar6 != 0) {
    *pbVar6 = *pbVar6 - 1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar1 = sub_080386E0(param_1);
      sVar2 = sub_0803879C(param_1);
      sVar3 = sub_080386E0(param_1);
      iVar4 = ((int)sVar2 - (int)sVar3) * (uint)*pbVar6;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xf;
      }
      iVar4 = -(iVar4 >> 4) - (int)sVar1;
    }
    else {
      sVar1 = sub_080386E0(param_1);
      sVar2 = sub_0803879C(param_1);
      sVar3 = sub_080386E0(param_1);
      iVar4 = ((int)sVar2 - (int)sVar3) * (uint)*pbVar6;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xf;
      }
      iVar4 = (int)sVar1 + (iVar4 >> 4);
    }
    *(int *)(param_1 + 0x5c) = iVar4;
  }
  return in_lr;
}

