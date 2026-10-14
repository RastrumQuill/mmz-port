// sub_08114650 at 0x08114650 (thumb)

undefined4 sub_08114650(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((int)*(short *)(param_1 + 10) & 0x8000U) != 0) {
    iVar1 = 0;
    if ((DAT_0202f38e != '\0') || (DAT_0202f38c == '\x01')) {
      iVar1 = 1;
    }
    sub_0810D214(&DAT_0886a17c,iVar1 * -7 + 8,
                 (uint)*(byte *)(param_1 + 10) * 2 + 2 + (uint)DAT_0202f38d);
  }
  return in_lr;
}

