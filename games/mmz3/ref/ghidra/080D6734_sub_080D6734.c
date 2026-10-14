// sub_080D6734 at 0x080D6734 (thumb)

undefined4 sub_080D6734(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202fd8c = 0x3c0;
    DAT_0202f78c = 9;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    iVar5 = sub_080D0554(param_1,0xbe00,1);
LAB_080d6a06:
    uVar4 = iVar5 << 0x10;
LAB_080d6a08:
    if (uVar4 == 0) goto switchD_080d6748_caseD_c;
    break;
  case 2:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto switchD_080d6748_caseD_c;
    sub_08017700(param_1,0xbe01);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 3:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      sub_0800471C(0x101);
    }
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080d6748_caseD_c;
    sub_08017700(param_1,0xbe02);
    break;
  case 4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080d6748_caseD_c;
    sub_08017700(param_1,0xbe03);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    break;
  case 5:
    sub_080177F4(param_1);
    iVar5 = *(int *)(param_1 + 0x68) - (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)];
    *(int *)(param_1 + 0x68) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) * 7 + iVar5 >> 3;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080d6748_caseD_c;
    sub_08017700(param_1,0xbe11);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
    break;
  case 6:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080d6748_caseD_c;
    sub_0800471C(0x124);
    sub_08017700(param_1,0xbe12);
    break;
  case 7:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto switchD_080d6748_caseD_c;
    sub_08004768(0x124);
    sub_08017700(param_1,0xbe13);
    break;
  case 8:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080d6748_caseD_c;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d598,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_08017700(param_1,0xbe03);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    break;
  case 9:
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x5c) != 0) {
      iVar5 = *(int *)(param_1 + 0x5c) + 0x20;
      *(int *)(param_1 + 0x5c) = iVar5;
      if (0x700 < iVar5) {
        *(undefined4 *)(param_1 + 0x5c) = 0x700;
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x5c);
      iVar5 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
      if (iVar5 != 0) {
        uVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x60));
        *(undefined4 *)(param_1 + 0x60) = uVar3;
      }
    }
    if (*(char *)(param_1 + 0x13) != '\0') {
      bVar2 = *(char *)(param_1 + 0x13) - 1;
      *(byte *)(param_1 + 0x13) = bVar2;
      if ((bVar2 & 2) == 0) {
        sub_08017B2C(param_1);
      }
      else {
        sub_08017BF8(param_1);
      }
      if (*(char *)(param_1 + 0x13) == '\x16') {
        sub_08017700(param_1,0xbe0d);
      }
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
        sub_08017700(param_1,0xbe0c);
        *(undefined *)(param_1 + 0x13) = 0x1e;
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        iVar5 = sub_080047C0(0xf8);
        if (iVar5 == 0) {
          sub_0800471C(0xf8);
        }
      }
      goto switchD_080d6748_caseD_c;
    }
    uVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    sub_08017700(param_1,0xbe0e);
    break;
  case 10:
    sub_080177F4(param_1);
    uVar4 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 8;
    goto LAB_080d6a08;
  case 0xb:
    iVar5 = sub_080D03E8(param_1,0xbe0b,1);
    goto LAB_080d6a06;
  default:
    goto switchD_080d6748_caseD_c;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d6748_caseD_c:
  if ((byte)(*(char *)(param_1 + 0xd) - 6U) < 4) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    iVar5 = *(int *)(param_1 + 0x60) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 4;
    *(int *)(param_1 + 0x68) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) * 7 + iVar5 >> 3;
  }
  return in_lr;
}

