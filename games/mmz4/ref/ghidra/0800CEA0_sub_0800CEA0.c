// sub_0800CEA0 at 0x0800CEA0 (thumb)

undefined4 sub_0800CEA0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  iVar2 = sub_08000A70(0x280);
  if (iVar2 != 0) {
    DAT_03001708 = &DAT_04000018;
    DAT_0300170c = 0xa6600001;
    iVar3 = *(int *)(param_1 + 0x34);
    sVar1 = *(short *)(param_1 + 0x38);
    DAT_03001704 = iVar2;
    do {
      *(uint *)(uVar4 * 4 + iVar2) =
           (((iVar3 << 0xf) >> 0x10) + ((int)(uVar4 + (int)sVar1) >> 2)) * 0x10000 >> 0x10 & 0xffffU
           | (int)sVar1 << 0x10;
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 0xa0);
  }
  return in_lr;
}

