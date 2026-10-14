// sub_080B559C at 0x080B559C (thumb)

undefined4 sub_080B559C(int param_1)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
  case 3:
    if (*(byte *)(param_1 + 0x12) < 0x1c) {
      return in_lr;
    }
    break;
  case 1:
    if (*(byte *)(param_1 + 0x12) < 0x1a) {
      return in_lr;
    }
    break;
  case 2:
    if (*(byte *)(param_1 + 0x12) < 0x40) {
      return in_lr;
    }
    break;
  case 4:
    if (0x19 < *(byte *)(param_1 + 0x12)) {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  default:
    goto switchD_080b55b4_caseD_5;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0x12) = 0;
switchD_080b55b4_caseD_5:
  return in_lr;
}

