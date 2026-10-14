// sub_0801504C at 0x0801504C (thumb)

undefined4 sub_0801504C(int param_1,byte param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
    iVar4 = *(int *)(param_1 + 0x3c);
    iVar2 = *(int *)(param_1 + 0x34) - iVar4;
    if (0 < iVar2) {
      *(int *)(param_1 + 0x3c) = iVar4 + (iVar2 + 1 >> 2);
      return in_lr;
    }
    *(int *)(param_1 + 0x3c) = iVar4 - (1 - iVar2 >> 2);
    return in_lr;
  }
  if (param_2 < 2) {
    if (param_2 == 0) goto LAB_08015126;
  }
  else {
    if (param_2 == 2) {
      if (*(short *)(param_1 + 0x22) < 0x3ff) {
        sVar1 = *(short *)(param_1 + 0x22) + 1;
        *(short *)(param_1 + 0x22) = sVar1;
        iVar4 = (int)sVar1;
        iVar5 = *(int *)(param_1 + 0x30);
        iVar2 = (0x400 - iVar4) * (*(int *)(param_1 + 0x38) >> 2) + iVar4 * (iVar5 >> 2);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xff;
        }
        *(int *)(param_1 + 0x38) = iVar2 >> 8;
        iVar3 = *(int *)(param_1 + 0x34);
        iVar4 = (*(int *)(param_1 + 0x3c) >> 2) * (0x400 - iVar4) + iVar4 * (iVar3 >> 2);
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xff;
        }
        *(int *)(param_1 + 0x3c) = iVar4 >> 8;
        if (((iVar2 >> 8) - iVar5) + 0x80U < 0x101) {
          *(int *)(param_1 + 0x38) = iVar5;
        }
        iVar2 = *(int *)(param_1 + 0x3c) - iVar3;
joined_r0x08015112:
        if (0x100 < iVar2 + 0x80U) {
          return in_lr;
        }
        *(int *)(param_1 + 0x3c) = iVar3;
        return in_lr;
      }
      goto LAB_08015126;
    }
    if (param_2 == 4) {
      if (*(short *)(param_1 + 0x22) < 0xff) {
        sVar1 = *(short *)(param_1 + 0x22) + 1;
        *(short *)(param_1 + 0x22) = sVar1;
        iVar4 = (int)sVar1;
        iVar5 = *(int *)(param_1 + 0x30);
        iVar2 = (0x100 - iVar4) * *(int *)(param_1 + 0x38) + iVar4 * iVar5;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xff;
        }
        *(int *)(param_1 + 0x38) = iVar2 >> 8;
        iVar3 = *(int *)(param_1 + 0x34);
        iVar4 = *(int *)(param_1 + 0x3c) * (0x100 - iVar4) + iVar4 * iVar3;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xff;
        }
        *(int *)(param_1 + 0x3c) = iVar4 >> 8;
        if (((iVar2 >> 8) - iVar5) + 0x80U < 0x101) {
          *(int *)(param_1 + 0x38) = iVar5;
        }
        iVar2 = *(int *)(param_1 + 0x3c) - iVar3;
        goto joined_r0x08015112;
      }
      goto LAB_08015126;
    }
  }
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xf7;
LAB_08015126:
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
  return in_lr;
}

