// sub_0801B6F0 at 0x0801B6F0 (thumb)

undefined4 sub_0801B6F0(int param_1)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  sub_08007638();
  puVar2 = (uint *)sub_08000A70(0x280);
  if (puVar2 != (uint *)0x0) {
    DAT_03001708 = &DAT_04000018;
    DAT_0300170c = 0xa6600001;
    uVar1 = *(ushort *)(param_1 + 0x38);
    DAT_03001704 = puVar2;
    do {
      *puVar2 = *(int *)(param_1 + 0x34) +
                ((int)((uint)*(ushort *)
                              ((int)&DAT_08128c10 +
                              ((iVar3 * 0x20 + (uint)*(byte *)(param_1 + 0x12)) * 0x1000000 >> 0x17)
                              ) << 0x10) >> 0x18) & 0xffffU | (uint)uVar1 << 0x10;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xa0);
  }
  return in_lr;
}

