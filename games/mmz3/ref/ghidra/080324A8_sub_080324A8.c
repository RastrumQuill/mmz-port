// sub_080324A8 at 0x080324A8 (thumb)

undefined4 sub_080324A8(int param_1,int param_2)

{
  undefined4 in_lr;
  
  sub_080FE110(param_2,param_1 + 0xb4,8);
  FUN_080fe114(param_2 + 0x20,param_1 + 0xd4,&DAT_04000004);
  *(undefined2 *)(param_1 + 0xa4) = 0x40;
  return in_lr;
}

