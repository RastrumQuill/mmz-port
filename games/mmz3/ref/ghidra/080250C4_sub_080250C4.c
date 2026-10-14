// sub_080250C4 at 0x080250C4 (thumb)

undefined4 sub_080250C4(int param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  undefined4 in_lr;
  
  uVar3 = (uint)DAT_020301a0;
  uVar5 = (uint)(byte)(&DAT_0835a74a)[uVar3];
  if (((DAT_02030104 & 0x10) == 0) &&
     (iVar4 = uVar5 * 0x10, uVar3 == (int)*(short *)(&DAT_0835a4aa + iVar4))) {
    psVar7 = (short *)(&DAT_0835a4b8 + iVar4);
    do {
      if (((((DAT_02002650 & 0x7f) == (int)*(short *)(&DAT_0835a4ac + iVar4)) &&
           ((ushort)*(byte *)(param_1 + 9) == *(ushort *)(&DAT_0835a4b2 + iVar4))) &&
          ((int)*(char *)(param_1 + 8) == (int)*(short *)(&DAT_0835a4b0 + iVar4))) &&
         ((*(ushort *)(&DAT_0835a4b4 + iVar4) == 0xffff ||
          ((ushort)*(byte *)(param_1 + 0x10) == *(ushort *)(&DAT_0835a4b4 + iVar4))))) {
        psVar6 = (short *)(&DAT_0835a4ae + iVar4);
        cVar1 = (&DAT_0203010c)[*psVar6];
        if (cVar1 != -1) {
          (&DAT_0203010c)[*psVar6] = cVar1 + '\x01';
        }
        if ((ushort)(byte)(&DAT_0203010c)[*psVar6] == *(ushort *)(&DAT_0835a4b6 + iVar4)) {
          if (((int)(*(byte *)(DAT_0203df90 + ((int)((int)*psVar7 - 1U) >> 2)) & 0xf) >>
               ((int)*psVar7 - 1U & 3) & 1U) != 0) {
            return in_lr;
          }
          sVar2 = sub_08017420(DAT_02030634,1,*(undefined *)psVar7,0);
          if (sVar2 == 0) {
            iVar4 = sub_080E0A70(*(undefined *)psVar7,param_2,0);
            if (iVar4 == 0) {
              (&DAT_0203010c)[*psVar6] = (&DAT_0203010c)[*psVar6] + -1;
              return in_lr;
            }
            sVar2 = *psVar6;
          }
          else {
            sVar2 = *psVar6;
          }
          (&DAT_0203010c)[sVar2] = 0;
          return in_lr;
        }
        return in_lr;
      }
      psVar7 = psVar7 + 8;
      uVar5 = uVar5 + 1;
      iVar4 = uVar5 * 0x10;
    } while (uVar3 == (int)*(short *)(&DAT_0835a4aa + iVar4));
  }
  return in_lr;
}

