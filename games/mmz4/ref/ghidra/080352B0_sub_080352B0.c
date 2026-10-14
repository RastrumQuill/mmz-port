// sub_080352B0 at 0x080352B0 (thumb)

undefined4 sub_080352B0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08034904();
  return in_lr;
}

