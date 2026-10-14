// sub_08042F5C at 0x08042F5C (thumb)

undefined4 sub_08042F5C(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') &&
     ((((*(ushort *)(param_1 + 0x90) & 0x40) != 0 || (*(short *)(param_1 + 0x8c) == 0)) &&
      ((DAT_02022b64 & 0x10) == 0)))) {
    if (-1 < *(short *)(param_1 + 0xbc)) {
      sub_08001EE8();
      *(short *)(param_1 + 0xbc) = -1;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    uVar1 = *(ushort *)(param_1 + 0x90) & 0x1000;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    *(char *)(param_1 + 0xd) = (char)uVar1;
    sub_08043010(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xf) = 0;
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ae5cc + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ae634 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

