// sub_080236B4 at 0x080236B4 (thumb)

longlong sub_080236B4(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 1);
  if (cVar1 == '\0') {
    uVar3 = *(ushort *)(*(int *)(param_1 + 0xc) + 2);
    *(char *)(param_1 + 3) = (char)uVar3;
    if (((DAT_02030104 & 0x40) == 0) &&
       (((int)(uint)(byte)(&DAT_02002430)[((uint)uVar3 << 0x18) >> 0x1b] >> (uVar3 & 7) & 1U) != 0))
    {
      DAT_020301a8 = DAT_020301a8 | 0x80;
    }
  }
  else if (cVar1 == '\x01') {
    bVar2 = (&DAT_02002430)[*(byte *)(param_1 + 3) >> 3];
    uVar4 = *(byte *)(param_1 + 3) & 7;
    if (((int)(uint)bVar2 >> uVar4 & 1U) == 0) {
      (&DAT_02002430)[*(byte *)(param_1 + 3) >> 3] = bVar2 | (byte)(1 << uVar4);
      sub_08008500();
    }
    DAT_020301a8 = DAT_020301a8 & 0xff7f;
  }
  return (ulonglong)in_lr << 0x20;
}

