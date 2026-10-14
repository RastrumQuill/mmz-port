// sub_080C93A8 at 0x080C93A8 (thumb)

undefined4 sub_080C93A8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0xb4) == 0) {
      return in_lr;
    }
    DAT_0202ed84 = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (DAT_0202ed84 == 0) {
    sub_08022F20(*(undefined4 *)(param_1 + 0xb4));
    DAT_0202ed84 = 1;
    puVar2 = (undefined4 *)sub_080147E0(param_1 + 0x54);
    *(int *)(param_1 + 0xb8) = (int)puVar2;
    iVar1 = DAT_0202e130;
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(DAT_0202e130 + 0x54) = *puVar2;
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0xb8) + 4);
      DAT_0202ec44 = DAT_0202ec44 & 0xfffe;
      DAT_0202ed31 = 8;
      DAT_0202ed3a = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

