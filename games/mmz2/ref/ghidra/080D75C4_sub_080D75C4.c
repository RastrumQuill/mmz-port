// sub_080D75C4 at 0x080D75C4 (thumb)

undefined4 sub_080D75C4(int param_1)

{
  undefined uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  
  if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xc) & 0xffff00) == 0x20700) goto LAB_080d7704;
  uVar3 = (uint)*(ushort *)(param_1 + 200);
  uVar9 = uVar3 - 1;
  *(ushort *)(param_1 + 200) = (ushort)uVar9;
  sub_080378B4(*(int *)(param_1 + 0x28),(int *)(param_1 + 0xbc),0);
  if (1 < *(byte *)(param_1 + 0xc)) goto LAB_080d7704;
  if (*(byte *)(param_1 + 0xc) == 1) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0834b46c + (uint)*(byte *)(param_1 + 0xd) * 4));
    iVar8 = *(int *)(param_1 + 0xb4) +
            ((short)(&DAT_080ef450)[*(byte *)(param_1 + 0xcb) + 0x40 & 0xff] * 0xc0 >> 8);
    iVar7 = *(int *)(param_1 + 0xb8) +
            ((short)(&DAT_080ef450)[*(byte *)(param_1 + 0xcb)] * 0xc0 >> 8);
    *(int *)(param_1 + 0xb4) = iVar8;
    *(int *)(param_1 + 0xb8) = iVar7;
    iVar5 = *(byte *)(param_1 + 0x12) + 1;
    iVar5 = iVar5 + (iVar5 >> 4) * -0x10;
    *(char *)(param_1 + 0x12) = (char)iVar5;
    uVar6 = iVar5 * 0x10;
    *(int *)(param_1 + 0x54) =
         iVar8 + *(int *)(param_1 + 0xbc) + (short)(&DAT_080ef450)[uVar6 & 0xff] * 0x10;
    *(int *)(param_1 + 0x58) = iVar7 + *(int *)(param_1 + 0xc0);
    iVar5 = 2;
    if (0x7f < (uVar6 + 0x40 & 0xff)) {
      iVar5 = 3;
    }
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | (byte)(iVar5 << 2);
  }
  else {
    iVar5 = 2;
  }
  uVar1 = sub_080BED50(param_1,*(undefined *)(param_1 + 0x13),iVar5);
  *(undefined *)(param_1 + 0x13) = uVar1;
  sub_08012A14(param_1);
  if (uVar9 < 0x30c) {
    uVar4 = 2;
    if (0xb3 < uVar9) {
      uVar4 = 4;
      uVar9 = uVar3 - 0xb5;
    }
    iVar5 = sub_080EF330(uVar9 + 1,uVar4);
    if (iVar5 != 0) goto LAB_080d76f8;
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
LAB_080d76f8:
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if (uVar9 != 0) {
    return in_lr;
  }
LAB_080d7704:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 8);
  sub_080BEE58(param_1);
  return in_lr;
}

