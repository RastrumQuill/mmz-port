// sub_08029A34 at 0x08029A34 (thumb)

undefined4 sub_08029A34(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if ((((*(ushort *)(param_1 + 0x90) & 0x40) == 0) && (*(short *)(param_1 + 0x8c) != 0)) ||
     ((DAT_02022b64 & 0x10) != 0)) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082acc74 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082acc88 + (uint)*(byte *)(param_1 + 0xd) * 4));
    pbVar1 = (byte *)(param_1 + 0xb8);
    *pbVar1 = *pbVar1 + 2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc4);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc4) + (short)(&DAT_080c8e24)[*pbVar1] * -2;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08029AD8(param_1);
  }
  return in_lr;
}

