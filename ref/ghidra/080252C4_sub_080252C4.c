// sub_080252C4 at 0x080252C4 (thumb)

undefined4 sub_080252C4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = sub_0801B50C(param_1,3);
  if ((bVar1 & *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130)) == 0) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 3;
    sub_08018BE8(param_1,0x94);
  }
  return in_lr;
}

