// sub_08068FD0 at 0x08068FD0 (thumb)

undefined4 sub_08068FD0(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xb4) = 0x13;
    *(undefined2 *)(param_1 + 0xb6) = 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  pbVar4 = (byte *)(param_1 + 0xb4);
  puVar3 = (ushort *)(param_1 + 0xb6);
  iVar2 = (uint)*puVar3 * (uint)*(ushort *)(&DAT_0833e086 + (uint)*(byte *)(param_1 + 0x10) * 2);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  sub_080693E4(param_1,(uint)*pbVar4 * (*(byte *)(param_1 + 0x10) + 1) - 0x40 & 0xff,
               (uint)(iVar2 << 8) >> 0x10);
  *pbVar4 = *pbVar4 - 1;
  uVar1 = *puVar3;
  *puVar3 = uVar1 - 0x10;
  if ((ushort)(uVar1 - 0x10) < 0x11) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

