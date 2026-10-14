// sub_08032FE8 at 0x08032FE8 (thumb)

undefined4 sub_08032FE8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x174) = 5;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fac8 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

