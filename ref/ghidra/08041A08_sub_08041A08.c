// sub_08041A08 at 0x08041A08 (thumb)

undefined4 sub_08041A08(int param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  iVar5 = *(int *)(param_1 + 0xb8);
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  uVar3 = uVar3 * 2 >> 0x11 & 0xf;
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,5);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  if (*(short *)(param_1 + 0x8c) < (short)(ushort)*(byte *)(param_1 + 0xd2)) {
    *(undefined *)(param_1 + 0xd) = 0x23;
    *(undefined *)(param_1 + 0xe) = 1;
    *(byte *)(param_1 + 0xd2) = 0;
    return in_lr;
  }
  iVar8 = *(int *)(param_1 + 0x4c) + -0xf000;
  iVar6 = *(int *)(param_1 + 0xb8);
  iVar7 = iVar6 - iVar8;
  if (iVar7 < 0) {
    if (0xc800 < iVar8 - iVar6) goto LAB_08041aa2;
LAB_08041ad0:
    if (uVar3 < 5) {
      uVar1 = 6;
    }
    else {
      if (uVar3 < 10) {
        sub_08042288(param_1);
        goto LAB_08041b30;
      }
      iVar7 = *(int *)(param_1 + 0x4c) + -0xf000;
      iVar6 = *(int *)(param_1 + 0xb8) - iVar7;
      if (iVar6 < 0) {
        iVar6 = iVar7 - *(int *)(param_1 + 0xb8);
      }
      if (0xa000 < iVar6) goto LAB_08041b0e;
      uVar1 = 0x10;
    }
  }
  else {
    if (iVar7 < 0xc801) goto LAB_08041ad0;
LAB_08041aa2:
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) == 0) {
LAB_08041b0e:
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xf) = 0xb;
      uVar4 = sub_080C8AD0(iVar5 - (iVar2 + -0xf000),0x28);
      *(undefined4 *)(param_1 + 0x54) = uVar4;
      *(undefined4 *)(param_1 + 0x58) = 0xfffffb00;
      goto LAB_08041b30;
    }
    uVar1 = 6;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
LAB_08041b30:
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

