// sub_08057E68 at 0x08057E68 (thumb)

undefined4 sub_08057E68(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  *(char *)(param_1 + 0xda) = (char)(uVar2 * 2 >> 0x11);
  if (2 < (byte)(*(char *)(param_1 + 0x10) - 2U)) {
    if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
       ((DAT_0202ec38 & 0x10) == 0)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      if ((*(uint *)(param_1 + 0xbc) & 0x20) == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 1;
      }
      *(undefined *)(param_1 + 0xe) = 0;
      sub_08057F70(param_1);
      return in_lr;
    }
    if ((DAT_0202ec42 & 1) == 0) {
      sub_08057BEC(param_1);
    }
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    uVar1 = *(ushort *)(param_1 + 0xb8);
    if (uVar1 < 0x1518) {
      *(ushort *)(param_1 + 0xb8) = uVar1 + 1;
    }
  }
  if ((*(int *)(param_1 + 0x2c) != 0) && (iVar3 = sub_0801E4D8(), iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833c6f8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833c75c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

