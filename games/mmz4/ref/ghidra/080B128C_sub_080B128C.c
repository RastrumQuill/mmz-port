// sub_080B128C at 0x080B128C (thumb)

undefined4 sub_080B128C(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x54) + iVar4;
  *(int *)(param_1 + 0x54) = iVar3;
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    pcVar5 = (char *)(param_1 + 0xc1);
    if (*pcVar5 == '\x02') {
      uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
      if (0x4000 < uVar2) {
        *pcVar5 = *pcVar5 + '\x01';
      }
    }
    else {
      piVar6 = (int *)(param_1 + 0xb8);
      sVar1 = sub_08007C7C(iVar3 + *(int *)(param_1 + 0xb4),*(int *)(param_1 + 0x58) + *piVar6);
      if (sVar1 == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
        *(undefined4 *)(param_1 + 0xbc) = 0;
        *pcVar5 = *pcVar5 + '\x01';
        if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
          *piVar6 = *piVar6 + -0x100;
        }
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0xbc);
    if (iVar3 < 1) {
      *(char *)(param_1 + 0xc0) = '\x01';
      *(undefined *)(param_1 + 0xc1) = 0;
    }
    else {
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      *(int *)(param_1 + 0xbc) = iVar3 - iVar4;
    }
  }
  return in_lr;
}

