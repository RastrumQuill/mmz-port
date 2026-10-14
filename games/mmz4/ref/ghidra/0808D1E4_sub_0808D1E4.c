// sub_0808D1E4 at 0x0808D1E4 (thumb)

undefined4 sub_0808D1E4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    local_24 = *(undefined4 *)(param_1 + 0x54);
    local_20 = *(int *)(param_1 + 0x58);
    bVar1 = 0;
    do {
      sub_080BE9FC(&local_24);
      local_20 = local_20 + -0x7f00;
      bVar1 = bVar1 + 1;
    } while (bVar1 < 3);
    sub_08002B10(0x132);
    sub_0801CF00(param_1,0x2500);
    sub_08005784(param_1 + 0x74,&DAT_0885c4d8);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0808d1fa_caseD_1:
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0808d3de:
      *(char *)(param_1 + 0xe) = cVar2;
    }
switchD_0808d1fa_caseD_c:
    return in_lr;
  case 1:
    goto switchD_0808d1fa_caseD_1;
  case 2:
    sub_0801CF00(param_1,0x2502);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\x16') {
      sub_08005784(param_1 + 0x74,&DAT_0885c460);
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0808d3de;
  case 4:
    sub_08005784(param_1 + 0x74,&DAT_0885c460);
    sub_0801CF00(param_1,0x2503);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0808d3de;
  case 6:
    sub_0801CF00(param_1,0x2504);
    *(undefined *)(param_1 + 0x12) = 0x24;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
    cVar2 = sub_08128A9C(*(undefined *)(param_1 + 0x12),0xc);
    if (cVar2 == '\0') {
      local_1c = *(undefined4 *)(param_1 + 0x54);
      local_18 = *(int *)(param_1 + 0x58) + -0x1800;
      sub_08002B10(0x13f);
      sub_080BE96C(&local_1c,0,1);
      sub_080BE96C(&local_1c,1,1);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0808d3de;
  case 8:
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0808d3de;
  case 10:
    sub_08005784(param_1 + 0x74,&DAT_0885c400);
    sub_0801CF00(param_1,0x2505);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar2 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    goto LAB_0808d3de;
  default:
    goto switchD_0808d1fa_caseD_c;
  }
}

