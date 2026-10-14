// sub_0800E2AC at 0x0800E2AC (thumb)

undefined4 sub_0800E2AC(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  uVar4 = *(uint *)(param_1 + 0x5c);
  iVar8 = *(int *)(param_1 + 0x38) + -0x3c0 >> 2;
  uVar5 = (uVar4 << 0x10) >> 0x14;
  *(short *)(&DAT_020023cc + uVar5) = (short)(*(int *)(param_1 + 0x34) >> 2);
  *(short *)((int)&DAT_020023cc + uVar5 * 4 + 2) = (short)iVar8;
  if ((iVar8 < 0x58) && (piVar1 = (int *)sub_08001B60(0x280), piVar1 != (int *)0x0)) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    DAT_03001704 = piVar1;
    if (iVar8 < 1) {
      piVar3 = piVar1 + 0x57;
      do {
        *piVar3 = 0;
        piVar3 = piVar3 + -1;
      } while ((int)piVar1 <= (int)piVar3);
      iVar7 = 0x58;
    }
    else {
      iVar2 = 0x58 - iVar8;
      iVar7 = 0;
      if (0 < iVar2) {
        piVar3 = piVar1;
        iVar6 = iVar2;
        do {
          *piVar3 = iVar8 << 0x10;
          piVar3 = piVar3 + 1;
          iVar6 = iVar6 + -1;
          iVar7 = iVar2;
        } while (iVar6 != 0);
      }
    }
    if (iVar8 + iVar7 < 0x58) {
      iVar2 = iVar7 * -0x10000 + 0x580000;
      piVar3 = piVar1 + iVar7;
      do {
        *piVar3 = iVar2;
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 + -0x10000;
        iVar7 = iVar7 + 1;
      } while (iVar8 + iVar7 < 0x58);
    }
    if (iVar7 < 0xa0) {
      piVar1 = piVar1 + iVar7;
      do {
        *piVar1 = (&DAT_020023cc)[(uVar4 & 0xffff) >> 4];
        piVar1 = piVar1 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0xa0);
    }
  }
  return in_lr;
}

