// sub_080CA28C at 0x080CA28C (thumb)

undefined4 sub_080CA28C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 0xa4) < 5) {
    sub_08017700(param_1,0x1102);
  }
  else {
    sub_08017700(param_1,0x1100);
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836c520;
    *(undefined2 *)(param_1 + 0x26) = 0x801;
    sub_08007390(param_1 + 0x74,&DAT_0836c4c0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0xb4) + -0x80;
  *(int *)(param_1 + 0xb4) = iVar1;
  iVar1 = iVar1 - *(int *)(param_1 + 0x58);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  iVar1 = *(int *)(param_1 + 0x58) + (iVar1 >> 3);
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 - *(int *)(param_1 + 0x68) < -0xeff) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

