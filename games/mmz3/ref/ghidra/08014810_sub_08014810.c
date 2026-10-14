// sub_08014810 at 0x08014810 (thumb)

undefined4 sub_08014810(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  uVar1 = DAT_0202f4b8;
  uVar2 = (uint)(DAT_0202f4b4 << 8) >> 0x10;
  uVar3 = (uint)(DAT_0202f4c4 << 8) >> 0x10;
  uVar8 = (uint)(DAT_0202f4c8 << 0xf) >> 0x17;
  puVar4 = (uint *)sub_08001B60(0x280);
  if (puVar4 != (uint *)0x0) {
    DAT_03001708 = &DAT_04000018;
    DAT_0300170c = 0xa6600001;
    iVar6 = 0;
    puVar5 = puVar4;
    DAT_03001704 = puVar4;
    do {
      if ((iVar6 + uVar8 & 0x100) == 0) {
        *puVar5 = (uVar8 + 0x100) * 0x10000 | uVar3;
      }
      else {
        *puVar5 = uVar8 << 0x10 | uVar3;
      }
      puVar5 = puVar5 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0xa0);
    iVar6 = (int)((uVar1 & 0xffff00) << 8) >> 0x10;
    if ((iVar6 < 0x100) || (7 < *(byte *)(param_1 + 0xe))) {
      iVar7 = 0;
      do {
        if ((iVar7 + iVar6 & 0x100U) == 0) {
          *puVar4 = iVar6 << 0x10 | uVar2;
        }
        else if ((7 < *(byte *)(param_1 + 0xe)) && (0 < iVar6)) {
          *puVar4 = (iVar6 + 0x100) * 0x10000 | uVar2;
        }
        puVar4 = puVar4 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0xa0);
    }
  }
  return in_lr;
}

