// sub_08074E08 at 0x08074E08 (thumb)

undefined4 sub_08074E08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202e918 & 8) == 0)) {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) - 0xaf0f < 2) {
      *(undefined *)(param_1 + 0xdf) = 1;
    }
    else {
      *(byte *)(param_1 + 0xdf) = (byte)DAT_0202e918 & 8;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08074F24(param_1);
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      uVar1 = sub_0802AD94(0x19,param_1,&DAT_08859b68);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
    }
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 == 0) goto LAB_08074ec8;
    if ((&DAT_08859b70)[*(byte *)(param_1 + 0xd)] != '\0') {
      *(undefined *)(param_1 + 0xd) = 0x19;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  iVar2 = sub_0802B3CC(iVar2);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_08074ec8:
  *(undefined *)(param_1 + 0xd9) = 0;
  sub_080750E8(param_1);
  sub_08128884(param_1,*(undefined4 *)(&UNK_08859878 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (1 < *(byte *)(param_1 + 0xd)) {
    iVar2 = *(int *)(param_1 + 0xc4) + 0x1000;
    if (*(int *)(param_1 + 0x54) < iVar2) {
      *(int *)(param_1 + 0x54) = iVar2;
    }
    iVar2 = *(int *)(param_1 + 200) + -0x1000;
    if (iVar2 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar2;
    }
  }
  return in_lr;
}

