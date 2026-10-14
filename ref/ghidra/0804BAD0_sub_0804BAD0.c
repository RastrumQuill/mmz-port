// sub_0804BAD0 at 0x0804BAD0 (thumb)

undefined4 sub_0804BAD0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x13) = 0;
    if (*(char *)(param_1 + 0x11) == '\x05') {
      *(undefined *)(param_1 + 0xd) = 6;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    sub_080033F0(param_1 + 0x6c,4);
    iVar1 = sub_08005428(DAT_02022e98);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 9) = 2;
      *(undefined4 *)(iVar1 + 0x14) = 0x804adfd;
      *(undefined2 *)(iVar1 + 0x1c) = DAT_02022ea4;
      *(undefined *)(iVar1 + 0x1e) = DAT_02022f32;
      *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(int *)(iVar1 + 0x50) = *(int *)(param_1 + 0x50) + 0x1000;
      *(undefined *)(iVar1 + 0x10) = 4;
      *(int *)(iVar1 + 0x20) = param_1;
    }
    *(int *)(param_1 + 0x24) = iVar1;
  }
  return in_lr;
}

