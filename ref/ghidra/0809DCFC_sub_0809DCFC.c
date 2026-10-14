// sub_0809DCFC at 0x0809DCFC (thumb)

undefined4 sub_0809DCFC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_0809dd14_caseD_1;
  case 2:
    goto switchD_0809dd14_caseD_2;
  case 3:
    goto switchD_0809dd14_caseD_3;
  case 4:
    goto switchD_0809dd14_caseD_4;
  case 5:
    goto switchD_0809dd14_caseD_5;
  case 6:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    goto LAB_0809de44;
  default:
    goto switchD_0809dd14_caseD_7;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b5444,param_1 + 0x4c,0);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809dd14_caseD_1:
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0809C930(param_1,0);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    sub_08001EAC(0x4f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809dd14_caseD_2:
    sub_0809C980(param_1);
    if (*(int *)(param_1 + 0x4c) == *(int *)(iVar2 + 0x4c)) {
      sub_0809C930(param_1,1);
      *(undefined *)(param_1 + 0x12) = 0x10;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809dd14_caseD_3:
      sub_0809C980(param_1);
      if (((*(char *)(param_1 + 0x12) == '\0') ||
          (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')
          ) && (*(int *)(param_1 + 0x50) == *(int *)(iVar2 + 0x50))) {
        sub_0809C930(param_1,2);
        *(undefined *)(param_1 + 0x12) = 0x10;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809dd14_caseD_4:
        sub_0809C980(param_1);
        cVar1 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar1;
        if (cVar1 == '\0') {
          sub_0809C930(param_1,3);
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809dd14_caseD_5:
          sub_0809C980(param_1);
          if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0809de44:
            *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
      }
    }
  }
switchD_0809dd14_caseD_7:
  return in_lr;
}

