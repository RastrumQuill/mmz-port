// sub_080377AC at 0x080377AC (thumb)

undefined4 sub_080377AC(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 4;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fdd0 + (uint)*(byte *)(param_1 + 0x101) * 4));
  return in_lr;
}

