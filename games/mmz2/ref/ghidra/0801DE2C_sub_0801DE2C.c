// sub_0801DE2C at 0x0801DE2C (thumb)

undefined4 sub_0801DE2C(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  undefined4 in_lr;
  
  uVar2 = (uint)DAT_0202ec30;
  uVar3 = (uint)(byte)(&DAT_08333682)[uVar2];
  iVar5 = uVar3 * 0x10;
  if (uVar2 == (int)*(short *)(&DAT_08333482 + iVar5)) {
    psVar6 = (short *)(&DAT_08333490 + iVar5);
    do {
      if (((ushort)*(byte *)(param_1 + 9) == *(ushort *)(&DAT_0833348a + iVar5)) &&
         ((int)*(char *)(param_1 + 8) == (int)*(short *)(&DAT_08333488 + iVar5))) {
        if ((DAT_020011d0 & 0x7f) != (int)*(short *)(&DAT_08333484 + iVar5)) {
          return in_lr;
        }
        if ((*(ushort *)(&DAT_0833348c + iVar5) != 0xffff) &&
           ((ushort)*(byte *)(param_1 + 0x10) != *(ushort *)(&DAT_0833348c + iVar5))) {
          return in_lr;
        }
        cVar1 = (&DAT_0202ebc0)[*(short *)(&DAT_08333486 + iVar5)];
        if (cVar1 != -1) {
          (&DAT_0202ebc0)[*(short *)(&DAT_08333486 + iVar5)] = cVar1 + '\x01';
        }
        if ((ushort)(byte)(&DAT_0202ebc0)[*(short *)(&DAT_08333486 + iVar5)] !=
            *(ushort *)(&DAT_0833348e + iVar5)) {
          return in_lr;
        }
        iVar4 = (int)*psVar6;
        iVar5 = iVar4;
        if (iVar4 < 0) {
          iVar5 = iVar4 + 7;
        }
        if (((int)(uint)*(byte *)(DAT_02036e98 + 0x228 + (iVar5 >> 3)) >>
             ((iVar4 + (iVar5 >> 3) * -8) * 0x10000 >> 0x10 & 0xffU) & 1U) != 0) {
          return in_lr;
        }
        sub_080D6B54(*(undefined *)psVar6,*param_2,param_2[1]);
        return in_lr;
      }
      psVar6 = psVar6 + 8;
      uVar3 = uVar3 + 1;
      iVar5 = uVar3 * 0x10;
    } while (uVar2 == (int)*(short *)(&DAT_08333482 + iVar5));
  }
  return in_lr;
}

