// sub_0808AE80 at 0x0808AE80 (thumb)

undefined4 sub_0808AE80(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  *(int *)(param_1 + 0xb4) = DAT_020302c4 + -0x4000;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x6e04);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0808aea4_caseD_1:
    iVar2 = *(int *)(param_1 + 0x68) +
            ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x68)) * 8 >> 8);
    *(int *)(param_1 + 0x68) = iVar2;
    *(int *)(param_1 + 0x58) = iVar2 + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 0xf;
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0808af98:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0808aea4_caseD_7:
    return in_lr;
  case 1:
    goto switchD_0808aea4_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x13) = 10;
    goto LAB_0808af56;
  case 3:
  case 5:
    goto switchD_0808aea4_caseD_3;
  case 4:
    *(undefined *)(param_1 + 0x13) = 10;
    local_10 = *(int *)(param_1 + 0x54) + 0x2b00;
    local_c = *(int *)(param_1 + 0x58) + 0x300;
    sub_080AD550(&local_10,0);
    sub_08017700(param_1,0x6e05);
LAB_0808af56:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0808aea4_caseD_3:
    iVar2 = *(int *)(param_1 + 0x68) +
            ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x68)) * 8 >> 8);
    *(int *)(param_1 + 0x68) = iVar2;
    *(int *)(param_1 + 0x58) = iVar2 + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 0xf;
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x13) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    goto LAB_0808af98;
  case 6:
    iVar2 = *(int *)(param_1 + 0x68) +
            ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x68)) * 8 >> 8);
    *(int *)(param_1 + 0x68) = iVar2;
    *(int *)(param_1 + 0x58) = iVar2 + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 0xf;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  default:
    goto switchD_0808aea4_caseD_7;
  }
}

