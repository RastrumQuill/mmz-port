// sub_0806F5C4 at 0x0806F5C4 (thumb)

undefined4 sub_0806F5C4(int param_1)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if ((iVar5 != 0) || ((*(byte *)(param_1 + 0xc5) & 1) != 0)) {
    uVar3 = 0;
    if (*(char *)(param_1 + 0x12) == '\0') {
      uVar3 = 2;
    }
    if (*(char *)(param_1 + 0x12) == -0x80) {
      uVar3 = uVar3 | 1;
    }
    iVar4 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x5c);
    if (iVar4 < 0) {
      iVar4 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0xb8);
    }
    if (iVar4 < 0x4001) {
      uVar3 = 0;
    }
    if (uVar3 != 0) {
      if (*(byte *)(param_1 + 0x13) < 2) {
        *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 1;
      }
      else {
        uVar2 = (DAT_02022890 * 0x343fd + 0x269ec3 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar2 & 0x7fffffff;
        if (10 < (uVar2 * 2 >> 0x11 & 0xf)) {
          if ((uVar3 & 1) == 0) {
            *(undefined *)(param_1 + 0xd) = 4;
            *(undefined *)(param_1 + 0xe) = 0;
            *(undefined *)(iVar5 + 0xd) = 3;
            *(undefined *)(iVar5 + 0xe) = 0;
            uVar1 = 0x80;
          }
          else {
            uVar1 = 0;
            *(undefined *)(param_1 + 0xd) = 3;
            *(undefined *)(param_1 + 0xe) = 0;
            *(undefined *)(iVar5 + 0xd) = 4;
            *(undefined *)(iVar5 + 0xe) = 0;
          }
          *(undefined *)(iVar5 + 0x12) = uVar1;
        }
      }
    }
  }
  return in_lr;
}

