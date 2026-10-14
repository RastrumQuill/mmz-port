// sub_0803327C at 0x0803327C (thumb)

undefined4 sub_0803327C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 0;
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833451c + (uint)*(byte *)(param_1 + 0x175) * 4));
  return in_lr;
}

