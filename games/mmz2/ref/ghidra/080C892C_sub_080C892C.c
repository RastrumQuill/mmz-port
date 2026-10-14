// sub_080C892C at 0x080C892C (thumb)

undefined4 sub_080C892C(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    puVar1 = &DAT_0202e030;
  }
  else {
    puVar1 = &DAT_0202e038;
  }
  *(undefined4 *)(param_1 + 0x54) = *puVar1;
  *(undefined4 *)(param_1 + 0x58) = puVar1[1];
  if (*(char *)(param_1 + 0xd) == '\0') {
    DAT_0202e68a = 0x360;
    DAT_0202e48a = 9;
    sub_08002638(&DAT_084336c4,0x12c00);
    sub_08002AEC(&DAT_084336d0,(DAT_0202e48a - 4) * 0x20 + 0x200);
    sub_080127E4(param_1,*(byte *)(param_1 + 0x11) | 32000);
    *(undefined *)(param_1 + 0x25) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  return in_lr;
}

