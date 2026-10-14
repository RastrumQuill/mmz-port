// sub_0805DB1C at 0x0805DB1C (thumb)

undefined4 sub_0805DB1C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b0120,param_1 + 0x4c,0xff);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

