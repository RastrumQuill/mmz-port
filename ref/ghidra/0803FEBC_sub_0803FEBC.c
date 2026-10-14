// sub_0803FEBC at 0x0803FEBC (thumb)

undefined4 sub_0803FEBC(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffa00;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0x11);
    uVar1 = (uint)*(byte *)(param_1 + 0x12);
    if (uVar1 != 0) {
      iVar4 = 0;
      iVar3 = *(int *)(param_1 + 0x50);
      iVar2 = *(int *)(param_1 + 0x4c);
      do {
        iVar4 = iVar4 + 0x10;
        iVar3 = iVar3 - iVar4;
        iVar2 = iVar2 + 0x600;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
      *(int *)(param_1 + 0x4c) = iVar2;
      *(int *)(param_1 + 0x50) = iVar3;
      *(int *)(param_1 + 0x58) = iVar4;
    }
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x10;
  return in_lr;
}

