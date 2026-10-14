// sub_0807C494 at 0x0807C494 (thumb)

undefined4 sub_0807C494(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (DAT_020301d0 == 0) {
    switch(*(undefined *)(param_1 + 0xe)) {
    case 0:
      sub_08017700(param_1,0x4101);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if (*(char *)(param_1 + 0xc0) != '\0') {
        local_14 = *(undefined4 *)(param_1 + 0x54);
        local_10 = *(int *)(param_1 + 0x58) + -0x600;
        sub_080BE2E4(&local_14,*(byte *)(param_1 + 10) >> 4 & 1);
        sub_08024FE4(5,param_1 + 0x54);
        *(undefined *)(param_1 + 0x12) = 10;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        goto switchD_0807c4e4_caseD_1;
      }
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + -0x600;
      sub_080B2484(1,&local_14);
      sub_0800471C(0x2a);
      sub_08024FE4(5,param_1 + 0x54);
      if (DAT_0203016c < 9999) {
        DAT_0203016c = DAT_0203016c + 1;
      }
      break;
    case 1:
switchD_0807c4e4_caseD_1:
      sub_080177F4(param_1);
      bVar1 = *(char *)(param_1 + 0x12) - 1;
      *(byte *)(param_1 + 0x12) = bVar1;
      if ((bVar1 & 2) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
      if (*(char *)(param_1 + 0x12) != '\0') {
        return in_lr;
      }
LAB_0807c624:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      return in_lr;
    case 2:
      sub_08017BF8(param_1);
      *(undefined *)(param_1 + 0x12) = 10;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    case 3:
      bVar1 = *(char *)(param_1 + 0x12) - 1;
      *(byte *)(param_1 + 0x12) = bVar1;
      if ((bVar1 & 2) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
      if (*(char *)(param_1 + 0x12) != '\0') {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined *)(param_1 + 0x12) = 0x3c;
      goto LAB_0807c624;
    case 4:
      if ((*(char *)(param_1 + 0x12) != '\0') &&
         (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0'))
      {
        return in_lr;
      }
      sub_0800471C(0);
      if (DAT_0203016c < 9999) {
        DAT_0203016c = DAT_0203016c + 1;
      }
      break;
    default:
      goto switchD_0807c4e4_caseD_5;
    }
  }
  else {
    sub_08024FE4(5,param_1 + 0x54);
    sub_0800471C(0);
    if (DAT_0203016c < 9999) {
      DAT_0203016c = DAT_0203016c + 1;
    }
  }
  sub_080250C4(param_1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
switchD_0807c4e4_caseD_5:
  return in_lr;
}

