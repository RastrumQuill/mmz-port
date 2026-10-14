// sub_080212EC at 0x080212EC (thumb)

undefined4 sub_080212EC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 4;
  sub_08018BE8(param_1,0xa1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08028F3C(param_1);
  return in_lr;
}

