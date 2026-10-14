// sub_08088080 at 0x08088080 (thumb)

undefined4 sub_08088080(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x137);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_18 = -0x400;
    }
    else {
      local_18 = 0x400;
    }
    local_18 = *(int *)(param_1 + 0x54) + local_18;
    local_14 = *(undefined4 *)(param_1 + 0x58);
    local_10 = 0x200;
    local_c = 0;
    sub_08088E68(&local_18,&local_10,0,2);
    sub_08005784(param_1 + 0x74,&DAT_0885baf8);
    sub_0801CF00(param_1,0x1d11);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    cVar1 = *(char *)(param_1 + 0xb4) + -1;
    *(char *)(param_1 + 0xb4) = cVar1;
    if (cVar1 == '\0') {
      uVar2 = 4;
    }
    else {
      uVar2 = 1;
    }
    *(undefined *)(param_1 + 0xe) = uVar2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

