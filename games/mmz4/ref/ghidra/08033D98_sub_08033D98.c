// sub_08033D98 at 0x08033D98 (thumb)

undefined4 sub_08033D98(int param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,0x1b01);
    *pcVar2 = *pcVar2 + '\x01';
  }
  sub_0803A3BC(param_1,0x1b01);
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x1b01) {
    sub_0801CFC8(param_1,0x1b01,*(undefined *)(param_1 + 0x16e),*(undefined *)(param_1 + 0x16f));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x100) = 0;
    uVar1 = sub_0802B7C0(param_1);
    sub_0801CF00(param_1,uVar1);
  }
  return in_lr;
}

