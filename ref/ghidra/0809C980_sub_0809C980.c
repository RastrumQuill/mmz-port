// sub_0809C980 at 0x0809C980 (thumb)

undefined4 sub_0809C980(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  bVar1 = *(byte *)(*(char *)(param_1 + 0x71) * 4 +
                   *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x46) = bVar1;
  if ((*(byte *)(param_1 + 0xb) & 4) != 0) {
    iVar2 = (uint)*(ushort *)(param_1 + 0xb8) * 4;
    bVar1 = *(byte *)((uint)bVar1 * 8 + *(int *)(&DAT_08591500 + iVar2) + 5);
    if ((uint)bVar1 != (uint)*(ushort *)(param_1 + 0xba)) {
      puVar3 = (undefined *)
               ((int)(&DAT_0852c000 + iVar2) + (uint)bVar1 * 0x14 + *(int *)(&DAT_0852c000 + iVar2))
      ;
      sub_08001574(puVar3,((uint)(ushort)(&DAT_02023170)[*(byte *)(param_1 + 9)] -
                          (uint)(*(ushort *)(puVar3 + 6) >> 6)) * 0x20 + 0x10000);
      sub_0800179C(puVar3 + 0xc,
                   ((uint)(byte)(&DAT_02023120)[*(byte *)(param_1 + 9)] - (uint)(byte)puVar3[0x13])
                   * 0x20 + 0x200);
      *(ushort *)(param_1 + 0xba) = (ushort)bVar1;
    }
  }
  return in_lr;
}

