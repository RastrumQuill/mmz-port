// sub_08045250 at 0x08045250 (thumb)

undefined4 sub_08045250(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x24) = 0;
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 3;
    uVar1 = (undefined)uVar3;
    if (uVar3 == 0) {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0xdc) + (*(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 1);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xd4);
      *(undefined *)(param_1 + 0xca) = uVar1;
      *(undefined *)(param_1 + 0x4d) = uVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4c) = uVar1;
LAB_080453be:
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      sub_08017700(param_1,0xa516);
      sub_08007390(param_1 + 0x74,&DAT_0835ecc0);
    }
    else if (uVar3 == 1) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xe0);
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0xd8) - (*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4) >> 1);
      *(undefined *)(param_1 + 0xca) = uVar1;
      *(undefined *)(param_1 + 0x4d) = 0;
      pbVar6 = (byte *)(param_1 + 0x4a);
      *pbVar6 = *pbVar6 & 0xdf;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4c) = 0;
      *pbVar6 = *pbVar6 & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      sub_08017700(param_1,0xa514);
      sub_08007390(param_1 + 0x74,&DAT_0835ec90);
    }
    else {
      if (uVar3 == 2) {
        *(int *)(param_1 + 0x54) =
             *(int *)(param_1 + 0xdc) + (*(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 1);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xd8);
        *(undefined *)(param_1 + 0xca) = uVar1;
        *(undefined *)(param_1 + 0x4d) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x20;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
        *(undefined *)(param_1 + 0x4c) = 0;
        goto LAB_080453be;
      }
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xdc);
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0xd8) - (*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4) >> 1);
      *(undefined *)(param_1 + 0xca) = 3;
      *(undefined *)(param_1 + 0x4d) = 0;
      pbVar6 = (byte *)(param_1 + 0x4a);
      *pbVar6 = *pbVar6 & 0xdf;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4c) = 1;
      *pbVar6 = *pbVar6 | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      sub_08017700(param_1,0xa514);
      sub_08007390(param_1 + 0x74,&DAT_0835ec90);
    }
    *(undefined *)(param_1 + 0x13) = uVar1;
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_0800471C(0x7c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08045266_caseD_1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_08045538:
      if ((*(char *)(param_1 + 0x12) == '\0') ||
         (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0'))
      {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
switchD_08045266_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08045266_caseD_1;
  case 2:
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 3;
    if (uVar3 == *(byte *)(param_1 + 0xca)) {
      uVar3 = uVar3 + 1 + ((int)(uVar3 + 1) >> 2) * -4;
    }
    *(undefined *)(param_1 + 0x12) = 0x3c;
    if (uVar3 == 0) {
      local_1c = *(int *)(param_1 + 0xdc) +
                 (*(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 1);
      piVar4 = (int *)(param_1 + 0xd4);
LAB_080454fe:
      local_18 = *piVar4;
    }
    else {
      if (uVar3 == 1) {
        piVar4 = (int *)(param_1 + 0xe0);
      }
      else {
        if (uVar3 == 2) {
          local_1c = *(int *)(param_1 + 0xdc) +
                     (*(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 1);
          piVar4 = (int *)(param_1 + 0xd8);
          goto LAB_080454fe;
        }
        piVar4 = (int *)(param_1 + 0xdc);
      }
      local_1c = *piVar4;
      local_18 = *(int *)(param_1 + 0xd8) -
                 (*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4) >> 1);
    }
    sub_080BBB7C(param_1,&local_1c,uVar3 & 0xff);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    goto LAB_08045538;
  case 4:
    if (*(char *)(param_1 + 0xca) == '\0') {
      uVar5 = 0xa517;
LAB_0804556a:
      sub_08017700(param_1,uVar5);
    }
    else {
      if (*(char *)(param_1 + 0xca) == '\x01') {
        uVar5 = 0xa515;
        goto LAB_0804556a;
      }
      sub_08017700(param_1,0xa515);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08007390(param_1 + 0x74,&DAT_0835eaf8);
      *(undefined *)(param_1 + 0x4d) = 0;
      pbVar6 = (byte *)(param_1 + 0x4a);
      *pbVar6 = *pbVar6 & 0xdf;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4c) = 0;
      *pbVar6 = *pbVar6 & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xee;
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 8;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  default:
    goto switchD_08045266_caseD_6;
  }
}

