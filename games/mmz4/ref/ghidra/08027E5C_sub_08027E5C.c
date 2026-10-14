// sub_08027E5C at 0x08027E5C (thumb)

longlong sub_08027E5C(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint in_lr;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint uStack_20;
  
  puVar2 = *(uint **)(*(int *)(param_1 + 0xc) + 4);
  local_48 = *puVar2;
  uStack_44 = puVar2[1];
  uStack_40 = puVar2[2];
  local_3c = puVar2[3];
  uStack_38 = puVar2[4];
  uStack_34 = puVar2[5];
  local_30 = puVar2[6];
  local_2c = puVar2[7];
  local_28 = puVar2[8];
  local_24 = puVar2[9];
  uStack_20 = puVar2[10];
  if (DAT_0202ea10 == '\0') {
    sub_08006D80(0,&stack0xffffffe4);
  }
  uVar1 = local_28;
  if ((((DAT_02000c80 & 0x7f) == 4) &&
      (iVar4 = *(int *)((local_48 >> 0x10 & 0xff) * 0x10 + 0x10 + param_1), iVar4 != 0)) &&
     ((int)local_28 < 0x78000)) {
    iVar3 = FUN_081288bc(*(int *)(iVar4 + 0x54) + -0xf000,0x3c000);
    local_2c = iVar3 * 0x3c000 + local_2c;
    iVar4 = FUN_081288bc(*(int *)(iVar4 + 0x54) + -0xf000,0x3c000);
    local_28 = iVar4 * 0x3c000 + uVar1;
  }
  sub_0801F924(&DAT_0202e9f8,&local_48);
  if ((((char)local_48 != '\x01') &&
      (iVar4 = *(int *)((local_48 >> 0x10 & 0xff) * 0x10 + 0x10 + param_1), iVar4 != 0)) &&
     (DAT_0202ea40 = iVar4 + 0x54, (local_48 & 0x800) != 0)) {
    DAT_0202ea28 = *(undefined4 *)(iVar4 + 0x54);
    DAT_0202ea2c = *(undefined4 *)(iVar4 + 0x58);
  }
  return (ulonglong)in_lr << 0x20;
}

