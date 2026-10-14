// sub_080FFB2C at 0x080FFB2C (thumb)

undefined4 sub_080FFB2C(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (((int)(uint)(byte)(&DAT_0202e8b4)
                          [*(ushort *)(&DAT_088681d4 + (uint)*(byte *)(param_1 + 0x10) * 2) >> 3] >>
         (*(ushort *)(&DAT_088681d4 + (uint)*(byte *)(param_1 + 0x10) * 2) & 7) & 1U) == 0) {
      sub_0801CF00(param_1,0xdd01);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&DAT_088681a4,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0x80ffb11;
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    else {
      sub_0801CF00(param_1,0xdd00);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    if ((DAT_0202dbe8 == '\0') && ((DAT_0202e924 & 1) == 0)) {
      return in_lr;
    }
    if (-1 < *(int *)(param_1 + 0x8c)) {
      return in_lr;
    }
    if (*(int *)(param_1 + 0xb4) == 0) {
      return in_lr;
    }
    DAT_0202e924 = DAT_0202e924 | 2;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 2:
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x12);
    if (cVar2 != '\0') {
LAB_080ffcd4:
      *(char *)(param_1 + 0x12) = cVar2 + -1;
      return in_lr;
    }
    sub_0801CF00(param_1,0xdd02);
    *(undefined *)(param_1 + 0x12) = 0x14;
    break;
  case 3:
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x12);
    if (cVar2 != '\0') goto LAB_080ffcd4;
    sub_0801F908(&DAT_0202e9f8,1);
    puVar3 = (undefined4 *)sub_0801EF14(param_1 + 0x54);
    *(int *)(param_1 + 0xb8) = (int)puVar3;
    iVar1 = DAT_0202dbf0;
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(DAT_0202dbf0 + 0x54) = *puVar3;
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0xb8) + 4);
      sub_0802B7B4();
    }
    *(undefined *)(DAT_0202dbf0 + 0x4c) = 1;
    *(byte *)(DAT_0202dbf0 + 0x4a) = *(byte *)(DAT_0202dbf0 + 0x4a) | 0x10;
    *(byte *)(DAT_0202dbf0 + 10) = *(byte *)(DAT_0202dbf0 + 10) | 0x10;
    *(undefined *)(param_1 + 0x12) = 0x5a;
    break;
  case 4:
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x12);
    if (cVar2 != '\0') goto LAB_080ffcd4;
    sub_08002B10(0x4b);
    sub_0801CF00(param_1,0xdd03);
    DAT_0202ea64 = 2;
    break;
  case 5:
    sub_0801CFF0(param_1);
    if (DAT_0202ea64 == 0) {
      DAT_0202e924 = DAT_0202e924 & 0xfffd;
      sub_0801F908(&DAT_0202e9f8,6);
      DAT_0202ea11 = 8;
      DAT_0202ea1a = 0;
      DAT_0202ea64 = 1;
      DAT_0202dbe8 = '\0';
      sub_08002B10(0x4a);
      sub_0802B7B4(DAT_0202dbf0);
      *(undefined *)(DAT_0202dbf0 + 0xd) = 10;
      *(undefined *)(DAT_0202dbf0 + 0xe) = 4;
      *(undefined *)(DAT_0202dbf0 + 0xf) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_080ffb44_caseD_6;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080ffb44_caseD_6:
  return in_lr;
}

