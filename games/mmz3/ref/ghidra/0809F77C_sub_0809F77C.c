// sub_0809F77C at 0x0809F77C (thumb)

undefined4 sub_0809F77C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x13) = 8;
    sub_08007390(param_1 + 0x74,&DAT_08367830);
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    sub_08017700(param_1,(uVar3 * 2 >> 0x11 & 1) + 0x3203);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (((*(byte *)(param_1 + 0x12) < 3) && (*(char *)(param_1 + 0x13) != '\0')) &&
       (cVar2 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar2, cVar2 == '\0')) {
      sub_0809F3F0(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                   *(byte *)(param_1 + 0x12) + 1);
    }
    if (((*(uint *)(param_1 + 0x8c) & 4) != 0) &&
       (bVar1 = sub_08025B14(DAT_0202f5c0,0), iVar4 = DAT_0202f5c0, bVar1 < 0x60)) {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) - *(int *)(iVar4 + 0x58);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
    uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x2000 < uVar3) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08025B14(DAT_0202f5c0,0xc);
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(undefined4 *)(param_1 + 0x5c) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar4 = DAT_0202f5c0;
    *(int *)(param_1 + 0x54) = *(int *)(DAT_0202f5c0 + 0x54) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + *(int *)(param_1 + 0x68);
    uVar3 = sub_08025B64();
    iVar4 = *(int *)(param_1 + 0x5c) - (uVar3 & 0xff);
    *(int *)(param_1 + 0x5c) = iVar4;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if ((((cVar2 == '\0') || (iVar4 < 0)) || ((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x200) != 0)) ||
       (*(short *)(DAT_0202f5c0 + 0xa4) == 0)) {
      sub_08025B3C(DAT_0202f5c0,0xc);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    break;
  case 4:
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
    }
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    iVar4 = DAT_0202f5c0;
    *(int *)(param_1 + 0x54) = *(int *)(DAT_0202f5c0 + 0x54) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 0x100;
    sub_080177F4(param_1);
  }
  return in_lr;
}

