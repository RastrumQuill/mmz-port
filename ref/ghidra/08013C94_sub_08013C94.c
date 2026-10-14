// sub_08013C94 at 0x08013C94 (thumb)

undefined4 sub_08013C94(int param_1,byte param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (param_2 == 1) {
    iVar2 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x38);
    if (iVar2 < 1) {
      iVar2 = -(1 - iVar2 >> 2);
    }
    else {
      iVar2 = iVar2 + 1 >> 2;
    }
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar2;
    iVar2 = *(int *)(param_1 + 0x3c);
    iVar4 = *(int *)(param_1 + 0x34) - iVar2;
    if (iVar4 < 1) {
      iVar2 = iVar2 - (1 - iVar4 >> 2);
    }
    else {
      iVar2 = iVar2 + (iVar4 + 1 >> 2);
    }
    goto LAB_08013d94;
  }
  if (param_2 < 2) {
    if (param_2 != 0) {
LAB_08013cb4:
      *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xf7;
    }
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x34);
  }
  else {
    if (param_2 == 2) {
      if (0x3fe < *(short *)(param_1 + 0x22)) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
        iVar2 = *(int *)(param_1 + 0x34);
        goto LAB_08013d94;
      }
      sVar1 = *(short *)(param_1 + 0x22) + 1;
      *(short *)(param_1 + 0x22) = sVar1;
      iVar4 = (int)sVar1;
      iVar2 = (0x400 - iVar4) * (*(int *)(param_1 + 0x38) >> 2) +
              iVar4 * (*(int *)(param_1 + 0x30) >> 2);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x38) = iVar2 >> 8;
      iVar2 = (0x400 - iVar4) * (*(int *)(param_1 + 0x3c) >> 2);
      iVar3 = *(int *)(param_1 + 0x34) >> 2;
    }
    else {
      if (param_2 != 4) goto LAB_08013cb4;
      if (0xfe < *(short *)(param_1 + 0x22)) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
        iVar2 = *(int *)(param_1 + 0x34);
        goto LAB_08013d94;
      }
      sVar1 = *(short *)(param_1 + 0x22) + 1;
      *(short *)(param_1 + 0x22) = sVar1;
      iVar4 = (int)sVar1;
      iVar2 = (0x100 - iVar4) * *(int *)(param_1 + 0x38) + iVar4 * *(int *)(param_1 + 0x30);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x38) = iVar2 >> 8;
      iVar2 = (0x100 - iVar4) * *(int *)(param_1 + 0x3c);
      iVar3 = *(int *)(param_1 + 0x34);
    }
    iVar2 = iVar2 + iVar4 * iVar3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar2 = iVar2 >> 8;
  }
LAB_08013d94:
  *(int *)(param_1 + 0x3c) = iVar2;
  return in_lr;
}

