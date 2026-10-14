// sub_080349E8 at 0x080349E8 (thumb)

undefined4 sub_080349E8(int param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x28) + 0x18);
  bVar2 = (byte)uVar1 & 0x30;
  if ((uVar1 & 0x30) == 0) {
    *(byte *)(param_1 + 0xd) = bVar2;
    *(byte *)(param_1 + 0xe) = bVar2;
  }
  if ((*(ushort *)(*(int *)(param_1 + 0x28) + 0x1a) & 2) != 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

