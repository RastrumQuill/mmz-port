// sub_0805F914 at 0x0805F914 (thumb)

undefined4 sub_0805F914(int param_1)

{
  undefined4 in_lr;
  
  sub_08007390(param_1 + 0x74,&DAT_08361ab8);
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08060768(param_1,0xb);
  *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
  sub_0805F944(param_1);
  return in_lr;
}

