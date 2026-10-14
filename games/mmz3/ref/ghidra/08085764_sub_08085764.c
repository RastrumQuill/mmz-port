// sub_08085764 at 0x08085764 (thumb)

undefined4 sub_08085764(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x6800);
    sub_0800471C(0x103);
    *(undefined *)(param_1 + 0xb9) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0808577a_caseD_1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_08085802:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0808577a_caseD_6:
    return in_lr;
  case 1:
    goto switchD_0808577a_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0xb9) = 1;
    sub_08007390(param_1 + 0x74,&DAT_08364c80);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    goto LAB_08085802;
  case 4:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0x15;
      local_14 = -0x1200;
    }
    else {
      uVar2 = 0x6b;
      local_14 = 0x1200;
    }
    local_14 = *(int *)(param_1 + 0x54) + local_14;
    local_10 = *(int *)(param_1 + 0x58) + -0xa00;
    sub_0809C41C(&local_14,0x200,uVar2);
    sub_080B2484(3,&local_14);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xeb;
      local_14 = -0x1200;
    }
    else {
      uVar2 = 0x95;
      local_14 = 0x1200;
    }
    local_14 = *(int *)(param_1 + 0x54) + local_14;
    local_10 = *(int *)(param_1 + 0x58) + 0xa00;
    sub_0809C41C(&local_14,0x200,uVar2);
    sub_080B2484(3,&local_14);
    sub_0800471C(0x2c);
    sub_08017700(param_1,0x6802);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_0800471C(0x103);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_0808577a_caseD_6;
  }
}

