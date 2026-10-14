// sub_080779FC at 0x080779FC (thumb)

undefined4 sub_080779FC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xc6) + 1 & 1;
  *(byte *)(param_1 + 0xc6) = bVar1;
  if (bVar1 == 0) {
    sub_08079080(param_1);
  }
  else {
    sub_08078FA0(param_1);
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08859c14 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

