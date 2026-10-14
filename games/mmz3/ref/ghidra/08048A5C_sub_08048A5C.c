// sub_08048A5C at 0x08048A5C (thumb)

undefined4 sub_08048A5C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    pcVar7 = (char *)(param_1 + 0xc6);
    if (*pcVar7 != '\0') {
      sub_08004230();
      *pcVar7 = '\0';
    }
    sub_08017700(param_1,0x3100);
    *(undefined *)(param_1 + 0x22) = *(undefined *)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar4 = sub_08017B8C(param_1);
      sub_080040A8(0x17,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
      cVar2 = '\x17';
    }
    else {
      iVar4 = sub_08017B8C(param_1);
      sub_080040A8(0x12,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
      cVar2 = '\x12';
    }
    *pcVar7 = cVar2;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 1:
    cVar2 = sub_080041E4(*(undefined *)(param_1 + 0xc6));
    if (cVar2 == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    pcVar7 = (char *)(param_1 + 0xc6);
    if (*pcVar7 != '\0') {
      sub_08004230();
      *pcVar7 = '\0';
    }
    *(undefined *)(param_1 + 0x22) = 0;
    sub_08017700(param_1,0x3000);
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar4 = sub_08017B8C(param_1);
      sub_080040A8(0xd,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
      *pcVar7 = '\r';
    }
    *(undefined *)(param_1 + 0x12) = 0xa0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar4 = (*(int *)(param_1 + 0xb4) + 0x4e00 + (uint)*(byte *)(param_1 + 0x10) * 0x1400) -
            *(int *)(param_1 + 0x54);
    iVar5 = (*(int *)(param_1 + 0xb8) + -0x6400 +
            (0x28 << ((*(byte *)(param_1 + 0x10) & 0x1f) << 3))) - *(int *)(param_1 + 0x58);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x3f;
    }
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0x3f;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 6);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar5 >> 6);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),7);
    if (cVar2 == '\0') {
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar8 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar8 & 0x7fffffff;
      sub_080BC00C(*(int *)(param_1 + 0x54) + ((uVar3 * 0x20 >> 0x15) - 0x400),
                   *(int *)(param_1 + 0x58) + (uVar8 * 0x40 >> 0x16),0,0);
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080041E4(*(undefined *)(param_1 + 0xc6));
    }
    break;
  case 4:
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (*(char *)(param_1 + 0xc6) != '\0') {
      sub_08004230();
      *(char *)(param_1 + 0xc6) = '\0';
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    iVar4 = *(int *)(param_1 + 0x5c) + 0x60;
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar5 = *(int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0);
    iVar4 = iVar4 >> 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(int *)(param_1 + 0x54) =
           iVar5 + *(short *)((int)&DAT_080fe64c + ((uint)(iVar4 << 0x18) >> 0x17)) * 10;
      iVar4 = *(short *)((int)&DAT_080fe64c + ((uint)(iVar4 << 0x19) >> 0x17)) * 5;
    }
    else {
      *(int *)(param_1 + 0x54) =
           iVar5 + *(short *)((int)&DAT_080fe64c + ((uint)(iVar4 << 0x18) >> 0x17)) * -10;
      iVar4 = *(short *)((int)&DAT_080fe64c + ((uint)(iVar4 << 0x19) >> 0x17)) * -5;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0) + iVar4;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      if (*(char *)(*(int *)(param_1 + 0x28) + 0x11) != '\0') {
        iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x18);
LAB_08048d30:
        if ((*(byte *)(iVar4 + 9) & 0x80) != 0) {
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        }
      }
    }
    else if (*(char *)(param_1 + 0x11) != '\0') {
      iVar4 = *(int *)(param_1 + 0x18);
      goto LAB_08048d30;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),7);
    if (cVar2 == '\0') {
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar8 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar8 & 0x7fffffff;
      sub_080BC00C(*(int *)(param_1 + 0x54) + ((uVar3 * 0x20 >> 0x15) - 0x400),
                   *(int *)(param_1 + 0x58) + (uVar8 * 0x40 >> 0x16),0,0x40);
    }
    break;
  case 6:
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    bVar1 = *(byte *)(param_1 + 0x12);
    cVar2 = sub_080FE4D8(bVar1,3);
    if ((cVar2 == '\0') && (bVar1 < 0x50)) {
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar8 = uVar3 & 0x7fffffff;
      DAT_0202f608 = uVar8;
      iVar4 = sub_080FE4D8(uVar3 * 2 >> 0x11,0xff);
      uVar3 = uVar8 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      iVar6 = (uVar3 * 2 >> 0x11 & 0x7f) + 0x80;
      iVar5 = iVar6 * *(short *)((int)&DAT_080fe64c + ((uint)((iVar4 + 0x40) * 0x1000000) >> 0x17));
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      iVar6 = iVar6 * *(short *)((int)&DAT_080fe64c + ((uint)(iVar4 << 0x18) >> 0x17));
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      sub_080BC00C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),iVar5 >> 8,
                   iVar6 >> 8);
    }
    if (*(char *)(param_1 + 0x12) == 'Z') {
      sub_0800471C(0x45);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      uVar3 = 0;
      do {
        sub_080BC00C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                     (int)*(short *)((int)&DAT_080fe64c + (uVar3 * 0x20000000 + 0x40000000 >> 0x17))
                     << 1,(int)*(short *)((int)&DAT_080fe64c + ((uVar3 << 0x1d) >> 0x17)) << 1);
        uVar3 = uVar3 + 2 & 0xff;
      } while (uVar3 < 8);
    }
    if (*(char *)(param_1 + 0x12) == '[') {
      uVar3 = 1;
      do {
        sub_080BC00C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                     (int)*(short *)((int)&DAT_080fe64c + (uVar3 * 0x20000000 + 0x40000000 >> 0x17))
                     << 1,(int)*(short *)((int)&DAT_080fe64c + ((uVar3 << 0x1d) >> 0x17)) << 1);
        uVar3 = uVar3 + 2 & 0xff;
      } while (uVar3 < 8);
    }
    if (*(char *)(param_1 + 0x12) < '\0') {
      DAT_020301b2 = DAT_020301b2 | 2;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
  default:
    goto switchD_08048a76_caseD_8;
  }
  sub_080177F4(param_1);
switchD_08048a76_caseD_8:
  return in_lr;
}

