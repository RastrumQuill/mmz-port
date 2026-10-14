// IntrMain at 0x080000FC (arm)

void IntrMain(void)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = DAT_04000200;
  uVar2 = uVar2 & uVar2 >> 0x10;
  do {
  } while ((uVar2 & 0x2000) != 0);
  uVar1 = (ushort)(uVar2 & 1);
  if ((((((uVar2 & 1) == 0) && (uVar1 = (ushort)(uVar2 & 2), (uVar2 & 2) == 0)) &&
       (uVar1 = (ushort)(uVar2 & 4), (uVar2 & 4) == 0)) &&
      ((((uVar1 = (ushort)(uVar2 & 8), (uVar2 & 8) == 0 &&
         (uVar1 = (ushort)(uVar2 & 0x10), (uVar2 & 0x10) == 0)) &&
        ((uVar1 = (ushort)(uVar2 & 0x20), (uVar2 & 0x20) == 0 &&
         ((uVar1 = (ushort)(uVar2 & 0x40), (uVar2 & 0x40) == 0 &&
          (uVar1 = (ushort)(uVar2 & 0x80), (uVar2 & 0x80) == 0)))))) &&
       (uVar1 = (ushort)(uVar2 & 0x100), (uVar2 & 0x100) == 0)))) &&
     (((uVar1 = (ushort)(uVar2 & 0x200), (uVar2 & 0x200) == 0 &&
       (uVar1 = (ushort)(uVar2 & 0x400), (uVar2 & 0x400) == 0)) &&
      (uVar1 = (ushort)(uVar2 & 0x800), (uVar2 & 0x800) == 0)))) {
    uVar1 = (ushort)uVar2 & 0x1000;
  }
  DAT_04000200._2_2_ = uVar1;
  return;
}

