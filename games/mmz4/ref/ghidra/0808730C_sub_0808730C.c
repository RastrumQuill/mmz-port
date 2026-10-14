// sub_0808730C at 0x0808730C (thumb)

undefined4 sub_0808730C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885ba98);
    sub_0801CF00(param_1,0x1d00);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 0x3f) == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_1c = -0x400;
    }
    else {
      local_1c = 0x400;
    }
    local_1c = *(int *)(param_1 + 0x54) + local_1c;
    local_18 = *(undefined4 *)(param_1 + 0x58);
    local_14 = 0x200;
    local_10 = 0;
    sub_08088E68(&local_1c,&local_14,0,2);
  }
  if (((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6800U < 0xd001) &&
     ((*(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58)) + 0xa000U < 0x14001)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

