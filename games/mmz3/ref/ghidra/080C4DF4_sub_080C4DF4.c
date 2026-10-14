// sub_080C4DF4 at 0x080C4DF4 (thumb)

undefined4 sub_080C4DF4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_0801749C(param_1);
      sub_080176EC(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      sub_08017700(param_1,0xb903);
      *(undefined *)(param_1 + 0x12) = 0x28;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + *(int *)(param_1 + 0x74);
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + *(int *)(param_1 + 0x78);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

