// sub_080101DC at 0x080101DC (thumb)

undefined4 sub_080101DC(int param_1)

{
  short sVar1;
  uint uVar2;
  ushort *puVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  uVar5 = *(uint *)(param_1 + 0x5c) & 0xffff;
  iVar6 = 0x20;
  sVar1 = (short)*(undefined4 *)(param_1 + 0x38) + -0x1e0;
  uVar2 = (*(uint *)(param_1 + 0x5c) << 0x10) >> 0x14;
  *(undefined2 *)(&DAT_020023cc + uVar2) = 0;
  psVar4 = (short *)((int)&DAT_020023cc + uVar2 * 4 + 2);
  *psVar4 = sVar1;
  puVar3 = &DAT_020023c4 + uVar2;
  *puVar3 = *puVar3 & 0xfffc | 2;
  if ((char)DAT_0202f4aa == '\0') {
    *psVar4 = *psVar4 + -0x80;
  }
  else if ((char)DAT_0202f4aa == '\x01') {
    *psVar4 = *psVar4 + -0x40;
    iVar6 = 0x40;
  }
  else if ((char)DAT_0202f4aa == '\x02') {
    *psVar4 = *psVar4 + -0x20;
  }
  else if ((char)DAT_0202f4aa == '\x04') {
    *psVar4 = *psVar4 + 0x20;
    *puVar3 = *puVar3 & 0xfffc | 1;
  }
  iVar6 = (0xa0 - iVar6) - (int)sVar1;
  if (iVar6 * 0x10000 >> 0x10 < 0xa0) {
    DAT_020023c0 = (ushort)(uVar5 << 8) | DAT_020023c0;
    DAT_0200241a = (ushort)((uint)(iVar6 * 0x10000) >> 8) | 0xa0;
  }
  else {
    DAT_020023c0 = DAT_020023c0 & ~(ushort)(uVar5 << 8);
  }
  return in_lr;
}

