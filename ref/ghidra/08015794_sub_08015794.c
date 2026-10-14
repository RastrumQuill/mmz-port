// sub_08015794 at 0x08015794 (thumb)

undefined4 sub_08015794(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  undefined4 in_lr;
  
  uVar2 = (uint)DAT_02022b60;
  uVar3 = (uint)(byte)(&DAT_082a7f02)[uVar2];
  iVar5 = uVar3 * 0x10;
  if (uVar2 == (int)*(short *)(&DAT_082a7d32 + iVar5)) {
    psVar6 = (short *)(&DAT_082a7d40 + iVar5);
    do {
      if (((ushort)*(byte *)(param_1 + 9) == *(ushort *)(&DAT_082a7d3a + iVar5)) &&
         ((int)*(char *)(param_1 + 8) == (int)*(short *)(&DAT_082a7d38 + iVar5))) {
        if ((DAT_0200520c & 0x7f) != (int)*(short *)(&DAT_082a7d34 + iVar5)) {
          return in_lr;
        }
        if ((*(ushort *)(&DAT_082a7d3c + iVar5) != 0xffff) &&
           ((ushort)*(byte *)(param_1 + 0x10) != *(ushort *)(&DAT_082a7d3c + iVar5))) {
          return in_lr;
        }
        cVar1 = (&DAT_02022aec)[*(short *)(&DAT_082a7d36 + iVar5)];
        if (cVar1 != -1) {
          (&DAT_02022aec)[*(short *)(&DAT_082a7d36 + iVar5)] = cVar1 + '\x01';
        }
        if ((ushort)(byte)(&DAT_02022aec)[*(short *)(&DAT_082a7d36 + iVar5)] !=
            *(ushort *)(&DAT_082a7d3e + iVar5)) {
          return in_lr;
        }
        iVar4 = (int)*psVar6;
        iVar5 = iVar4;
        if (iVar4 < 0) {
          iVar5 = iVar4 + 7;
        }
        if (((int)(uint)(byte)(&DAT_0202b744)[iVar5 >> 3] >>
             ((iVar4 + (iVar5 >> 3) * -8) * 0x10000 >> 0x10 & 0xffU) & 1U) != 0) {
          return in_lr;
        }
        sub_080B596C(*(undefined *)psVar6,*param_2,param_2[1]);
        return in_lr;
      }
      psVar6 = psVar6 + 8;
      uVar3 = uVar3 + 1;
      iVar5 = uVar3 * 0x10;
    } while (uVar2 == (int)*(short *)(&DAT_082a7d32 + iVar5));
  }
  return in_lr;
}

