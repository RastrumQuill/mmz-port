// sub_08034FC8 at 0x08034FC8 (thumb)

undefined4 sub_08034FC8(int param_1)

{
  undefined4 in_lr;
  undefined4 local_18 [3];
  
  local_18[0] = 0x8034fed;
  local_18[1] = 0x803508d;
  local_18[2] = 0x80350f9;
  sub_080EF118(param_1,local_18[*(byte *)(param_1 + 0xe)],&stack0xfffffff4);
  return in_lr;
}

