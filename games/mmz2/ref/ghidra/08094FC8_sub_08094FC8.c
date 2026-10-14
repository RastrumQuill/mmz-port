// sub_08094FC8 at 0x08094FC8 (thumb)

undefined4 sub_08094FC8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08006E08(param_1 + 0x74,&DAT_08342b10);
    sub_080127E4(param_1,0x9807);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_08094370(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0809507c:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_080127E4(param_1,0x9808);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_08094370(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    cVar1 = sub_08094350(param_1);
    if (cVar1 != '\0') goto LAB_0809507c;
    break;
  case 4:
    sub_080127E4(param_1,0x980e);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080128D4(param_1);
    sub_08094370(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08094fdc_caseD_6;
  }
  sub_080128D4(param_1);
switchD_08094fdc_caseD_6:
  return in_lr;
}

