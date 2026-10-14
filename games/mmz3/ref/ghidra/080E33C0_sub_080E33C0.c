// sub_080E33C0 at 0x080E33C0 (thumb)

undefined4 sub_080E33C0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080BF7B4(param_1 + 0x54,0);
    pbVar4 = (byte *)(DAT_0203063c + (uint)*(byte *)(iVar5 + 0x121));
    *pbVar4 = *pbVar4 | 2;
    if ((&DAT_0836e532)[*(byte *)(param_1 + 0x10)] != 0) {
      *(ushort *)(iVar5 + 0xb8) =
           *(short *)(iVar5 + 0xb8) + (ushort)(byte)(&DAT_0836e532)[*(byte *)(param_1 + 0x10)];
    }
    bVar1 = *(byte *)(DAT_02030160 + 0x4c);
    if (bVar1 < 99) {
      *(byte *)(DAT_02030160 + 0x4c) = bVar1 + 1;
    }
    uVar3 = (uint)*(ushort *)(&DAT_0836e524 + (uint)*(byte *)(param_1 + 0x10) * 2);
    (&DAT_02030104)[*(ushort *)(&DAT_0836e524 + (uint)*(byte *)(param_1 + 0x10) * 2) >> 3] =
         (byte)(1 << (uVar3 & 7)) |
         (&DAT_02030104)[*(ushort *)(&DAT_0836e524 + (uint)*(byte *)(param_1 + 0x10) * 2) >> 3];
    if (uVar3 == 0x27) {
      DAT_02037114 = DAT_02037114 | 0x80;
      DAT_02037168 = DAT_02037168 | 0x80;
    }
    if (uVar3 == 0x23) {
      if ((ushort)((DAT_0202f5bc & 0x7fff) + 0x708) < 0x8000) {
        DAT_0202f5bc = DAT_0202f5bc + 0x708 | 0x8000;
      }
      else {
        DAT_0202f5bc = 0xffff;
      }
    }
    if (uVar3 == 0x28) {
      *(undefined *)(DAT_02030160 + 1) = 5;
    }
    DAT_0202f5d0 = 0;
    *(undefined *)(param_1 + 0xc0) = 4;
    cVar2 = *(char *)(param_1 + 0xd);
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_080e34dc;
    cVar2 = '\x01';
    DAT_0202f5d0 = 1;
  }
  *(char *)(param_1 + 0xd) = cVar2 + '\x01';
LAB_080e34dc:
  iVar5 = *(byte *)(param_1 + 0xc0) - 1;
  *(byte *)(param_1 + 0xc0) = (byte)iVar5;
  if (iVar5 == 0) {
    DAT_0202f5d0 = (byte)iVar5;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 0x10);
  }
  uVar3 = (uint)(iVar5 * 0xf) >> 2 & 0xf;
  uVar3 = uVar3 << 4 | uVar3;
  DAT_02002420 = (ushort)uVar3 | (ushort)(uVar3 << 8);
  return in_lr;
}

