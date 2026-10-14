// sub_080D8298 at 0x080D8298 (thumb)

undefined4 sub_080D8298(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (((int)(uint)(byte)(&DAT_02030104)
                          [*(ushort *)(&DAT_0836d82c + (uint)*(byte *)(param_1 + 0x10) * 2) >> 3] >>
         (*(ushort *)(&DAT_0836d82c + (uint)*(byte *)(param_1 + 0x10) * 2) & 7) & 1U) == 0) {
      sub_08017700(param_1,0x7b01);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_0800736C(param_1 + 0x74,&DAT_0836d7fc,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0x80d827d;
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    else {
      sub_08017700(param_1,0x7b00);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if ((((DAT_0202f5b8 == '\0') && ((DAT_020301b4 & 1) == 0)) || (-1 < *(int *)(param_1 + 0x8c)))
       || (((*(int *)(param_1 + 0xb4) == 0 ||
            (0x4000 < (*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x2000U)) ||
           (0x4000 < (*(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x2000U))))
    goto switchD_080d82b0_caseD_6;
    DAT_020301b4 = DAT_020301b4 | 2;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 2:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12);
    if (cVar2 != '\0') {
LAB_080d8478:
      *(char *)(param_1 + 0x12) = cVar2 + -1;
      goto switchD_080d82b0_caseD_6;
    }
    sub_0800471C(0x14a);
    sub_08017700(param_1,0x7b02);
    *(undefined *)(param_1 + 0x12) = 0x14;
    break;
  case 3:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12);
    if (cVar2 != '\0') goto LAB_080d8478;
    sub_0801A7D8(&DAT_02030288,1);
    puVar3 = (undefined4 *)sub_08019EB8(param_1 + 0x54);
    *(int *)(param_1 + 0xb8) = (int)puVar3;
    iVar1 = DAT_0202f5c0;
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(DAT_0202f5c0 + 0x54) = *puVar3;
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0xb8) + 4);
      sub_08025BDC();
    }
    *(undefined *)(DAT_0202f5c0 + 0x4c) = 1;
    *(byte *)(DAT_0202f5c0 + 0x4a) = *(byte *)(DAT_0202f5c0 + 0x4a) | 0x10;
    *(byte *)(DAT_0202f5c0 + 10) = *(byte *)(DAT_0202f5c0 + 10) | 0x10;
    *(undefined *)(param_1 + 0x12) = 0x5a;
    break;
  case 4:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12);
    if (cVar2 != '\0') goto LAB_080d8478;
    sub_0800471C(0x9b);
    sub_08017700(param_1,0x7b03);
    DAT_020302f4 = 2;
    break;
  case 5:
    sub_080177F4(param_1);
    if (DAT_020302f4 == 0) {
      DAT_020301b4 = DAT_020301b4 & 0xfffd;
      sub_0801A7D8(&DAT_02030288,6);
      DAT_020302a1 = 8;
      DAT_020302aa = 0;
      DAT_020302f4 = 1;
      DAT_0202f5b8 = '\0';
      sub_0800471C(0x9a);
      sub_08025BDC(DAT_0202f5c0);
      *(undefined *)(DAT_0202f5c0 + 0xd) = 10;
      *(undefined *)(DAT_0202f5c0 + 0xe) = 4;
      *(undefined *)(DAT_0202f5c0 + 0xf) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_080d82b0_caseD_6;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080d82b0_caseD_6:
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return in_lr;
}

