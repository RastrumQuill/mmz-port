// sub_0804A460 at 0x0804A460 (thumb)

undefined4 sub_0804A460(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + -0xc00;
    sub_080A3028(&local_14);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + -0x4000;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar1 = (ushort *)(param_1 + 0x50);
  *puVar1 = *puVar1 + 8;
  *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 8;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x20;
  if (0xff < *puVar1) {
    *(undefined *)(param_1 + 0xd) = 0x19;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

