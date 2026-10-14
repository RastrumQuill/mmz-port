// sub_080369C4 at 0x080369C4 (thumb)

undefined4 sub_080369C4(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 6;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fd20 + (uint)*(byte *)(param_1 + 0x101) * 4));
  *(undefined *)(param_1 + 0x150) = (&DAT_0884fd34)[*(byte *)(param_1 + 0x157)];
  return in_lr;
}

