// sub_080A9ACC at 0x080A9ACC (thumb)

undefined4 sub_080A9ACC(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  cVar1 = sub_080A97A0(param_1);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  cVar1 = sub_080A96E4(param_1);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  else {
    uVar2 = *(byte *)(param_1 + 0xbc) + 0x9a03;
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != uVar2) {
      sub_0801CF00(param_1,uVar2 & 0xffff);
      sub_08005784(param_1 + 0x74,&DAT_0885f468);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

