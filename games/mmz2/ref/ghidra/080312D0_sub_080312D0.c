// sub_080312D0 at 0x080312D0 (thumb)

undefined4 sub_080312D0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 < 2) {
    *(byte *)(param_1 + 9) = bVar1 + 1;
    *(undefined *)(param_1 + (uint)bVar1 + 0xc) = 0;
  }
  return in_lr;
}

