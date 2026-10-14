// sub_08013160 at 0x08013160 (thumb)

undefined4 sub_08013160(int param_1)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08007638();
  puVar2 = (uint *)sub_08000A70(0x280);
  if (puVar2 != (uint *)0x0) {
    DAT_03001708 = &DAT_04000018;
    DAT_0300170c = 0xa6600001;
    uVar1 = *(ushort *)(param_1 + 0x38);
    iVar3 = (uint)uVar1 << 5;
    iVar4 = 0x9f;
    DAT_03001704 = puVar2;
    do {
      *puVar2 = *(int *)(param_1 + 0x34) +
                ((int)((uint)*(ushort *)
                              ((int)&DAT_08128c10 +
                              (((uint)*(byte *)(param_1 + 0x12) + iVar3) * 0x1000000 >> 0x17)) <<
                      0x10) >> 0x18) & 0xffffU | (uint)uVar1 << 0x10;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + 0x20;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return in_lr;
}

