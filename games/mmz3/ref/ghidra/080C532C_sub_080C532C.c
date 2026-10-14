// sub_080C532C at 0x080C532C (thumb)

undefined4 sub_080C532C(int param_1)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_08017654(param_1);
    sub_08017700(param_1,6);
    iVar6 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6 * -0x80;
    bVar3 = *(byte *)(param_1 + 0x11);
    uVar4 = FUN_080fe2f8(iVar6 * *(short *)((int)&DAT_080fe64c +
                                           ((bVar3 + 0x40) * 0x1000000 >> 0x17)),6);
    *(undefined4 *)(param_1 + 100) = uVar4;
    uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar5 & 0x7fffffff;
    *(uint *)(param_1 + 0x68) =
         (iVar6 * (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x11)] >> 7) + (uVar5 * 0x40 >> 0x16) +
         -0x1ff;
    if ((int)((uint)bVar3 * 0x1000000) < 0) {
      uVar2 = 0x20;
    }
    else {
      uVar2 = 0x10;
    }
    *(undefined *)(param_1 + 0x25) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x2d;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) * 7 >> 3;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) * 7 >> 3;
  if (*(byte *)(param_1 + 0x12) < 0x20) {
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) << 3;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) << 3;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  bVar3 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar3;
  if ((byte)(cVar1 - 1U) < 0xf) {
    if ((bVar3 & 2) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar3;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

