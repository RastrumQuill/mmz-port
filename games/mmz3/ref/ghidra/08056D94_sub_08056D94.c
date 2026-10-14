// sub_08056D94 at 0x08056D94 (thumb)

undefined4 sub_08056D94(int param_1)

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
  
  iVar2 = *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0xb4);
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar3 & 0x7fffffff;
  uVar3 = uVar3 * 2 >> 0x11 & 0xf;
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb305);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  if (*(short *)(param_1 + 0xa4) < (short)(ushort)*(byte *)(param_1 + 0xce)) {
    *(undefined *)(param_1 + 0xd) = 0x23;
    *(undefined *)(param_1 + 0xe) = 1;
    *(byte *)(param_1 + 0xce) = 0;
    return in_lr;
  }
  iVar8 = *(int *)(param_1 + 0x54) + -0xa800;
  iVar6 = *(int *)(param_1 + 0xb4);
  iVar7 = iVar6 - iVar8;
  if (iVar7 < 0) {
    if (0xc800 < iVar8 - iVar6) goto LAB_08056e32;
LAB_08056e60:
    if (uVar3 < 5) {
      uVar1 = 6;
    }
    else {
      if (uVar3 < 10) {
        sub_08057804(param_1);
        goto LAB_08056ec0;
      }
      iVar7 = *(int *)(param_1 + 0x54) + -0xa800;
      iVar6 = *(int *)(param_1 + 0xb4) - iVar7;
      if (iVar6 < 0) {
        iVar6 = iVar7 - *(int *)(param_1 + 0xb4);
      }
      if (0xa000 < iVar6) goto LAB_08056e9e;
      uVar1 = 0x10;
    }
  }
  else {
    if (iVar7 < 0xc801) goto LAB_08056e60;
LAB_08056e32:
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) == 0) {
LAB_08056e9e:
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xf) = 0xb;
      uVar4 = FUN_080fe2f8(iVar5 - (iVar2 + -0xa800),0x28);
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
      goto LAB_08056ec0;
    }
    uVar1 = 6;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
LAB_08056ec0:
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

