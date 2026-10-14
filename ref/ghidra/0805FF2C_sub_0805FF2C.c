// sub_0805FF2C at 0x0805FF2C (thumb)

undefined4 sub_0805FF2C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*(ushort *)(iVar2 + 0x90) & 1) != 0) {
    *(undefined *)(param_1 + 0xc5) = 3;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
  }
  cVar1 = *(char *)(param_1 + 0xc5);
  if ((cVar1 != '\0') && (cVar1 = cVar1 + -1, *(char *)(param_1 + 0xc5) = cVar1, cVar1 == '\0')) {
    cVar1 = (&DAT_02022f30)[*(byte *)(param_1 + 9)];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
    *(char *)(param_1 + 0x1e) = cVar1;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x55;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xc4) = 0;
    sub_080033F0(param_1 + 0x6c,7);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar6 = *(int *)(iVar2 + 0x4c);
  *(int *)(param_1 + 0x4c) = iVar6;
  iVar5 = *(int *)(iVar2 + 0x50) + 0x1000;
  *(int *)(param_1 + 0x50) = iVar5;
  iVar5 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - iVar6) * 0x100 >> 0x10,
                       ((*(int *)(DAT_0202286c + 0x50) - iVar5) + -0x1800) * 0x100 >> 0x10);
  pbVar7 = (byte *)(param_1 + 0xc4);
  iVar6 = ((uint)(iVar5 << 0x10) >> 0x18) - (uint)*pbVar7;
  iVar3 = iVar6 * 0x1000000 >> 0x18;
  iVar5 = iVar3;
  if (iVar3 < 0) {
    iVar5 = -iVar3;
  }
  if (0x7f < iVar5) {
    iVar6 = iVar3;
  }
  iVar5 = (char)iVar6 * 0x1c;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar5 = (uint)*pbVar7 + (iVar5 >> 8);
  bVar4 = (byte)iVar5;
  if (0x70 < iVar5 * 0x1000000 >> 0x18) {
    bVar4 = 0x70;
  }
  if ((char)bVar4 < '\x10') {
    bVar4 = 0x10;
  }
  *pbVar7 = bVar4;
  uVar8 = (uint)*pbVar7;
  *(byte *)(param_1 + 0x1f) = *pbVar7 - 0x40;
  if (*(char *)(param_1 + 0x13) == '\x01') {
    pbVar7 = (byte *)(iVar2 + 0xc4);
    if (*(char *)(param_1 + 0x12) == '\0') {
      iVar5 = (int)((uint)(ushort)(&DAT_080c8e24)[uVar8 + 0x40] << 0x14) >> 0x10;
      local_20 = iVar5 + *(int *)(param_1 + 0x4c);
      local_1c = (short)(&DAT_080c8e24)[uVar8] * 0x10 + *(int *)(param_1 + 0x50);
      sub_08001EAC(0xd);
      sub_08076710(&local_20,0x1c0,uVar8 + 0x80 & 0xff);
      sub_080033F0(iVar2 + 0x6c,4);
      *pbVar7 = *pbVar7 | 2;
      *(short *)(iVar2 + 0xc6) = (short)(-iVar5 >> 2);
    }
    *pbVar7 = *pbVar7 | 1;
  }
  else {
    *(byte *)(iVar2 + 0xc4) = *(byte *)(iVar2 + 0xc4) & 0xfe;
  }
  bVar4 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar4;
  if ((byte)(&DAT_082b04b0)[*(byte *)(param_1 + 0x13)] < bVar4) {
    *(undefined *)(param_1 + 0x12) = 0;
    uVar8 = *(byte *)(param_1 + 0x13) + 1;
    *(char *)(param_1 + 0x13) = (char)uVar8;
    if ((uVar8 & 0xff) == 3) {
      *(undefined *)(param_1 + 0x13) = 0;
    }
    sub_080033F0(param_1 + 0x6c,*(char *)(param_1 + 0x13) + '\a');
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

