// sub_080506B0 at 0x080506B0 (thumb)

undefined4 sub_080506B0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_080506f0;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835fd4c);
    sub_08017700(param_1,0xaf01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(undefined *)(param_1 + 0x12) = 0x30;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080506f0:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if (0xf < (int)((uint)*(byte *)(param_1 + 0xcd) - (int)*(short *)(param_1 + 0xa4))) {
    if (*(char *)(param_1 + 0xce) == '\0') {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  if (((*(char *)(param_1 + 0x12) == '\0') && ((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x200) == 0)) &&
     (*(short *)(DAT_0202f5c0 + 0xa4) != 0)) {
    if (*(char *)(param_1 + 0xd2) == '\0') {
      if (*(byte *)(param_1 + 0xcb) < 3) {
        puVar5 = &DAT_0835fd8c;
        do {
          if (*(byte *)(DAT_02030160 + 1) < 5) {
            uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
            DAT_0202f608 = uVar4 & 0x7fffffff;
            uVar4 = uVar4 * 2 >> 0x11 & 3;
          }
          else {
            uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
            DAT_0202f608 = uVar4 & 0x7fffffff;
            uVar4 = sub_080FE4D8(uVar4 * 2 >> 0x11,5);
            uVar4 = uVar4 & 0xff;
          }
        } while ((*(char *)(param_1 + 0xcf) != '\0') && ((&DAT_0835fd8c)[uVar4] == '\n'));
      }
      else {
        puVar5 = &DAT_0835fd88;
        do {
          if (*(byte *)(DAT_02030160 + 1) < 5) {
            uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
            DAT_0202f608 = uVar4 & 0x7fffffff;
            uVar4 = sub_080FE4D8(uVar4 * 2 >> 0x11,3);
            uVar4 = uVar4 & 0xff;
          }
          else {
            uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
            DAT_0202f608 = uVar4 & 0x7fffffff;
            uVar4 = uVar4 * 2 >> 0x11 & 3;
          }
        } while ((*(char *)(param_1 + 0xcf) != '\0') && ((&DAT_0835fd88)[uVar4] == '\n'));
      }
      cVar2 = *(char *)(param_1 + 0xcf);
      if (cVar2 != '\0') {
        *(char *)(param_1 + 0xcf) = cVar2 + -1;
      }
      uVar3 = puVar5[uVar4];
    }
    else {
      *(char *)(param_1 + 0xd2) = '\0';
      uVar3 = 2;
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08050148(param_1);
  sub_080177F4(param_1);
  return in_lr;
}

