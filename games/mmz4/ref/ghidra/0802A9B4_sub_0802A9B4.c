// sub_0802A9B4 at 0x0802A9B4 (thumb)

undefined4 sub_0802A9B4(void)

{
  short *psVar1;
  short sVar2;
  undefined4 in_lr;
  
  if (DAT_0202e8f9 == '\0') {
    psVar1 = (short *)sub_08000A70(8);
    if (psVar1 == (short *)0x0) {
      return in_lr;
    }
    sVar2 = 0x6124;
  }
  else {
    psVar1 = (short *)sub_08000A70(8);
    if (psVar1 == (short *)0x0) {
      return in_lr;
    }
    sVar2 = 0x6120;
  }
  *psVar1 = sVar2;
  psVar1[1] = sVar2 + 1;
  psVar1[2] = sVar2 + 2;
  psVar1[3] = sVar2 + 3;
  sub_08001F1C(psVar1,(DAT_02000a06 & 0x1f00) * 8 + 0x21c,8);
  return in_lr;
}

