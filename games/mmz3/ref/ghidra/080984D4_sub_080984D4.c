// sub_080984D4 at 0x080984D4 (thumb)

undefined4 sub_080984D4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    iVar1 = param_1 + 0x54;
    uVar2 = sub_0801A9A8(&DAT_02030288,iVar1);
    if (((0x3000 < uVar2) && (DAT_020302c4 + 0x4fff < *(int *)(param_1 + 0x58) + 0x2000)) &&
       (*(char *)(param_1 + 0x11) == '\x01')) {
      *(undefined *)(param_1 + 0xf) = 1;
      sub_0800471C(0x2a);
      sub_08024FE4(1,iVar1);
      if (DAT_0203016c < 9999) {
        DAT_0203016c = DAT_0203016c + 1;
      }
      sub_080250C4(param_1,iVar1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      return in_lr;
    }
  }
  else if ((*(char *)(param_1 + 0xd) != '\x06') || (iVar1 = sub_08063614(param_1), iVar1 != 0)) {
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080985EC(param_1);
    return in_lr;
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08366c38 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080998A0(param_1);
  if ((((byte)(*(char *)(param_1 + 0xd) - 6U) < 2) || (*(char *)(param_1 + 0xd) == '\t')) ||
     (iVar1 = sub_08063614(param_1), iVar1 == 0)) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08366c60 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

