// sub_080373AC at 0x080373AC (thumb)

undefined4 sub_080373AC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0800561C(param_1 + 0x74,&DAT_082ad7fc);
  iVar1 = sub_08038BFC(param_1);
  if (0 < iVar1 * 0x1000000) {
    *(undefined *)(param_1 + 0xf) = 4;
    sub_08038A5C(param_1,0);
    *(undefined *)(param_1 + 0x12) = 4;
  }
  return in_lr;
}

