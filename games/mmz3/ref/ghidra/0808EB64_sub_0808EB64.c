// sub_0808EB64 at 0x0808EB64 (thumb)

undefined4 sub_0808EB64(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x7500);
    uVar2 = 0x14;
    break;
  case 1:
  case 10:
    goto switchD_0808eb7a_caseD_1;
  case 2:
    sub_08017700(param_1,0x7502);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x73);
joined_r0x0808ec74:
    if (cVar1 != '\x03') {
      return in_lr;
    }
    goto LAB_0808eca2;
  case 4:
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0xb9) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_08017700(param_1,0x7503);
    *(undefined *)(param_1 + 0x13) = 6;
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(int *)(param_1 + 0x58) + 0x1a00;
    sub_080AE80C(param_1,&local_10,&local_10,0);
    sub_0800471C(0x145);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    goto switchD_0808eb7a_caseD_6;
  case 7:
    sub_08017700(param_1,0x7504);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x73);
    goto joined_r0x0808ec74;
  case 9:
    sub_08017700(param_1,0x7500);
    uVar2 = 0x20;
    break;
  case 0xb:
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  default:
    goto switchD_0808eb7a_caseD_c;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0808eb7a_caseD_1:
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
LAB_0808eca2:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_0808eb7a_caseD_c:
  return in_lr;
switchD_0808eb7a_caseD_6:
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 != '\0') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1 + -1;
  if (cVar1 != '\x01') {
    *(undefined *)(param_1 + 0xe) = 5;
    return in_lr;
  }
  goto LAB_0808eca2;
}

