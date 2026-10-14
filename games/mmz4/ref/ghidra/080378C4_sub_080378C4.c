// sub_080378C4 at 0x080378C4 (thumb)

undefined4 sub_080378C4(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0x2c00);
  *(undefined *)(param_1 + 0x157) = 0;
  *(undefined *)(param_1 + 0x152) = 4;
  *(undefined *)(param_1 + 0x101) = 1;
  sub_080378FC(param_1);
  return in_lr;
}

