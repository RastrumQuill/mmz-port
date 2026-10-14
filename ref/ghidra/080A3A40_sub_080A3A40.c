// sub_080A3A40 at 0x080A3A40 (thumb)

undefined4 sub_080A3A40(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_0809C980(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

