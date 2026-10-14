// sub_080A9A98 at 0x080A9A98 (thumb)

undefined4 sub_080A9A98(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,*(int *)(param_1 + 0xc4) + 1U & 0xffff);
    *(undefined *)(param_1 + 0xe) = 0;
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined *)(param_1 + 0x12) = 4;
  }
  sub_0809C980(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

