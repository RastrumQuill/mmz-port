// sub_08093E38 at 0x08093E38 (thumb)

undefined4 sub_08093E38(int param_1)

{
  undefined uVar1;
  byte bVar2;
  undefined extraout_var;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined4 in_lr;
  
  iVar10 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar10 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017528(param_1);
    sub_08017700(param_1,0x8e01);
    *(undefined *)(param_1 + 0x25) = 0x1a;
    *(byte *)(param_1 + 0x12) = (*(byte *)(iVar10 + 10) >> 4 ^ 1) & 1;
    *(uint *)(param_1 + 100) = (uint)*(byte *)(param_1 + 0x12) * -0x200 + 0x100;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x12) << 7;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar10 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(iVar10 + 0x58) + -0xd00;
  iVar3 = sub_08063614(iVar10);
  if (iVar3 == 0) {
    puVar11 = (uint *)(iVar10 + 0xb8);
    if ((*puVar11 & 1) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      iVar8 = *(int *)(param_1 + 0x54);
      iVar9 = *(int *)(param_1 + 0x58);
      iVar3 = (*(int *)(DAT_0202f5c0 + 0x54) - iVar8) * 0xe0;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      iVar3 = FUN_080fe2f8(iVar3 >> 8,0x1e);
      if (iVar3 < -0x300) {
        iVar3 = -0x300;
      }
      if (0x300 < iVar3) {
        iVar3 = 0x300;
      }
      iVar4 = iVar3 - *(int *)(param_1 + 100);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xf;
      }
      iVar5 = *(int *)(param_1 + 100) + (iVar4 >> 4);
      *(int *)(param_1 + 100) = iVar5;
      iVar4 = -*(int *)(param_1 + 0x68);
      iVar7 = iVar4 + -0x3c0;
      if (iVar7 < 0) {
        iVar7 = iVar4 + -0x3b1;
      }
      iVar4 = *(int *)(param_1 + 0x68) + (iVar7 >> 4);
      *(int *)(param_1 + 0x68) = iVar4;
      sub_080FE10C(iVar5 * 0x10000 >> 0x10,iVar4 * 0x10000 >> 0x10);
      *(undefined *)(param_1 + 0x13) = extraout_var;
      if ((*puVar11 & 2) != 0) {
        sub_0800471C(0x2d);
        *puVar11 = *puVar11 & 0xfffffffd;
        sub_080B0CB4(iVar8 + *(short *)((int)&DAT_080fe64c +
                                       ((*(byte *)(param_1 + 0x13) + 0x40) * 0x1000000 >> 0x17)) *
                             0x13,iVar9 + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x13)] * 0x13,
                     iVar3,0xfffffc40,*(undefined *)(iVar10 + 0x11));
      }
      goto LAB_0809402a;
    }
    uVar6 = 0x100;
    *(undefined4 *)(param_1 + 100) = 0x100;
    if ((*(byte *)(iVar10 + 10) & 0x10) == 0) {
      uVar6 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 100) = uVar6;
    *(undefined4 *)(param_1 + 0x68) = 0;
    uVar1 = sub_080FE10C(uVar6,0);
    *(undefined *)(param_1 + 0x13) = uVar1;
LAB_08094022:
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    if ((*(uint *)(iVar10 + 0xb8) & 1) == 0) goto LAB_08094022;
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
LAB_0809402a:
  sub_080177F4(param_1);
  *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x13) + -0x80;
  return in_lr;
}

