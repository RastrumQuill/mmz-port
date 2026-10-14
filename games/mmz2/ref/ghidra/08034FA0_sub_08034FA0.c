// sub_08034FA0 at 0x08034FA0 (thumb)

undefined4 sub_08034FA0(int param_1)

{
  undefined4 in_lr;
  undefined4 local_1c [4];
  
  local_1c[0] = 0x8034fc9;
  local_1c[1] = 0x8035239;
  local_1c[2] = 0x80352a5;
  local_1c[3] = 0x8035311;
  sub_080EF118(param_1,local_1c[*(byte *)(param_1 + 0xd)]);
  return in_lr;
}

