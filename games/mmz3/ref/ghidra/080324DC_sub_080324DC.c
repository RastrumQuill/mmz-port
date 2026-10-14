// sub_080324DC at 0x080324DC (thumb)

undefined4 sub_080324DC(int param_1,int param_2)

{
  undefined4 in_lr;
  
  sub_080FE110(param_1 + 0xb4,param_2,8);
  FUN_080fe114(param_1 + 0xd4,param_2 + 0x20,&DAT_04000004);
  return in_lr;
}

