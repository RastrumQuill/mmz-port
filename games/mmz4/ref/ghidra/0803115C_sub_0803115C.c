// sub_0803115C at 0x0803115C (thumb)

undefined4 sub_0803115C(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x403) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_0801CFC8(param_1,0x403,1,4);
  }
  pcVar4 = (char *)(param_1 + 0x13c);
  if ((*pcVar4 != '\0') && (*pcVar4 = *pcVar4 + -1, (*(uint *)(param_1 + 600) & 4) != 0)) {
    sub_08002B10(8);
    *pcVar4 = '\0';
    sVar1 = sub_0803879C(param_1);
    *(int *)(param_1 + 0x5c) = (int)sVar1;
    if (*(int *)(param_1 + 0x108) == 0) {
      uVar2 = sub_080D229C(param_1);
      *(undefined4 *)(param_1 + 0x108) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x11c) == 0) {
    if ((*(uint *)(param_1 + 600) & 0x20) == 0) {
      if ((*(uint *)(param_1 + 600) & 0x10) == 0) {
        sVar1 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x5c);
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        sVar1 = (short)iVar3;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x5c);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      sVar1 = -(short)iVar3;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
  }
  else {
    sVar1 = (short)*(int *)(param_1 + 0x11c);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)sVar1;
  pbVar5 = (byte *)(param_1 + 0x174);
  sVar1 = sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,0);
  if (sVar1 != 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  sVar1 = sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,1);
  if (sVar1 != 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08038528(param_1);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar1;
  sVar1 = sub_0802BFD0(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,0);
  if (sVar1 == 0) {
    sVar1 = sub_0802C2BC(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,1);
  }
  if ((0 < *(int *)(param_1 + 0x60)) || (sVar1 != 0)) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

