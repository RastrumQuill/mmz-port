// sub_0804A72C at 0x0804A72C (thumb)

undefined4 sub_0804A72C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0835f5bc);
    iVar1 = *(int *)(param_1 + 0x54) + -0x800;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar1 = *(int *)(param_1 + 0x54) + 0x800;
    }
    sub_080A0420(param_1,iVar1,*(int *)(param_1 + 0x58) + -0x2600,*(byte *)(param_1 + 10) >> 4 & 1);
    *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 0xc1) & 0xfe;
    sub_08017700(param_1,0xa718);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804a740_caseD_1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0xbe) != '\0') {
LAB_0804a804:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0804a740_caseD_6:
    return in_lr;
  case 1:
    goto switchD_0804a740_caseD_1;
  case 2:
    *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 0xc1) | 1;
    sub_08007390(param_1 + 0x74,&DAT_0835efbc);
    sub_08017700(param_1,0xa71a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_0804a804;
  case 4:
    sub_08017700(param_1,0xa71b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_0804a740_caseD_6;
  }
}

