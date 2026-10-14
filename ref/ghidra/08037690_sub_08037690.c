// sub_08037690 at 0x08037690 (thumb)

undefined4 sub_08037690(int param_1)

{
  undefined4 in_lr;
  
  sub_0800561C(param_1 + 0x74,&DAT_082ad818);
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08038A5C(param_1,0xb);
  *(undefined4 *)(param_1 + 0x58) = 0xfffffb00;
  sub_080376C0(param_1);
  return in_lr;
}

