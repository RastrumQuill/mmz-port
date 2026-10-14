// sub_080600DC at 0x080600DC (thumb)

undefined4 sub_080600DC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202f5c0 + 0x54);
  *(int *)(param_1 + 0x58) = DAT_020302c4 + -0x3000;
  sub_0806082C(param_1,0);
  *(undefined4 *)(param_1 + 0x60) = 0;
  sub_08060768(param_1,0xc);
  *(undefined *)(param_1 + 0xf) = 1;
  sub_0800471C(0xfe);
  sub_0805EC90(param_1);
  *(undefined *)(param_1 + 0x12) = 0xc;
  sub_08060134(param_1);
  return in_lr;
}

