// sub_080847F4 at 0x080847F4 (thumb)

undefined4 sub_080847F4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
    sub_080127E4(param_1,0x7200);
    sub_08006E08(param_1 + 0x74,&DAT_083412d0);
    *(undefined *)(param_1 + 0xb9) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6800U < 0xd001) &&
     ((*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + 0xa000U < 0x14001)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

