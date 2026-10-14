// sub_0800F4C4 at 0x0800F4C4 (thumb)

undefined4 sub_0800F4C4(void)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar1 = *(undefined *)(DAT_02022b20 + 1);
  *(char *)(DAT_02022b20 + 0xc) = *(char *)(DAT_02022b20 + 0xc) + '\x01';
  iVar4 = DAT_02022b20;
  *(uint *)(DAT_02022b20 + 0x10) = *(uint *)(DAT_02022b20 + 0x10) | 1 << DAT_02022b24;
  *(byte *)(iVar4 + 0xf) = DAT_02022b24;
  DAT_02022b36 = DAT_02022b26 & 0xf0;
  if ((DAT_02022b26 & 0xf0) == 0) {
    *(char *)(DAT_02022b20 + 0xe) = *(char *)(DAT_02022b20 + 0xe) + '\x01';
    *(uint *)(DAT_02022b20 + 0x18) = *(uint *)(DAT_02022b20 + 0x18) | 1 << (uint)DAT_02022b24;
  }
  else {
    DAT_02022b36 = DAT_02022b27;
    *(char *)(DAT_02022b20 + 0xd) = *(char *)(DAT_02022b20 + 0xd) + '\x01';
    *(uint *)(DAT_02022b20 + 0x14) = *(uint *)(DAT_02022b20 + 0x14) | 1 << DAT_02022b24;
  }
  uVar3 = DAT_02022b26 & 0xf0;
  uVar6 = uVar3;
  if ((DAT_02022b26 & 0xf0) != 0) {
    iVar4 = sub_080C8C38(DAT_02022b28,0x3c);
    iVar4 = iVar4 - *(int *)(L"GHIJKLSMNOPQRTUVWXYL" + (uint)DAT_02022b24 * 2 + 0x14);
    uVar6 = DAT_02022b28;
    if (iVar4 < 1) {
      uVar3 = 0x14;
    }
    else {
      if (iVar4 < 200) {
        cVar2 = sub_080C8AD0(iVar4 + 9,10);
        DAT_02022b37 = '\x14' - cVar2;
        goto LAB_0800f572;
      }
      uVar3 = 0;
    }
  }
  DAT_02022b28 = uVar6;
  DAT_02022b37 = (char)uVar3;
LAB_0800f572:
  iVar4 = sub_080C8AD0(DAT_02022b2c,DAT_02022b34 + 1);
  if (iVar4 == 0) {
    DAT_02022b38 = '\0';
  }
  else {
    iVar4 = sub_080C8AD0(*(int *)(&DAT_0829fae4 + (uint)DAT_02022b24 * 4) * 10,iVar4);
    if (iVar4 < 0xb) {
      DAT_02022b38 = '\x0f';
    }
    else if (iVar4 < 0x19) {
      DAT_02022b38 = '\x19' - (char)iVar4;
    }
    else {
      DAT_02022b38 = '\0';
    }
  }
  uVar6 = (uint)DAT_02022b2e;
  if (uVar6 == 0) {
    DAT_02022b39 = '\x0f';
  }
  else if (uVar6 < 0x2e) {
    cVar2 = sub_080C8AD0(uVar6 - 1,3);
    DAT_02022b39 = '\x0f' - cVar2;
  }
  else {
    DAT_02022b39 = '\0';
  }
  if (DAT_02022b34 == 0) {
    DAT_02022b3a = '\x0f';
  }
  else if (DAT_02022b34 < 5) {
    DAT_02022b3a = DAT_02022b34 * -3 + '\x0f';
  }
  else {
    DAT_02022b3a = '\0';
  }
  if (0xf - DAT_02022b30 < -100) {
    DAT_02022b3b = -100;
  }
  else {
    DAT_02022b3b = (char)(0xf - DAT_02022b30);
  }
  DAT_02022b25 = DAT_02022b3b +
                 DAT_02022b3a + DAT_02022b39 + DAT_02022b38 + DAT_02022b36 + DAT_02022b37;
  *(short *)(DAT_02022b20 + 6) = *(short *)(DAT_02022b20 + 6) + (short)DAT_02022b25;
  iVar4 = sub_080C8AD0((int)*(short *)(DAT_02022b20 + 6),*(undefined *)(DAT_02022b20 + 0xc));
  cVar2 = '\0';
  for (piVar5 = &DAT_0829fb28; *piVar5 <= iVar4; piVar5 = piVar5 + 1) {
    cVar2 = cVar2 + '\x01';
  }
  *(char *)(DAT_02022b20 + 1) = cVar2;
  sub_0800F684(uVar1);
  return in_lr;
}

