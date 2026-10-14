// sub_08060AA4 at 0x08060AA4 (thumb)

undefined4 sub_08060AA4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if ((*(ushort *)(iVar3 + 0x90) & 1) != 0) {
    *(undefined *)(param_1 + 0xc5) = 3;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
  }
  cVar2 = *(char *)(param_1 + 0xc5);
  if ((cVar2 != '\0') && (cVar2 = cVar2 + -1, *(char *)(param_1 + 0xc5) = cVar2, cVar2 == '\0')) {
    cVar2 = (&DAT_02022f30)[*(byte *)(param_1 + 9)];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar2 << 4;
    *(char *)(param_1 + 0x1e) = cVar2;
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
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  iVar4 = (*(int *)(iVar3 + 0x4c) + 0x1000) - (0x20 << ((bVar1 & 1) << 3));
  *(int *)(param_1 + 0x4c) = iVar4;
  iVar5 = *(int *)(iVar3 + 0x50);
  *(int *)(param_1 + 0x50) = iVar5;
  iVar4 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - iVar4) * 0x100 >> 0x10,
                       ((*(int *)(DAT_0202286c + 0x50) - iVar5) + -0x1800) * 0x100 >> 0x10);
  uVar6 = (uint)(iVar4 << 0x10) >> 0x18;
  if ((bVar1 & 1) == 0) {
    if ((uVar6 + 0x7f & 0xff) < 0x4f) {
      uVar6 = 0xd0;
    }
    if ((uVar6 - 0x31 & 0xff) < 0x50) {
      uVar6 = 0x30;
    }
  }
  else {
    if (0xb0 < uVar6) {
      uVar6 = 0xb0;
    }
    if (uVar6 < 0x50) {
      uVar6 = 0x50;
    }
  }
  *(char *)(param_1 + 0x1f) = (char)uVar6;
  if (*(char *)(param_1 + 0x13) == '\x01') {
    pbVar7 = (byte *)(iVar3 + 0xc4);
    if (*(char *)(param_1 + 0x12) == '\0') {
      local_20 = (short)(&DAT_080c8e24)[uVar6 + 0x40] * 0x10 + *(int *)(param_1 + 0x4c);
      iVar4 = (int)((uint)(ushort)(&DAT_080c8e24)[uVar6] << 0x14) >> 0x10;
      local_1c = iVar4 + *(int *)(param_1 + 0x50);
      sub_08001EAC(0xd);
      sub_08076710(&local_20,0x1c0,uVar6 + 0x80 & 0xff);
      sub_080033F0(iVar3 + 0x6c,4);
      *pbVar7 = *pbVar7 | 2;
      *(short *)(iVar3 + 0xc6) = (short)(-iVar4 >> 2);
    }
    *pbVar7 = *pbVar7 | 1;
  }
  else {
    *(byte *)(iVar3 + 0xc4) = *(byte *)(iVar3 + 0xc4) & 0xfe;
  }
  iVar3 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if ((iVar3 == 0) || (*(char *)(param_1 + 0x13) != '\0')) {
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((byte)(&DAT_082b0544)[*(byte *)(param_1 + 0x13)] < bVar1) {
      *(undefined *)(param_1 + 0x12) = 0;
      cVar2 = *(char *)(param_1 + 0x13) + '\x01';
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 == '\x03') {
        *(undefined *)(param_1 + 0x13) = 0;
      }
      sub_080033F0(param_1 + 0x6c,*(char *)(param_1 + 0x13) + '\a');
    }
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

