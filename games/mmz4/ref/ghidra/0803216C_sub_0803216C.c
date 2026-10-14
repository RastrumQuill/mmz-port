// sub_0803216C at 0x0803216C (thumb)

undefined4 sub_0803216C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x2810);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x1c4);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x1c8) + 0x2d00;
  bVar1 = *(byte *)(param_1 + 10) & 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 600) & 0x10) == 0) {
      return in_lr;
    }
  }
  else {
    if ((*(uint *)(param_1 + 600) & 0x20) == 0) {
      return in_lr;
    }
    bVar1 = 0;
  }
  *(undefined *)(param_1 + 0xe) = 3;
  *(byte *)(param_1 + 0xf) = bVar1;
  return in_lr;
}

