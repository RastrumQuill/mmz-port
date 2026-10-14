// sub_08089A40 at 0x08089A40 (thumb)

undefined4 sub_08089A40(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  sub_080128D4();
  if ((DAT_0202ebbb & 0x20) == 0) {
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 == 1) {
      local_14 = *(int *)(param_1 + 0x54) +
                 (int)*(short *)(&DAT_08341c9c + (uint)*(byte *)(param_1 + 0x10) * 4);
      local_10 = *(int *)(param_1 + 0x58) +
                 (int)*(short *)(&DAT_08341c9e + (uint)*(byte *)(param_1 + 0x10) * 4) +
                 (uint)*(byte *)(param_1 + 0x13) * -0x1000;
      sub_080AC60C(1,&local_14);
      sub_080032EC(0x2a);
      bVar1 = *(byte *)(param_1 + 0x13);
      if (bVar1 == 0) {
        bVar3 = *(byte *)(param_1 + 10) & 0xdf;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(byte *)(param_1 + 0x4d) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)((bVar1 & 1) << 5);
      local_10 = local_10 + 0xe00;
      iVar5 = param_1 + 0x54;
      sub_080BB30C(param_1,iVar5);
      *(undefined *)(param_1 + 0x12) = 4;
      if (*(int *)(param_1 + 0xc0) != 0) {
        sub_0801DD2C(4,iVar5);
        if (DAT_0202ebfc < 9999) {
          DAT_0202ebfc = DAT_0202ebfc + 1;
        }
        sub_0801DE2C(param_1,iVar5);
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      iVar5 = *(int *)(param_1 + 0x5c) * 0xe6;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar5 >> 8;
      iVar5 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar5;
      if (0x6ff < iVar5) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar5;
      iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar6;
      if (*(char *)(param_1 + 0x12) == '\0') {
        local_14 = iVar5 + *(short *)(&DAT_08341c9c + (uint)*(byte *)(param_1 + 0x10) * 4);
        local_10 = iVar6 + *(short *)(&DAT_08341c9e + (uint)*(byte *)(param_1 + 0x10) * 4) +
                   (uint)*(byte *)(param_1 + 0x13) * -0x1000;
      }
      cVar2 = sub_08089050(param_1);
      if (cVar2 == '\x02') {
        *(undefined *)(param_1 + 0x12) = 0x18;
      }
      bVar1 = *(byte *)(param_1 + 0x12);
      if ((bVar1 & 2) == 0) {
        bVar3 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      if (bVar1 < 0x18) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      return in_lr;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (cVar2 != '\0') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar4 = *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}

