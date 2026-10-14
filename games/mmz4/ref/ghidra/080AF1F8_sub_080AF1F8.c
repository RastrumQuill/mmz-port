// sub_080AF1F8 at 0x080AF1F8 (thumb)

undefined4 sub_080AF1F8(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0x180;
    *(undefined *)(param_1 + 0x13) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xd) = 0;
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x13) == '\x02') {
    sub_0801CF00(param_1,CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) + 2
                );
    *(undefined *)(param_1 + 0x13) = 0;
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  if (0xa305 < CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70))) {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0x11) | 0xa300);
  }
  sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) +
                       *(int *)(&DAT_0885fc70 + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4)
                               ) * 0x100,*(undefined4 *)(param_1 + 0x58));
  if ((sVar1 != 0) && (sVar1 != 0xf)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  return in_lr;
}

