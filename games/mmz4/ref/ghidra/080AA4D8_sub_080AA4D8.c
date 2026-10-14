// sub_080AA4D8 at 0x080AA4D8 (thumb)

undefined4 sub_080AA4D8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885f5e4);
    sub_0801CF00(param_1,0x9406);
    *(undefined *)(param_1 + 0x13) = 0x60;
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xb4) = 1;
    }
    sub_08002B10(0x167);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0xe) == '\x01') && ((*(byte *)(param_1 + 0x13) & 7) == 0)) {
    sub_080CC5FC(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1,0);
  }
  cVar1 = sub_080AA774(param_1);
  if ((cVar1 != '\0') || (*(char *)(param_1 + 0x73) == '\x03')) {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      sub_0801CF00(param_1,0x9407);
      *(undefined *)(param_1 + 0x13) = 0xff;
      if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
        *(undefined *)(*(int *)(param_1 + 0x2c) + 0x12) = 0;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined *)(param_1 + 0xb4) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

