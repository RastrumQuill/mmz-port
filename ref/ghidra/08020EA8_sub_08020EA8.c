// sub_08020EA8 at 0x08020EA8 (thumb)

undefined4 sub_08020EA8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 1;
  sub_08018BE8(param_1,0x9c);
  DAT_02004fa0 = DAT_02004fa0 | 1;
  return in_lr;
}

