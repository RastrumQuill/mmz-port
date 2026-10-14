// sub_0803DD04 at 0x0803DD04 (thumb)

undefined4 sub_0803DD04(int param_1)

{
  undefined4 in_lr;
  
  sub_0803D7F4();
  if ((*(char *)(param_1 + 0x10) == '\0') &&
     ((((*(ushort *)(param_1 + 0x90) & 0x40) != 0 || (*(short *)(param_1 + 0x8c) == 0)) &&
      ((DAT_02022b64 & 0x10) == 0)))) {
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = (&DAT_082ae308)[*(byte *)(param_1 + 0xd)];
    sub_0803DDBC(param_1);
  }
  else {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ae240 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ae294 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

