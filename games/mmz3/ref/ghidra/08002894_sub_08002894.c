// sub_08002894 at 0x08002894 (thumb)

undefined4 sub_08002894(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = DAT_02001793;
  DAT_02000004 = DAT_04000208;
  DAT_04000208 = 0;
  if (DAT_02002125 == '\0') {
    uVar4 = 0;
    do {
      uVar3 = 0;
      if (bVar1 != 0) {
        uVar2 = (uint)DAT_02001793;
        do {
          *(undefined2 *)(uVar3 * 2 + uVar4 * 8 + param_1) = 0;
          uVar3 = uVar3 + 1 & 0xff;
        } while (uVar3 < uVar2);
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 8);
    DAT_0200179c = 1;
  }
  else {
    uVar4 = 0;
    do {
      uVar3 = 0;
      if (bVar1 != 0) {
        uVar2 = (uint)DAT_02002124;
        uVar5 = (uint)DAT_02001793;
        do {
          *(undefined2 *)(uVar3 * 2 + uVar4 * 8 + param_1) =
               (&DAT_020019a4)[uVar3 * 0xf0 + uVar4 * 0x1e + uVar2];
          uVar3 = uVar3 + 1 & 0xff;
        } while (uVar3 < uVar5);
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 8);
    DAT_02002125 = DAT_02002125 + -1;
    DAT_02002124 = DAT_02002124 + 1;
    if (0x1d < DAT_02002124) {
      DAT_02002124 = 0;
    }
    DAT_0200179c = 0;
  }
  DAT_04000208 = DAT_02000004;
  return in_lr;
}

