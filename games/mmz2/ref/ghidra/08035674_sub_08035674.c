// sub_08035674 at 0x08035674 (thumb)

undefined4 sub_08035674(undefined4 param_1,int param_2,int param_3)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (DAT_0202e140 == '\0') {
    if (DAT_0202ec0e != -1) {
      DAT_0202ec0e = DAT_0202ec0e + 1;
    }
    if (((DAT_0202ebb4 & 2) == 0) && (*(char *)(param_2 + 0x1fc) != '\b')) {
      uVar2 = (uint)(byte)(&DAT_083359c0)[param_3] + (uint)*(ushort *)(param_2 + 0x21c);
      if (0xffff < uVar2) {
        uVar2 = 0xffff;
      }
      *(short *)(param_2 + 0x21c) = (short)uVar2;
      uVar3 = (uint)*(byte *)(param_2 + 0x223);
      if (uVar3 < 4) {
        puVar1 = (ushort *)(&DAT_083359c4 + uVar3 * 2);
        do {
          if (uVar2 < *puVar1) break;
          puVar1 = puVar1 + 1;
          uVar3 = uVar3 + 1;
        } while (uVar3 < 4);
      }
      if (*(byte *)(param_2 + 0x223) != uVar3) {
        *(char *)(param_2 + 0x223) = (char)uVar3;
        sub_080DEF5C(*(undefined2 *)(&DAT_083359ce + uVar3 * 2),0x5a);
      }
    }
  }
  return in_lr;
}

