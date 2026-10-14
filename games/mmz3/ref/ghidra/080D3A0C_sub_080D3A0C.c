// sub_080D3A0C at 0x080D3A0C (thumb)

undefined4 sub_080D3A0C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    break;
  case 1:
    goto switchD_080d3a20_caseD_1;
  case 2:
    goto switchD_080d3a20_caseD_2;
  case 3:
    goto switchD_080d3a20_caseD_3;
  case 4:
    goto switchD_080d3a20_caseD_4;
  case 5:
    sub_08017700(param_1,0x3501);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 6:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_080d3ba0;
  case 7:
    sub_08017700(param_1,0);
    *(undefined *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 8:
    sub_080177F4(param_1);
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    goto joined_r0x080d3b56;
  case 9:
    sub_08017700(param_1,0x3300);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 10:
    sub_080177F4(param_1);
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 0x10;
    goto LAB_080d3b9a;
  case 0xb:
    sub_08017700(param_1,0xc400);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0xc:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x50;
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 0x20;
    goto LAB_080d3b9a;
  case 0xd:
    sub_08017700(param_1,0x3303);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0xe:
    sub_080177F4(param_1);
  default:
    goto switchD_080d3a20_caseD_f;
  }
  uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d3a20_caseD_1:
  DAT_03002ec4 = 0x40;
  DAT_03002ec6 = 0x1c0;
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0x3503);
    sub_080177F4(param_1);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d3a20_caseD_2:
    DAT_03002ec4 = 0x40;
    DAT_03002ec6 = 0x1c0;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d3a20_caseD_3:
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) != 0) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d3a20_caseD_4:
        sub_080177F4(param_1);
        bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
        bVar1 = 8;
LAB_080d3b9a:
        bVar1 = bVar1 & bVar3;
joined_r0x080d3b56:
        if (bVar1 == 0) {
LAB_080d3ba0:
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        }
      }
    }
  }
switchD_080d3a20_caseD_f:
  return in_lr;
}

