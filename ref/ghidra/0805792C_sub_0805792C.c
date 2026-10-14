// sub_0805792C at 0x0805792C (thumb)

undefined4 sub_0805792C(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08001EAC(0x7d);
    sub_080033F0(param_1 + 0x6c,4);
    *(undefined *)(param_1 + 0xc4) = 0;
    uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar5 & 0x7fffffff;
    *(byte *)(param_1 + 0xc5) = (byte)(uVar5 * 2 >> 0x11) & 3;
    *(undefined *)(param_1 + 0x13) = 0x17;
    *(uint *)(iVar4 + 0xbc) = *(uint *)(iVar4 + 0xbc) | 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x13) == '\a') {
    *(uint *)(iVar4 + 0xbc) = *(uint *)(iVar4 + 0xbc) & 0xffffffdf;
  }
  sub_08055874(param_1);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar3 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar3;
  if (cVar3 == '\0') {
    iVar7 = -6;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar7 = 6;
    }
    local_24 = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * iVar7 +
               (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * 0x14 + *(int *)(param_1 + 0x4c);
    local_20 = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * iVar7 +
               (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * -0x14 +
               *(int *)(param_1 + 0x50);
    *(uint *)(iVar4 + 0xbc) = *(uint *)(iVar4 + 0xbc) | 8;
    pbVar6 = (byte *)(param_1 + 0xc4);
    if (*pbVar6 == 0) {
      *(undefined *)(param_1 + 0x13) = 0x30;
      *pbVar6 = *pbVar6 + 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0xc5);
      cVar3 = (&DAT_082afb10)[(byte)(&DAT_082afb17)[(uint)*pbVar6 + (uint)bVar1 * 8]];
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        cVar3 = cVar3 + -0x80;
      }
      cVar2 = *(char *)(param_1 + 0x12);
      sub_08001EAC(0xd);
      sub_08076710(&local_24,0x300,cVar2 + cVar3);
      *(undefined *)(param_1 + 0x13) = 0x18;
      *pbVar6 = *pbVar6 + 1;
      if ((&DAT_082afb17)[(uint)*pbVar6 + (uint)bVar1 * 8] == -1) {
        *(undefined *)(param_1 + 0xd) = 7;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}

