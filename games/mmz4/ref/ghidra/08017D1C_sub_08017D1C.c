// sub_08017D1C at 0x08017D1C (thumb)

undefined4 sub_08017D1C(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 3;
    sub_0800249C(0x48,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08017d2e_caseD_1:
    sub_080025D8(0x48);
    if (DAT_0202dad4 != '\0') {
      sub_08002624(0x48);
      sub_0800249C(0x49,0);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08017d2e_caseD_2:
      cVar1 = sub_080025D8(0x49);
      if ((cVar1 == '\x04') && (DAT_0202dad4 == '\x02')) {
        sub_08002624(0x49);
        sub_0800249C(0x4a,0);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08017d2e_caseD_3:
        cVar1 = sub_080025D8(0x4a);
        if (cVar1 == '\x04') {
          sub_08002624(0x4a);
          *(undefined2 *)(param_1 + 0x12) = 0x78;
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        }
      }
    }
    return in_lr;
  case 1:
    goto switchD_08017d2e_caseD_1;
  case 2:
    goto switchD_08017d2e_caseD_2;
  case 3:
    goto switchD_08017d2e_caseD_3;
  case 4:
    sVar2 = *(short *)(param_1 + 0x12) + -1;
    *(short *)(param_1 + 0x12) = sVar2;
    if (sVar2 == 0) {
      DAT_0202dad4 = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    return in_lr;
  default:
    return in_lr;
  }
}

