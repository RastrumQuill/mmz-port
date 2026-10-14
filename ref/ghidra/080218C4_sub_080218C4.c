// sub_080218C4 at 0x080218C4 (thumb)

undefined4 sub_080218C4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 1;
  *(undefined *)(param_1 + 0x11f) = 0;
  *(undefined *)(param_1 + 0x120) = 0;
  sub_08018BE8(param_1,0x14);
  return in_lr;
}

