// sub_080B09E4 at 0x080B09E4 (thumb)

undefined4 sub_080B09E4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_0809C980();
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
      sub_0809C930(param_1,2);
      sub_0809C980(param_1);
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x12) == '\x05') {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x100;
      }
      else if (*(char *)(param_1 + 0x12) == '\n') {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x100;
        *(undefined *)(param_1 + 0x12) = 0;
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) {
        sub_0809C930(param_1,3);
        sub_0809C980(param_1);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        *(undefined *)(param_1 + 0x12) = 0x20;
      }
    }
  }
  else if (bVar1 == 2) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  }
  return in_lr;
}

