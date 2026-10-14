// sub_0805F9F0 at 0x0805F9F0 (thumb)

undefined4 sub_0805F9F0(int param_1)

{
  undefined4 in_lr;
  
  sub_08007390(param_1 + 0x74,&DAT_08361a88);
  *(undefined2 *)(param_1 + 0xe) = 1;
  return in_lr;
}

