// sub_08051848 at 0x08051848 (thumb)

undefined4 sub_08051848(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x25) = 0x1a;
    sub_080805E8(param_1);
    sub_08080644(param_1);
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    sub_08017700(param_1,0x2700);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 4;
LAB_080519f0:
    sub_080177F4(param_1);
    break;
  case 2:
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x1000;
    uVar3 = 0x2702;
    goto LAB_08051976;
  case 3:
  case 7:
    goto switchD_0805185c_caseD_3;
  case 4:
    *(undefined *)(param_1 + 0x13) = 0x20;
    sub_08017700(param_1,0x2704);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    goto LAB_08051992;
  case 6:
    sub_0800471C(99);
    sub_08080944(*(int *)(param_1 + 0x54) + 0x1e00,*(int *)(param_1 + 0x58) + -0x1d00);
    uVar3 = 0x2706;
LAB_08051976:
    sub_08017700(param_1,uVar3);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0805185c_caseD_3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_08051992:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 8:
    *(undefined *)(param_1 + 0x13) = 0x20;
    sub_08017700(param_1,0x2707);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    if (((*(uint *)(param_1 + 0xb4) & 1) != 0) &&
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0')) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0x2700);
    goto LAB_080519f0;
  case 10:
    *(undefined *)(param_1 + 0x12) = 200;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    sub_08017700(param_1,0x2708);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) + -0x200 + (uVar2 * 0x40 >> 0x16);
    sub_080177F4(param_1);
  default:
    break;
  }
  return in_lr;
}

