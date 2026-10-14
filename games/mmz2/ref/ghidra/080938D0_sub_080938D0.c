// sub_080938D0 at 0x080938D0 (thumb)

undefined4 sub_080938D0(int param_1)

{
  undefined4 in_lr;
  
  sub_080AC60C(1,param_1 + 0x54);
  sub_080032EC(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) =
       **(undefined4 **)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4);
  return in_lr;
}

