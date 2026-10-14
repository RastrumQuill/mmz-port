// sub_080B5030 at 0x080B5030 (thumb)

undefined4 sub_080B5030(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xca0b);
    *(undefined *)(param_1 + 0x12) = 10;
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) {
      uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      sub_0801CF00(param_1,0xca0c);
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_080b50aa;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  cVar1 = '\0';
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
LAB_080b50aa:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}

