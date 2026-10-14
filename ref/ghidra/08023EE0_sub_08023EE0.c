// sub_08023EE0 at 0x08023EE0 (thumb)

undefined4 sub_08023EE0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = sub_0801B50C(param_1,3);
  if ((bVar1 & *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130)) == 0) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 3;
    sub_08018BE8(param_1,0x8c);
  }
  return in_lr;
}

