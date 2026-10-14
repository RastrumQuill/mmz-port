// sub_080B3298 at 0x080B3298 (thumb)

undefined4 sub_080B3298(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar2 = sub_0807F930(param_1 + 0x54,0x5c,0,0);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0xb5) == '\0')) {
    iVar5 = *(int *)(iVar2 + 0x54) - *(int *)(param_1 + 0x54);
    if (iVar5 < 0) {
      iVar5 = *(int *)(param_1 + 0x54) - *(int *)(iVar2 + 0x54);
    }
    if (iVar5 < 0x1c00) {
      iVar4 = *(int *)(param_1 + 0x58) + 0x800;
      iVar5 = *(int *)(iVar2 + 0x58) - iVar4;
      if (iVar5 < 0) {
        iVar5 = iVar4 - *(int *)(iVar2 + 0x58);
      }
      if (iVar5 < 0x1c00) {
        uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar3 & 0x7fffffff;
        bVar1 = sub_08128A9C(uVar3 * 2 >> 0x11,0xc);
        if (bVar1 < 4) {
          *(int *)(param_1 + 0x2c) = iVar2;
          *(undefined *)(param_1 + 0xd) = 2;
          *(undefined *)(param_1 + 0xe) = 0;
          return in_lr;
        }
      }
    }
  }
  *(undefined *)(param_1 + 0x11) = 0x3c;
  return in_lr;
}

