// sub_080A8FF8 at 0x080A8FF8 (thumb)

undefined4 sub_080A8FF8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
  }
  sub_0809C980(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (3 < bVar1) {
      sub_0809C930(param_1,0);
      sub_0809C980(param_1);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (6 < bVar1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

