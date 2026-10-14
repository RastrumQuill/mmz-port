// sub_080D90D8 at 0x080D90D8 (thumb)

undefined4 sub_080D90D8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xc5) = 0;
  sub_080D90F0();
  return in_lr;
}

