// sub_0809BCA8 at 0x0809BCA8 (thumb)

undefined4 sub_0809BCA8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  byte abStack_14 [4];
  
  sub_08128B5C(abStack_14,&DAT_0812959c,4);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar6 = (uint)bVar1 * 8;
    iVar4 = *(int *)(&DAT_0885de34 + iVar6);
    iVar2 = -iVar4;
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar6 = -*(int *)(&DAT_0885de38 + iVar6);
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0xb4);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb8);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58);
    }
    else {
      iVar4 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
      iVar6 = iVar2;
    }
    uVar3 = FUN_081288bc(iVar4,iVar6);
    *(undefined *)(param_1 + 0x12) = uVar3;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) << 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)(*(char *)(param_1 + 0x71) * 4 + (&DAT_0885de08)[abStack_14[bVar1]]));
  uVar5 = (uint)(*(byte *)(param_1 + 0x12) >> 1);
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) - uVar5 * *(int *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60) * uVar5;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

