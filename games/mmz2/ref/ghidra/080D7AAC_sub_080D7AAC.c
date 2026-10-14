// sub_080D7AAC at 0x080D7AAC (thumb)

undefined4 sub_080D7AAC(int param_1)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  if (DAT_0202e144 != '\0') {
    return in_lr;
  }
  iVar10 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(iVar10 + 0xc) & 0xffff00) == 0x20700) goto LAB_080d7c90;
  uVar9 = (uint)*(byte *)(param_1 + 0xc5);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    cVar1 = sub_080D62F4(iVar10 + 0x54,(undefined4 *)(param_1 + 0xbc));
    if (cVar1 != '\0') {
      sub_080D7CBC(param_1);
    }
    if (*(char *)(param_1 + 0xd) == '\x01') {
      local_28 = DAT_0202ed50 + 0x6000;
    }
    else {
      local_28 = DAT_0202ed50 + -0x6000;
    }
    local_24 = DAT_0202ed54 + -0x3800;
    piVar7 = (int *)(param_1 + 0xb4);
    sub_080D52B4(piVar7,&local_28,param_1 + 0x5c,param_1 + 0xc4,0x400,0x400,0x500,0x400,0x70,0xe0,4)
    ;
    *(int *)(param_1 + 0x54) = *piVar7;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    iVar5 = sub_080EF330(*(byte *)(param_1 + 0x12) + 1,0x18);
    *(char *)(param_1 + 0x12) = (char)iVar5;
    uVar8 = sub_080EF2B8(iVar5 << 8,0x18);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (short)(&DAT_080ef450)[uVar8 & 0xff] * -4;
    local_28 = local_28 - *piVar7 >> 8;
    local_24 = local_24 - *(int *)(param_1 + 0xb8) >> 8;
    uVar4 = sub_080EEF7C(local_28 * local_28 + local_24 * local_24);
    if (uVar4 < 9) {
      *(bool *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) != '\x01';
    }
    uVar9 = uVar9 - 1;
    if ((int)uVar9 < 1) {
      sub_080D4938(0,param_1 + 0x54,0);
      goto LAB_080d7c02;
    }
  }
  else {
LAB_080d7c02:
    if ((int)uVar9 < 1) {
      uVar9 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar9 & 0x7fffffff;
      uVar9 = ((int)((uVar9 * 2 >> 0x11 & 7) + 1) >> 1) * 0xf + 0x3c;
    }
  }
  *(byte *)(param_1 + 0xc5) = (byte)uVar9;
  uVar2 = sub_080BED50(param_1,*(undefined *)(param_1 + 0x13),2);
  *(undefined *)(param_1 + 0x13) = uVar2;
  sub_08012A14(param_1);
  uVar6 = *(undefined4 *)(iVar10 + 0x58);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar10 + 0x54);
  *(undefined4 *)(param_1 + 0xc0) = uVar6;
  uVar9 = (uint)*(ushort *)(param_1 + 0xc6);
  uVar8 = uVar9 - 1;
  *(ushort *)(param_1 + 0xc6) = (ushort)uVar8;
  if (uVar8 < 0xf0) {
    uVar6 = 2;
    if (0x3b < uVar8) {
      uVar6 = 4;
      uVar8 = uVar9 - 0x3d;
    }
    iVar10 = sub_080EF330(uVar8 + 1,uVar6);
    if (iVar10 != 0) goto LAB_080d7c84;
    bVar3 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
LAB_080d7c84:
    bVar3 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar3;
  if (uVar8 != 0) {
    return in_lr;
  }
LAB_080d7c90:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 8);
  sub_080BEE58(param_1);
  return in_lr;
}

