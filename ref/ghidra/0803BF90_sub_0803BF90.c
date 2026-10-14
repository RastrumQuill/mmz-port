// sub_0803BF90 at 0x0803BF90 (thumb)

undefined4 sub_0803BF90(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08029778(param_1,2);
    sub_080297C0(param_1);
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    *(undefined *)(param_1 + 0x12) = 0x50;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0803bfa2_caseD_1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
LAB_0803c042:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0803bfa2_caseD_4:
    return in_lr;
  case 1:
    goto switchD_0803bfa2_caseD_1;
  case 2:
    uVar2 = sub_08099F90(param_1,&DAT_082add40);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (*(byte *)(*(int *)(param_1 + 0x24) + 0xc) < 2) {
      return in_lr;
    }
    DAT_02022b6e = DAT_02022b6e | 2;
    goto LAB_0803c042;
  default:
    goto switchD_0803bfa2_caseD_4;
  }
}

