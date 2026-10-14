// sub_080DCF68 at 0x080DCF68 (thumb)

undefined8 sub_080DCF68(int param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x75b8) + 0x20a + (uint)param_2);
  if (bVar1 - 1 < 0x51) {
    iVar2 = sub_080DD070(*(int *)(param_1 + 0x75b8),(uint)bVar1);
    uVar5 = (uint)(iVar2 << 0x10) >> 0x18;
    uVar3 = (uVar5 << 0x10) >> 0xf;
    *(ushort *)((int)&DAT_0202e590 + uVar3) = (ushort)param_2 * 0x80 + 0x280;
    *(ushort *)((int)&DAT_0202e390 + uVar3) = param_2 + 6;
    sub_08002638(&DAT_08432d00 + uVar5 * 5,
                 ((uint)(ushort)(&DAT_0202e590)[uVar5] -
                 (uint)((ushort)(&DAT_08432d06)[uVar5 * 10] >> 6)) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08432d0c + uVar5 * 0x14,
                 ((uint)(ushort)(&DAT_0202e390)[uVar5] - (uint)(byte)(&DAT_08432d13)[uVar5 * 0x14])
                 * 0x20 + 0x200);
    iVar4 = sub_08006B84(DAT_0202f094);
    if (iVar4 != 0) {
      *(undefined *)(iVar4 + 0x25) = 0x10;
      *(undefined *)(iVar4 + 9) = 10;
      *(undefined4 *)(iVar4 + 0x14) = 0x80dccf1;
      *(undefined2 *)(iVar4 + 0x20) = 0;
      *(undefined *)(iVar4 + 0x22) = 0;
      *(undefined *)(iVar4 + 0x10) = 1;
      *(byte *)(iVar4 + 0x11) = param_2;
      *(byte *)(iVar4 + 0x74) = bVar1;
      *(short *)(iVar4 + 0x78) = (short)iVar2;
      *(int *)(iVar4 + 0x28) = param_1;
    }
  }
  else {
    iVar4 = 0;
  }
  return CONCAT44(in_lr,iVar4);
}

