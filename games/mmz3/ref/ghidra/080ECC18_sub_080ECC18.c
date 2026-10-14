// sub_080ECC18 at 0x080ECC18 (thumb)

undefined4 sub_080ECC18(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  puVar3 = (ushort *)(param_1 + 0x23c);
  uVar1 = *puVar3;
  *puVar3 = uVar1 + 1;
  if (0x160 < (ushort)(uVar1 + 1)) {
    puVar2 = &DAT_085a4a80;
    iVar4 = (int)(*puVar3 - 0x160) >> 1;
    if (0x20 < iVar4) {
      iVar4 = 0x20;
    }
    iVar4 = 0x20 - iVar4;
    puVar3 = &DAT_03002b00;
    iVar5 = 0xf;
    do {
      uVar1 = *puVar2;
      *puVar3 = (ushort)((int)(iVar4 * (uVar1 & 0x1f)) >> 5) |
                (ushort)(((int)(iVar4 * (uVar1 >> 5 & 0x1f)) >> 5) << 5) |
                (ushort)(((int)(iVar4 * (uVar1 >> 10 & 0x1f)) >> 5) << 10);
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  uVar1 = *(ushort *)(param_1 + 0x23c);
  sub_08004340(0x12,&DAT_085222a0,(uVar1 >> 1 & 3) + 0x82 & 0xff,0,(uVar1 & 1) << 5);
  DAT_020023d0._2_2_ = 0;
  if ((*(ushort *)(param_1 + 0x23c) & 1) == 0) {
    DAT_020023d0._2_2_ = 0x100;
  }
  return in_lr;
}

