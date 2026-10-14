// sub_080D3048 at 0x080D3048 (thumb)

undefined4 sub_080D3048(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(uint *)(param_1 + 100) = (uint)DAT_0202fab2;
    *(uint *)(param_1 + 0x68) = (uint)DAT_0202f8b2;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
    DAT_0202fab2 = 0x305;
    DAT_0202f8b2 = 8;
    sub_0800393C(&DAT_085d7f4c,0xf7a0);
    sub_08003E14(&DAT_085d7f58,(DAT_0202f8b2 - 6) * 0x20 + 0x200);
    sub_08017700(param_1,0x5100);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_080C50F4(3,0,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  iVar2 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)iVar2;
  iVar3 = *(int *)(param_1 + 0x5c) + 0x200;
  *(int *)(param_1 + 0x5c) = iVar3;
  iVar3 = iVar3 + *(short *)((int)&DAT_080fe64c + (iVar2 * 0x2000000 + 0x40000000U >> 0x17)) * 2;
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x60) +
       *(short *)((int)&DAT_080fe64c + ((uint)(iVar2 * 0x4000000) >> 0x17)) * 4;
  if (DAT_020302c0 + 0x97ff <= iVar3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    DAT_0202fab2 = (ushort)*(undefined4 *)(param_1 + 100);
    DAT_0202f8b2 = (ushort)*(undefined4 *)(param_1 + 0x68);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

