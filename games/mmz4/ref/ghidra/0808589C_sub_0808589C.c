// sub_0808589C at 0x0808589C (thumb)

undefined4 sub_0808589C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0801CF00(param_1,0x1b01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080858ae_caseD_1:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0808596e:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_080858ae_caseD_8:
    uVar2 = sub_08008AA4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
    sub_080852A8(param_1,uVar2,0x800);
    return in_lr;
  case 1:
    goto switchD_080858ae_caseD_1;
  case 2:
    sub_0801CF00(param_1,0x1b02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080858ae_caseD_8;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0808596e;
  case 4:
    sub_0801CF00(param_1,0x1b06);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080858ae_caseD_8;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0808596e;
  case 6:
    sub_0801CF00(param_1,0x1b02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080858ae_caseD_8;
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    goto LAB_0808596e;
  default:
    goto switchD_080858ae_caseD_8;
  }
}

