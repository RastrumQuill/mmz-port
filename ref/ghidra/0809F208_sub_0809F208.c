// sub_0809F208 at 0x0809F208 (thumb)

undefined4 sub_0809F208(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08001EE8((int)*(short *)(param_1 + 200));
    *(short *)(param_1 + 200) = -1;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  sub_0809C980(param_1);
  return in_lr;
}

