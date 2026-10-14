// sub_08038FA0 at 0x08038FA0 (thumb)

undefined4 sub_08038FA0(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(ushort *)(param_1 + 0x90) & 0x40) == 0) && (*(short *)(param_1 + 0x8c) != 0)) ||
     ((DAT_02022b64 & 0x10) != 0)) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ada50 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    sub_08039008(param_1);
  }
  return in_lr;
}

