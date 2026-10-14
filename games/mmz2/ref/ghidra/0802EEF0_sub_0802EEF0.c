// sub_0802EEF0 at 0x0802EEF0 (thumb)

undefined4 sub_0802EEF0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x2b9) - 1;
  *(byte *)(param_1 + 0x2b9) = (byte)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 2;
    sub_0801EA38(param_1,0x43,0,1);
    sub_08033A1C(param_1,4,0,0,0x11,*(undefined *)(param_1 + 0x215),0);
  }
  return in_lr;
}

