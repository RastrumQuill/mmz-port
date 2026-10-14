// sub_0808ACD8 at 0x0808ACD8 (thumb)

undefined4 sub_0808ACD8(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  *(int *)(param_1 + 0xb4) = DAT_020302c4 + -0x4000;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x6e01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0808acfc_caseD_1:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    iVar3 = *(int *)(param_1 + 0x68) +
            ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x68)) * 8 >> 8);
    *(int *)(param_1 + 0x68) = iVar3;
    *(int *)(param_1 + 0x58) = iVar3 + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 0xf;
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0808ae5a:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0808acfc_caseD_7:
    return in_lr;
  case 1:
    goto switchD_0808acfc_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x13) = 10;
    goto LAB_0808ae12;
  case 3:
  case 5:
    goto switchD_0808acfc_caseD_3;
  case 4:
    *(undefined *)(param_1 + 0x13) = 10;
    local_14 = *(int *)(param_1 + 0x54) + -0xa00;
    local_10 = *(int *)(param_1 + 0x58) + 0x1b00;
    if (*(int *)(param_1 + 0xbc) == 0) {
      iVar3 = sub_08064634(&local_14,2,0);
      *(int *)(param_1 + 0xbc) = iVar3;
      *(undefined *)(iVar3 + 0x25) = 0x15;
      puVar2 = (undefined *)(param_1 + 0xc0);
LAB_0808ae06:
      *puVar2 = 0x20;
    }
    else {
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar3 = sub_08064634(&local_14,2,0);
        *(int *)(param_1 + 0x2c) = iVar3;
        *(undefined *)(iVar3 + 0x25) = 0x15;
        puVar2 = (undefined *)(param_1 + 0xc1);
        goto LAB_0808ae06;
      }
      if (*(int *)(param_1 + 0x28) == 0) {
        iVar3 = sub_08064634(&local_14,2,0);
        *(int *)(param_1 + 0x28) = iVar3;
        *(undefined *)(iVar3 + 0x25) = 0x15;
        puVar2 = (undefined *)(param_1 + 0xc2);
        goto LAB_0808ae06;
      }
    }
    sub_08017700(param_1,0x6e03);
LAB_0808ae12:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0808acfc_caseD_3:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    iVar3 = *(int *)(param_1 + 0x68) +
            ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x68)) * 8 >> 8);
    *(int *)(param_1 + 0x68) = iVar3;
    *(int *)(param_1 + 0x58) = iVar3 + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 0xf;
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x13) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    goto LAB_0808ae5a;
  case 6:
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  default:
    goto switchD_0808acfc_caseD_7;
  }
}

