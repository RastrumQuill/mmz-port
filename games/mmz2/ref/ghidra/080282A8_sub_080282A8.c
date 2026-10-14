// sub_080282A8 at 0x080282A8 (thumb)

undefined4 sub_080282A8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08028238(param_1);
  sub_080282C4(param_1);
  return in_lr;
}

