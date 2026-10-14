// sub_0802ABC8 at 0x0802ABC8 (thumb)

undefined4 sub_0802ABC8(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  undefined *puVar7;
  undefined4 in_lr;
  
  uVar3 = (uint)DAT_0202e910;
  uVar5 = (uint)(byte)(&DAT_0884f342)[uVar3];
  if (((DAT_0202e8c5 & 1) == 0) &&
     (iVar4 = uVar5 * 0x10, uVar3 == (int)*(short *)(&DAT_0884f0a2 + iVar4))) {
    puVar7 = &DAT_0884f0b0 + iVar4;
    do {
      if (((((DAT_02000c80 & 0x7f) == (int)*(short *)(&DAT_0884f0a4 + iVar4)) &&
           ((ushort)*(byte *)(param_1 + 9) == *(ushort *)(&DAT_0884f0aa + iVar4))) &&
          ((int)*(char *)(param_1 + 8) == (int)*(short *)(&DAT_0884f0a8 + iVar4))) &&
         ((*(ushort *)(&DAT_0884f0ac + iVar4) == 0xffff ||
          ((ushort)*(byte *)(param_1 + 0x10) == *(ushort *)(&DAT_0884f0ac + iVar4))))) {
        psVar6 = (short *)(&DAT_0884f0a6 + iVar4);
        cVar1 = (&DAT_0202e8c8)[*psVar6];
        if (cVar1 != -1) {
          (&DAT_0202e8c8)[*psVar6] = cVar1 + '\x01';
        }
        if ((ushort)(byte)(&DAT_0202e8c8)[*psVar6] != *(ushort *)(&DAT_0884f0ae + iVar4)) {
          return in_lr;
        }
        sVar2 = sub_0801CC20(DAT_0202eda4,1,*puVar7,0);
        if (sVar2 == 0) {
          return in_lr;
        }
        (&DAT_0202e8c8)[*psVar6] = 0;
        return in_lr;
      }
      puVar7 = puVar7 + 0x10;
      uVar5 = uVar5 + 1;
      iVar4 = uVar5 * 0x10;
    } while (uVar3 == (int)*(short *)(&DAT_0884f0a2 + iVar4));
  }
  return in_lr;
}

