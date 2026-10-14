// sub_081057E8 at 0x081057E8 (thumb)

undefined4 sub_081057E8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    iVar3 = (uint)*(byte *)(param_1 + 0x11) * 8;
    sVar1 = *(short *)(&DAT_08868e08 + iVar3);
    (&DAT_0202e040)[sVar1] = *(undefined2 *)(&DAT_08868e0c + iVar3);
    (&DAT_0202de40)[sVar1] = *(byte *)(param_1 + 0x11) + 4;
    iVar3 = (int)*(short *)(&DAT_08868e08 + (uint)*(byte *)(param_1 + 0x11) * 8);
    sub_08001D30(&DAT_08c44000 + iVar3 * 5,
                 ((uint)(ushort)(&DAT_0202e040)[iVar3] -
                 (uint)((ushort)(&DAT_08c44006)[iVar3 * 10] >> 6)) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c4400c + iVar3 * 0x14,
                 ((uint)(ushort)(&DAT_0202de40)[iVar3] - (uint)(byte)(&DAT_08c44013)[iVar3 * 0x14])
                 * 0x20 + 0x200);
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_08868e0a + (uint)*(byte *)(param_1 + 0x11) * 8));
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

