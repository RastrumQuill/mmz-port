// sub_0808D0AC at 0x0808D0AC (thumb)

undefined4 sub_0808D0AC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0801CF00(param_1,0x2500);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0808d0c2_caseD_1:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0808d1d0:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_0808d0c2_caseD_8:
    return in_lr;
  case 1:
    goto switchD_0808d0c2_caseD_1;
  case 2:
    sub_08005784(param_1 + 0x74,&DAT_0885c460);
    sub_0801CF00(param_1,0x2503);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(int *)(param_1 + 0x58) + -0x1800;
    sub_08002B10(0x13f);
    sub_080BE96C(&local_10,0,0);
    sub_080BE96C(&local_10,1,0);
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0808d1d0;
  case 4:
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0808d1d0;
  case 6:
    sub_0801CF00(param_1,0x2505);
    sub_08005784(param_1 + 0x74,&DAT_0885c400);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 0;
    cVar1 = '\0';
    goto LAB_0808d1d0;
  default:
    goto switchD_0808d0c2_caseD_8;
  }
}

