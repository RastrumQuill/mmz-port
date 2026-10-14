// sub_080275F0 at 0x080275F0 (thumb)

undefined4 sub_080275F0(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 8) = param_2;
  DAT_0202e922 = DAT_0202e922 | 1;
  DAT_02000a60 = 0;
  if (DAT_0202dbec != 0) {
    DAT_0202e8b8 = DAT_0202e8b8 & 0x7f;
    sub_08002A50();
    DAT_0202dbec = 0;
  }
  return in_lr;
}

