// sub_0802DC0C at 0x0802DC0C (thumb)

undefined4 sub_0802DC0C(int param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700(param_1,0x1b01);
    *pcVar2 = *pcVar2 + '\x01';
  }
  sub_08034558(param_1,0x1b01);
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x1b01) {
    sub_080177CC(param_1,0x1b01,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xec) = 0;
    uVar1 = sub_08025BEC(param_1);
    sub_08017700(param_1,uVar1);
  }
  return in_lr;
}

