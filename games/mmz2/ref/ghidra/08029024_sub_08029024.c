// sub_08029024 at 0x08029024 (thumb)

undefined4 sub_08029024(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 1;
  sub_0801E9FC(param_1,0x8b);
  DAT_030032e0 = DAT_030032e0 | 1;
  return in_lr;
}

