// sub_080EB908 at 0x080EB908 (thumb)

undefined4 sub_080EB908(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xdcc) = 0x7800;
  *(undefined4 *)(param_1 + 0xdd0) = 0x5000;
  sub_080033A8(param_1 + 0xdc0,(undefined4 *)(param_1 + 0xdcc),0,0);
  sub_08004A08(param_1 + 0xbb4);
  sub_08004A40(param_1 + 0xbb4,param_1 + 0xdc0);
  sub_080D9C38(param_1 + 0x980,&DAT_0203bc40,0x40);
  return in_lr;
}

