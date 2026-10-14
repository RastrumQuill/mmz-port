// sub_0806D030 at 0x0806D030 (thumb)

undefined4 sub_0806D030(int param_1)

{
  ushort uVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1100);
    sub_08006E08(param_1 + 0x74,&DAT_0833e628);
    iVar4 = param_1 + 0x54;
    pbVar2 = (byte *)(param_1 + 0xbc);
    bVar3 = *pbVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    sub_080B0ACC(iVar4,&DAT_0833e640,0,bVar3);
    bVar3 = *pbVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    sub_080B0ACC(iVar4,&DAT_0833e65c,0,bVar3);
    bVar3 = *pbVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    sub_080B0ACC(iVar4,&DAT_0833e678,0,bVar3);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = *(ushort *)
             (&DAT_0202e020 +
             (*(byte *)(param_1 + 0x10) & 1) * 2 + (uint)(*(byte *)(param_1 + 0x10) >> 1) * 4);
  }
  else {
    uVar1 = (ushort)(byte)(&DAT_0202e020)
                          [(*(byte *)(param_1 + 0x10) & 1) +
                           (uint)(*(byte *)(param_1 + 0x10) >> 1) * 4];
  }
  if (uVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

