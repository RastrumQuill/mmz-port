// sub_08048320 at 0x08048320 (thumb)

undefined4 sub_08048320(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x13) = 0x40;
    *(undefined4 *)(param_1 + 100) = 10;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x58) + -0x1000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar2 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar2;
    if (iVar2 == 0) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 199) == '\0') {
      cVar1 = *(char *)(param_1 + 0x13) + -6;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x13) + '\x06';
    }
    *(char *)(param_1 + 0x13) = cVar1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xbc) +
         *(short *)((int)&DAT_080fe64c + ((*(byte *)(param_1 + 0x13) + 0x40) * 0x1000000 >> 0x17)) *
         0x10;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xc0) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x13)] * 0x10;
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0x58) + -0x300;
    *(int *)(param_1 + 0x58) = iVar2;
    if (iVar2 < *(int *)(param_1 + 0xb8) + -0x5000) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 3:
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 199) << 7;
    *(undefined4 *)(param_1 + 100) = 0x2a;
    iVar2 = *(int *)(param_1 + 0x54) + -0x2c00;
    *(int *)(param_1 + 0xbc) = iVar2;
    *(int *)(param_1 + 0xbc) = iVar2 + (uint)*(byte *)(param_1 + 199) * 0x5800;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    iVar2 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar2;
    if (iVar2 == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if (*(char *)(param_1 + 199) == '\0') {
      cVar1 = *(char *)(param_1 + 0x13) + -3;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x13) + '\x03';
    }
    *(char *)(param_1 + 0x13) = cVar1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xbc) +
         *(short *)((int)&DAT_080fe64c + ((*(byte *)(param_1 + 0x13) + 0x40) * 0x1000000 >> 0x17)) *
         0x2c;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0);
    iVar2 = (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x13)] * 0x1d55;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0) + (iVar2 >> 8);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),7);
  if (cVar1 == '\0') {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    sub_080BC060(*(int *)(param_1 + 0x54) + ((uVar3 * 0x20 >> 0x15) - 0x400),
                 *(int *)(param_1 + 0x58) + (uVar4 * 0x40 >> 0x16) + 0x800,0,0,
                 *(undefined *)(param_1 + 0x10));
  }
  sub_080041E4(*(undefined *)(param_1 + 0xc6));
  sub_080177F4(param_1);
  return in_lr;
}

