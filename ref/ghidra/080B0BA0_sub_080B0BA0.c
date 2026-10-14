// sub_080B0BA0 at 0x080B0BA0 (thumb)

undefined4 sub_080B0BA0(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0809C980(param_1);
  if (((*(ushort *)(param_1 + 0x90) & 0x2000) != 0) && (DAT_02022874 != '\0')) {
    sub_080BC808(0x20b);
    if (*(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

