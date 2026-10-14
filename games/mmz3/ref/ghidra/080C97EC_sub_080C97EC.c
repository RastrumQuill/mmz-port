// sub_080C97EC at 0x080C97EC (thumb)

undefined4 sub_080C97EC(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 8);
  iVar2 = sub_08001B60(0x140);
  if (iVar2 != 0) {
    sub_08001BA4(0,iVar2,0x140);
    DAT_03002ac0 = 0xffff;
    iVar6 = *(int *)(iVar8 + 0x78) + 1;
    if (iVar6 < *(int *)(iVar8 + 0x80)) {
      iVar3 = *(int *)(iVar8 + 0x5c);
      iVar5 = *(int *)(iVar8 + 100);
      puVar7 = (ushort *)(iVar6 * 2 + iVar2);
      do {
        iVar4 = iVar6 - *(int *)(iVar8 + 0x78);
        sVar1 = (short)*(undefined4 *)(iVar8 + 0x74);
        *puVar7 = sVar1 - (short)((uint)(iVar4 * iVar5) >> 8) & 0xffU |
                  (sVar1 - (short)((uint)(iVar4 * iVar3) >> 8)) * 0x100;
        puVar7 = puVar7 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar8 + 0x80));
    }
    DAT_03001708 = 0x4000042;
    DAT_0300170c = 0xa2600001;
    DAT_03001704 = iVar2;
  }
  return in_lr;
}

