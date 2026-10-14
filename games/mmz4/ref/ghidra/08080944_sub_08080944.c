// sub_08080944 at 0x08080944 (thumb)

undefined4 sub_08080944(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x1801);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)(&DAT_0885af38 +
                        (uint)*(byte *)(param_1 + 0xb5) * 4 +
                        (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) -
                        0x1800) * 8)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08002B10(0x13b);
    if (*(byte *)(param_1 + 0xb5) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 4;
    }
    *(undefined *)(param_1 + 0xe) = uVar1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

