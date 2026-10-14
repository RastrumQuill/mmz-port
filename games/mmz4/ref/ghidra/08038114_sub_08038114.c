// sub_08038114 at 0x08038114 (thumb)

undefined4 sub_08038114(int param_1,char param_2)

{
  undefined4 in_lr;
  
  switch(param_2) {
  case '\0':
  case '\x01':
  case '\x06':
    *(undefined *)(param_1 + 0xc) = 2;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x32) = 0;
    goto switchD_08038128_caseD_7;
  case '\x02':
    *(undefined *)(param_1 + 0xc) = 7;
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xf) = 0;
    break;
  case '\x03':
    *(undefined *)(param_1 + 0xc) = 3;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xf) = 0x10;
    break;
  case '\x04':
    *(undefined *)(param_1 + 0xc) = 3;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xf) = 0x12;
    break;
  case '\x05':
    *(undefined *)(param_1 + 0xc) = 7;
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xf) = 2;
    break;
  default:
    goto switchD_08038128_caseD_7;
  }
  *(undefined *)(param_1 + 0x32) = 0xff;
switchD_08038128_caseD_7:
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0x10) = 0xff;
  *(undefined *)(param_1 + 0x11) = 0xff;
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x18) = 0xff;
  *(undefined *)(param_1 + 0x19) = 0xff;
  *(undefined *)(param_1 + 0x1a) = 0xff;
  *(undefined *)(param_1 + 0x1b) = 0xff;
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  *(undefined2 *)(param_1 + 0x20) = 1;
  *(undefined2 *)(param_1 + 0x22) = 0x200;
  *(undefined2 *)(param_1 + 0x24) = 2;
  *(undefined2 *)(param_1 + 0x26) = 0x100;
  *(undefined2 *)(param_1 + 0x28) = 4;
  *(undefined *)(param_1 + 0x2a) = 0;
  *(undefined *)(param_1 + 0x2b) = 1;
  *(undefined *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0x2d) = 0;
  *(undefined *)(param_1 + 0x30) = 0;
  *(undefined *)(param_1 + 0x31) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined *)(param_1 + 8) = 0xff;
  *(undefined *)(param_1 + 9) = 0xff;
  *(undefined *)(param_1 + 10) = 0xff;
  *(undefined *)(param_1 + 0xb) = 0xff;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0x34) = 0x40;
  *(undefined *)(param_1 + 0x35) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined *)(param_1 + 0x3c) = 0;
  *(undefined *)(param_1 + 0x3d) = 0;
  *(undefined *)(param_1 + 0x3e) = 0;
  *(undefined *)(param_1 + 0x3f) = 0;
  *(undefined *)(param_1 + 0x40) = 0;
  *(undefined *)(param_1 + 0x41) = 0xff;
  *(char *)(param_1 + 0x13) = param_2 + '\x04';
  return in_lr;
}

