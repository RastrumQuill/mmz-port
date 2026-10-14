// sub_0800F4A8 at 0x0800F4A8 (thumb)

undefined4 sub_0800F4A8(int param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar3 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar1] = (ushort)uVar3 | 0x8047;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x200;
    sub_081284E4(&DAT_08b4bf60,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_081284E4(&DAT_08b4c768,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar1] & 0x1f00) * 8,0x200);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x6e) = 0;
    DAT_0202dada._0_1_ = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  psVar2 = (short *)(param_1 + 0x68);
  if ((*psVar2 == 0) && (*(int *)(DAT_0202dbf0 + 0x58) < 0x128000)) {
    sub_08002B10(0x79);
    *psVar2 = 0x79;
  }
  if ((*psVar2 == 0x79) && (0x127fff < *(int *)(DAT_0202dbf0 + 0x58))) {
    sub_08002B5C(0x79);
    *psVar2 = 0;
  }
  if (DAT_02001286 >> 8 != 4) {
    return in_lr;
  }
  if ((DAT_02001286 & 0xff) != 5) {
    return in_lr;
  }
  puVar4 = (ushort *)(param_1 + 0x6e);
  *(ushort *)(param_1 + 0x6c) = *puVar4;
  *puVar4 = (ushort)*(undefined4 *)(param_1 + 0x34);
  iVar6 = (uint)*puVar4 - (uint)*(ushort *)(param_1 + 0x6c);
  if (iVar6 < -0x100) {
    iVar6 = *(int *)(param_1 + 0x4c) + -0x40;
  }
  else {
    if (iVar6 < 0x101) goto LAB_0800f5f2;
    iVar6 = *(int *)(param_1 + 0x4c) + 0x40;
  }
  *(int *)(param_1 + 0x4c) = iVar6;
LAB_0800f5f2:
  iVar5 = (int)((uint)*puVar4 + *(int *)(param_1 + 0x4c)) >> 4;
  iVar6 = iVar5;
  if (iVar5 < 0) {
    iVar6 = iVar5 + 7;
  }
  DAT_0202dada._0_1_ = (char)iVar5 + (char)(iVar6 >> 3) * -8;
  return in_lr;
}

