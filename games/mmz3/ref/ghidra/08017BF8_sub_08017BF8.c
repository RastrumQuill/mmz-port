// sub_08017BF8 at 0x08017BF8 (thumb)

undefined4 sub_08017BF8(int param_1)

{
  undefined4 in_lr;
  
  *(uint *)(&DAT_0202f5e0 + (uint)(*(byte *)(param_1 + 0x1d) >> 5) * 4) =
       *(uint *)(&DAT_0202f5e0 + (uint)(*(byte *)(param_1 + 0x1d) >> 5) * 4) |
       1 << (*(byte *)(param_1 + 0x1d) & 0x1f);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x20;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | 0xd0;
  *(undefined *)(param_1 + 0x23) = 0xd;
  return in_lr;
}

