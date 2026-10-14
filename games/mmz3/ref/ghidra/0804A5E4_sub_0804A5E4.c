// sub_0804A5E4 at 0x0804A5E4 (thumb)

undefined4 sub_0804A5E4(int param_1)

{
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 0xc1) | 2;
    *(undefined *)(param_1 + 0xbe) = 0;
    sub_08017700(param_1,0xa711);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804a5f6_caseD_1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0804a674:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0804a5f6_caseD_6:
    return in_lr;
  case 1:
    goto switchD_0804a5f6_caseD_1;
  case 2:
    sub_08007390(param_1 + 0x74,&DAT_0835f574);
    sub_08017700(param_1,0xa713);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0xbe) == '\0') {
      return in_lr;
    }
    goto LAB_0804a674;
  case 4:
    *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 0xc1) | 1;
    sub_08007390(param_1 + 0x74,&DAT_0835f544);
    sub_08017700(param_1,0xa715);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_0804a5f6_caseD_6;
  }
}

