// sub_080A9938 at 0x080A9938 (thumb)

undefined4 sub_080A9938(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xbc) + 0x9a01);
    sub_080A970C(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ('\x02' < *(char *)(param_1 + 0x71)) {
    if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x10300) {
      sub_08005784(param_1 + 0x74,&DAT_0885f438);
      *(undefined4 *)(param_1 + 0x98) = 0x80a9649;
      sub_08002B10(0x133);
    }
    cVar1 = sub_080A97A0(param_1);
    if (cVar1 == '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    }
    cVar1 = sub_080A97F0(param_1);
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x20600) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08005784(param_1 + 0x74,&DAT_0885f4c8);
  }
  return in_lr;
}

