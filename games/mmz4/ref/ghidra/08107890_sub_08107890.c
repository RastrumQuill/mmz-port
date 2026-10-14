// sub_08107890 at 0x08107890 (thumb)

undefined4 sub_08107890(int param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  pbVar3 = (byte *)(param_1 + 0xb5);
  iVar1 = iVar1 + -0x400 + (uint)*pbVar3 * -0x1800;
  if (*(int *)(param_1 + 0x58) + 0xc00 < iVar1) {
    if ((*pbVar3 == 0) || (iVar1 = *(int *)(param_1 + 0x28), iVar1 == 0)) {
      iVar1 = *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
      if (0x37f < iVar1) {
        return in_lr;
      }
      iVar1 = iVar1 + 0x20;
    }
    else {
      if (1 < *(byte *)(iVar1 + 0xc)) {
        *pbVar3 = *(byte *)(iVar1 + 0xb5);
        if (*(char *)(*(int *)(param_1 + 0x28) + 0xb4) == '\x01') {
          sub_08107A74(param_1);
        }
        if (*(int *)(param_1 + 0x58) + 0xc00 < *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0xc00) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28);
        *(undefined *)(param_1 + 0xb6) = 1;
      }
      iVar1 = *(int *)(param_1 + 0x28);
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0xb6) == '\x01')) {
        *pbVar3 = *(char *)(iVar1 + 0xb5) + 1;
        *(undefined *)(*(int *)(param_1 + 0x28) + 0xb6) = 0;
        *(undefined *)(param_1 + 0xb6) = 1;
      }
      if (*(int *)(param_1 + 0x60) < 0x700) {
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
      }
      iVar1 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x58) + 0xc00 < *(int *)(iVar1 + 0x58) + -0xc00) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        return in_lr;
      }
      if (*(char *)(iVar1 + 0xd) != '\x01') {
        return in_lr;
      }
      iVar1 = *(int *)(iVar1 + 0x60);
    }
    *(int *)(param_1 + 0x60) = iVar1;
    return in_lr;
  }
  *(int *)(param_1 + 0x58) = iVar1 + -0x800;
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0xd) != '\0') {
      uVar2 = *(byte *)(iVar1 + 0xb5) + 1;
      if (uVar2 == *pbVar3) {
        return in_lr;
      }
      *pbVar3 = (byte)uVar2;
      *(undefined *)(param_1 + 0xe) = 1;
      return in_lr;
    }
    if (*(char *)(param_1 + 0x11) == *(char *)(iVar1 + 0x11)) {
      uVar2 = *(byte *)(iVar1 + 0xb5) + 1;
      if (uVar2 != *pbVar3) {
        *pbVar3 = (byte)uVar2;
        return in_lr;
      }
      sub_08107ABC(param_1);
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(*(int *)(param_1 + 0x28) + 0xe) = 0;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      iVar1 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(iVar1 + 0xc) = 2;
      *(undefined4 *)(iVar1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(iVar1 + 9) * 4) + 8);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      iVar1 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(iVar1 + 0x8c) = 0;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined *)(iVar1 + 0x94) = 0;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
      *pbVar3 = *(byte *)(*(int *)(param_1 + 0x28) + 0xb5);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28);
      *(undefined *)(param_1 + 0xb7) = 1;
      sub_08107A74(param_1);
      return in_lr;
    }
  }
  sub_08107B04(param_1);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

