// sub_080947A8 at 0x080947A8 (thumb)

undefined4 sub_080947A8(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  byte abStack_28 [4];
  int local_24;
  
  iVar9 = *(int *)(param_1 + 8);
  sub_080C8D70(abStack_28,&DAT_080c9498,2);
  if (*(byte *)(iVar9 + 0xc) < 2) {
    if (*(char *)(iVar9 + 0xe) == '\0') {
      DAT_02004f30 = DAT_02004f30 & 0xdbff;
      *(char *)(iVar9 + 0xe) = *(char *)(iVar9 + 0xe) + '\x01';
    }
    else {
      DAT_02004f30 = DAT_02004f30 | 0x2400;
      iVar2 = *(int *)(iVar9 + 0x50) - *(int *)(param_2 + 0xc);
      sVar1 = -((short)((uint)iVar2 >> 8) + 10);
      uVar3 = (iVar2 >> 8) + 0x2a;
      iVar2 = (*(byte *)(iVar9 + 0x12) >> 2) + 1;
      iVar4 = FUN_0800061c(0x140);
      if (iVar4 != 0) {
        FUN_0800065c(0x50,iVar4,0x140);
        iVar7 = 0;
        uVar5 = uVar3 * 0x10000;
        if (-1 < (int)uVar5) {
          local_24 = iVar2;
          iVar8 = 0;
          uVar6 = uVar5;
          do {
            *(short *)(((int)(uVar3 << 0x10) >> 0xf) + iVar4) =
                 (sVar1 + (short)iVar8) - (short)iVar7;
            uVar6 = uVar6 + iVar2 * -0x10000;
            iVar8 = iVar8 + iVar2;
            iVar7 = iVar7 + 1;
            if (0x1f < iVar7) break;
            uVar3 = uVar6 >> 0x10;
          } while (-1 < (int)uVar6);
        }
        iVar7 = 0;
        if ((int)uVar5 >> 0x10 < 0xa0) {
          iVar8 = 0;
          do {
            *(short *)(((int)uVar5 >> 0xf) + iVar4) = (sVar1 - (short)iVar8) + (short)iVar7;
            uVar5 = uVar5 + iVar2 * 0x10000;
            iVar8 = iVar8 + iVar2;
            iVar7 = iVar7 + 1;
            if (0x1f < iVar7) break;
          } while ((int)uVar5 >> 0x10 < 0xa0);
        }
        DAT_03000530 = &DAT_0400001a;
        DAT_03000534 = 0x1010001;
        DAT_0300052c = iVar4;
      }
      DAT_02004f44 = -(ushort)abStack_28[*(byte *)(iVar9 + 0x11)];
      DAT_02004f46 = 0;
    }
  }
  else {
    DAT_02004f30 = DAT_02004f30 & 0xdbff;
  }
  return in_lr;
}

