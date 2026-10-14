// sub_080CF340 at 0x080CF340 (thumb)

undefined4 sub_080CF340(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (((int)(uint)(byte)(&DAT_0202ebb4)
                          [*(ushort *)(&DAT_08349a40 + (uint)*(byte *)(param_1 + 0x10) * 2) >> 3] >>
         (*(ushort *)(&DAT_08349a40 + (uint)*(byte *)(param_1 + 0x10) * 2) & 7) & 1U) == 0) {
      sub_080127E4(param_1,0x8201);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_08349a10,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    else {
      sub_080127E4(param_1,0x8200);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080128D4(param_1);
    if ((DAT_0202e128 == '\0') && ((DAT_0202ec44 & 1) == 0)) {
      return in_lr;
    }
    if (-1 < *(int *)(param_1 + 0x8c)) {
      return in_lr;
    }
    DAT_0202ec44 = DAT_0202ec44 | 2;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 2:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12);
    if (cVar2 != '\0') {
LAB_080cf4d0:
      *(char *)(param_1 + 0x12) = cVar2 + -1;
      return in_lr;
    }
    sub_080127E4(param_1,0x8202);
    *(undefined *)(param_1 + 0x12) = 0x14;
    break;
  case 3:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12);
    if (cVar2 != '\0') goto LAB_080cf4d0;
    sub_08014FBC(&DAT_0202ed18,1);
    puVar3 = (undefined4 *)sub_08014738(param_1 + 0x54);
    *(int *)(param_1 + 0xb8) = (int)puVar3;
    iVar1 = DAT_0202e130;
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(DAT_0202e130 + 0x54) = *puVar3;
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0xb8) + 4);
    }
    *(undefined *)(DAT_0202e130 + 0x4c) = 1;
    *(byte *)(DAT_0202e130 + 0x4a) = *(byte *)(DAT_0202e130 + 0x4a) | 0x10;
    *(byte *)(DAT_0202e130 + 10) = *(byte *)(DAT_0202e130 + 10) | 0x10;
    sub_08038958(DAT_0202e130);
    *(undefined *)(param_1 + 0x12) = 0x5a;
    break;
  case 4:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12);
    if (cVar2 != '\0') goto LAB_080cf4d0;
    sub_080032EC(0x9b);
    sub_080127E4(param_1,0x8203);
    DAT_0202ed84 = 2;
    break;
  case 5:
    sub_080128D4(param_1);
    if (DAT_0202ed84 == 0) {
      sub_08014FBC(&DAT_0202ed18,6);
      DAT_0202ed31 = 8;
      DAT_0202ed3a = 0;
      DAT_0202e128 = '\0';
      DAT_0202ec44 = DAT_0202ec44 & 0xfffd;
      sub_080032EC(0x9a);
      sub_08022F68(DAT_0202e130);
      DAT_0202ed84 = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_080cf35a_caseD_6;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080cf35a_caseD_6:
  return in_lr;
}

