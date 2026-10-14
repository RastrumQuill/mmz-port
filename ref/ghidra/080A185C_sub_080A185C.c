// sub_080A185C at 0x080A185C (thumb)

undefined4 sub_080A185C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_08001EE8((int)*(short *)(param_1 + 0xc4));
    *(short *)(param_1 + 0xc4) = -1;
  }
  sub_0809C980(param_1);
  return in_lr;
}

