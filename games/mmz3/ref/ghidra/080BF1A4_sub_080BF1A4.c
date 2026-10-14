// sub_080BF1A4 at 0x080BF1A4 (thumb)

undefined4 sub_080BF1A4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800471C(0x80);
    sub_08004230(0x46);
    iVar2 = sub_08017B8C(param_1);
    sub_080040A8(0x47,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + -0xa00 + (uint)*(byte *)(param_1 + 0x12) * 0x1400;
    *(undefined *)(param_1 + 0x13) = 6;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if ((*(char *)(param_1 + 0x12) != '\0') && ((*(byte *)(param_1 + 0x13) & 3) == 0)) {
      sub_080BEE5C(param_1);
    }
    break;
  case 2:
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * 0x80 + -0x40;
    *(undefined *)(param_1 + 0x13) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if ((*(char *)(param_1 + 0x12) != '\0') && ((*(byte *)(param_1 + 0x13) & 3) == 0)) {
LAB_080bf2d8:
      sub_080BEE5C(param_1);
    }
LAB_080bf2de:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
LAB_080bf2e6:
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 4:
    *(undefined *)(param_1 + 0x13) = 0x50;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if ((*(char *)(param_1 + 0x12) != '\0') && ((*(byte *)(param_1 + 0x13) & 3) == 0)) {
      sub_080BEE5C(param_1);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0xc0;
    goto LAB_080bf2e6;
  case 6:
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * -0xea + 0x75;
    *(undefined *)(param_1 + 0x13) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    if (((*(char *)(param_1 + 0x12) != '\0') && ((*(byte *)(param_1 + 0x13) & 3) == 0)) &&
       (0x2000 < *(int *)(param_1 + 0x54) - *(int *)(*(int *)(param_1 + 0x2c) + 0x54)))
    goto LAB_080bf2d8;
    goto LAB_080bf2de;
  case 8:
    *(undefined *)(param_1 + 0x13) = 0x50;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    sub_080041E4(0x47);
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0xc0;
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      sub_08004230(0x47);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc);
    }
  default:
    goto switchD_080bf1ba_caseD_a;
  }
  sub_080041E4(0x47);
  sub_080177F4(param_1);
switchD_080bf1ba_caseD_a:
  return in_lr;
}

