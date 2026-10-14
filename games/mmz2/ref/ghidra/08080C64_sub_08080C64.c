// sub_08080C64 at 0x08080C64 (thumb)

undefined4 sub_08080C64(int param_1)

{
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08340c40 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

