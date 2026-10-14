// sub_080C2E10 at 0x080C2E10 (thumb)

undefined4 sub_080C2E10(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080127E4(param_1,*(byte *)(param_1 + 0x11) | 0x2c00);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_080c2e3c;
  sub_080128D4(param_1);
LAB_080c2e3c:
  *(uint *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb4) + (((uint)DAT_02000fa0._2_2_ - *(int *)(param_1 + 0x68)) + 1) * 0x80
  ;
  return in_lr;
}

