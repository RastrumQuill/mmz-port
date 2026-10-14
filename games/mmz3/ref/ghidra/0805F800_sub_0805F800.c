// sub_0805F800 at 0x0805F800 (thumb)

undefined4 sub_0805F800(int param_1)

{
  undefined4 in_lr;
  
  sub_08007390(param_1 + 0x74,&DAT_08361ba8);
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08060768(param_1,9);
  return in_lr;
}

