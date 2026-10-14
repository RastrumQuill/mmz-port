// sub_08092E2C at 0x08092E2C (thumb)

void sub_08092E2C(int param_1)

{
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
  case 3:
    if (*(byte *)(param_1 + 0x12) < 0x1c) {
      return;
    }
    break;
  case 1:
    if (*(byte *)(param_1 + 0x12) < 0x1a) {
      return;
    }
    break;
  case 2:
    if (*(byte *)(param_1 + 0x12) < 0x40) {
      return;
    }
    break;
  case 4:
    if (0x19 < *(byte *)(param_1 + 0x12)) {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0xc);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  default:
    goto switchD_08092e42_caseD_5;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0x12) = 0;
switchD_08092e42_caseD_5:
  return;
}

