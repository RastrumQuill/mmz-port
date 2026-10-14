// sub_08002D34 at 0x08002D34 (thumb)

undefined4 sub_08002D34(void)

{
  short *psVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  psVar1 = &DAT_02000e60;
  do {
    if ((&DAT_02000e40)[iVar2] != '\0') {
      if (*psVar1 == 0) {
        (&DAT_02000e40)[iVar2] = '\0';
      }
      else {
        *psVar1 = 0;
      }
    }
    psVar1 = psVar1 + 10;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return in_lr;
}

