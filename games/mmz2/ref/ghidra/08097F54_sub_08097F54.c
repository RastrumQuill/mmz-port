// sub_08097F54 at 0x08097F54 (thumb)

undefined4 sub_08097F54(int param_1)

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
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(iVar3 + 0x8c) & 1) != 0) {
    *(undefined *)(param_1 + 0xc1) = 3;
    sub_08012CD0(param_1);
  }
  cVar2 = *(char *)(param_1 + 0xc1);
  if ((cVar2 != '\0') && (cVar2 = cVar2 + -1, *(char *)(param_1 + 0xc1) = cVar2, cVar2 == '\0')) {
    sub_08012C04(param_1);
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x55;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_080127E4(param_1,0x9d07);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    pbVar7 = (byte *)(param_1 + 0x4a);
    *pbVar7 = *pbVar7 & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
    *pbVar7 = *pbVar7 & 0xdf;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  iVar4 = (*(int *)(iVar3 + 0x54) + 0x1000) - (0x20 << ((bVar1 & 1) << 3));
  *(int *)(param_1 + 0x54) = iVar4;
  iVar5 = *(int *)(iVar3 + 0x58);
  *(int *)(param_1 + 0x58) = iVar5;
  iVar4 = sub_080EEF64((*(int *)(DAT_0202e130 + 0x54) - iVar4) * 0x100 >> 0x10,
                       ((*(int *)(DAT_0202e130 + 0x58) - iVar5) + -0x1800) * 0x100 >> 0x10);
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
  *(char *)(param_1 + 0x24) = (char)uVar6;
  if (*(char *)(param_1 + 0x13) == '\x01') {
    pbVar7 = (byte *)(iVar3 + 0xc0);
    if (*(char *)(param_1 + 0x12) == '\0') {
      local_20 = (short)(&DAT_080ef450)[uVar6 + 0x40 & 0xff] * 0x10 + *(int *)(param_1 + 0x54);
      iVar4 = ((int)(short)(&DAT_080ef450)[uVar6] << 0x14) >> 0x10;
      local_1c = iVar4 + *(int *)(param_1 + 0x58);
      sub_080032EC(0x2c);
      sub_08098414(&local_20,0x1c0,uVar6 + 0x80 & 0xff);
      sub_080127E4(iVar3,0x9d04);
      *pbVar7 = *pbVar7 | 2;
      *(short *)(iVar3 + 0xc2) = (short)(-iVar4 >> 2);
    }
    *pbVar7 = *pbVar7 | 1;
  }
  else {
    *(byte *)(iVar3 + 0xc0) = *(byte *)(iVar3 + 0xc0) & 0xfe;
  }
  iVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (((iVar3 == 0) || (*(char *)(param_1 + 0x13) != '\0')) &&
     (bVar1 = *(char *)(param_1 + 0x12) + 1, *(byte *)(param_1 + 0x12) = bVar1,
     (byte)(&DAT_08343060)[*(byte *)(param_1 + 0x13)] < bVar1)) {
    *(undefined *)(param_1 + 0x12) = 0;
    cVar2 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\x03') {
      *(undefined *)(param_1 + 0x13) = 0;
    }
    sub_080127E4(param_1,*(byte *)(param_1 + 0x13) + 0x9d07);
  }
  sub_080128D4(param_1);
  return in_lr;
}

