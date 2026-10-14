// sub_080A4E68 at 0x080A4E68 (thumb)

undefined4 sub_080A4E68(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x13) = 0x3c;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + '\x10';
      *(char *)(param_1 + 0x12) = cVar2;
      *(char *)(param_1 + 0x24) = cVar2;
      sub_080177F4(param_1);
      if ((*(uint *)(iVar5 + 0xc0) & 4) == 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_08368280);
    sub_08017700(param_1,0x4901);
    uVar4 = (uint)*(byte *)(param_1 + 0x12);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = -uVar4 & 0xff;
    }
    iVar5 = *(short *)((int)&DAT_080fe64c + ((uVar4 - 0x40) * 0x1000000 + 0x40000000 >> 0x17)) *
            0x2c0;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar5 >> 8;
    iVar5 = (short)(&DAT_080fe64c)[uVar4 - 0x40 & 0xff] * 0x2c0;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar5 >> 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  iVar5 = sub_08009B28(iVar5,iVar3 + 0x1000);
  if (iVar5 < 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + '\x10';
  *(char *)(param_1 + 0x12) = cVar2;
  *(char *)(param_1 + 0x24) = cVar2;
  sub_080177F4(param_1);
  return in_lr;
}

