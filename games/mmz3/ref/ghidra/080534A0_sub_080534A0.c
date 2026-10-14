// sub_080534A0 at 0x080534A0 (thumb)

undefined4 sub_080534A0(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(char *)(param_1 + 200) == '\0') {
      sub_08017700(param_1,0xb00d);
      sub_08007390(param_1 + 0x74,&DAT_083601b8);
    }
    else {
      sub_08017700(param_1,0xb010);
      sub_08007390(param_1 + 0x74,&DAT_083601b8);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080534b4_caseD_1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_08053742:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_080534b4_caseD_9:
    return in_lr;
  case 1:
    goto switchD_080534b4_caseD_1;
  case 2:
    if (*(char *)(param_1 + 200) == '\0') {
      sub_08017700(param_1,0xb00e);
    }
    else {
      sub_08017700(param_1,0xb011);
    }
    sub_08007390(param_1 + 0x74,&DAT_083601a0);
    *(undefined *)(param_1 + 0x12) = 0x41;
    uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar5 & 0x7fffffff;
    uVar1 = sub_080FE4D8(uVar5 * 2 >> 0x11,5);
    *(undefined *)(param_1 + 0x13) = uVar1;
    uVar4 = sub_080A5980(param_1,*(undefined *)(param_1 + 0x13));
    *(undefined4 *)(param_1 + 0xcc) = uVar4;
    sub_0800471C(0xcd);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    cVar3 = *(char *)(param_1 + 0x71);
    if (((((cVar3 == '\x01') || (cVar3 == '\x03')) || (cVar3 == '\x05')) ||
        ((cVar3 == '\a' || (cVar3 == '\b')))) && (*(char *)(param_1 + 0x72) == '\x01')) {
      sub_0800471C(0xcb);
    }
LAB_08053732:
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != '\0')) {
      return in_lr;
    }
    goto LAB_08053742;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08007390(param_1 + 0x74,&DAT_083601a0);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xbc) + *(int *)(&DAT_080feb60 + (uint)*(byte *)(param_1 + 0x13) * 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xb8) + *(int *)(&DAT_080feb64 + (uint)*(byte *)(param_1 + 0x13) * 8);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if ((6 < *(byte *)(*(int *)(param_1 + 0xcc) + 0xe)) && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08007390(param_1 + 0x74,&DAT_083601a0);
    }
    if (*(byte *)(*(int *)(param_1 + 0xcc) + 0xe) < 10) {
      return in_lr;
    }
    goto LAB_08053742;
  case 6:
    *(undefined4 *)(param_1 + 0xcc) = 0;
    bVar2 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar2 | 1;
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
      if ((bVar2 & 0x10) == 0) {
        *(byte *)(param_1 + 0x4c) = (bVar2 >> 4 ^ 1) & 1;
        uVar5 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
        if (uVar5 == 0) {
LAB_0805370a:
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
LAB_08053710:
        *(byte *)(param_1 + 10) = bVar2;
      }
    }
    else if ((bVar2 & 0x10) != 0) {
      *(byte *)(param_1 + 0x4c) = (bVar2 >> 4 ^ 1) & 1;
      uVar5 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
      if (uVar5 == 0) goto LAB_0805370a;
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_08053710;
    }
    *(undefined *)(param_1 + 200) = 1;
    sub_08017700(param_1,0xb011);
    *(undefined *)(param_1 + 0x12) = 0x34;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    goto LAB_08053732;
  case 8:
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  default:
    goto switchD_080534b4_caseD_9;
  }
}

