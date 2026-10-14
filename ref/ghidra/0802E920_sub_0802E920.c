// sub_0802E920 at 0x0802E920 (thumb)

undefined4 sub_0802E920(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(ushort *)(param_1 + 0x90) & 0x40) == 0) && (*(short *)(param_1 + 0x8c) != 0)) ||
     ((DAT_02022b64 & 0x10) != 0)) {
    if ((*(byte *)(param_1 + 0xd) < 9) && (*(byte *)(param_1 + 0xd) != 5)) {
      sub_0802E73C(param_1);
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ad1b4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ad224 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    if (-1 < *(short *)(param_1 + 0xd4)) {
      sub_08001EE8();
      *(short *)(param_1 + 0xd4) = -1;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0802E9C4(param_1);
  }
  return in_lr;
}

