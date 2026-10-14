// sub_080AFA70 at 0x080AFA70 (thumb)

undefined4 sub_080AFA70(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0809C980(param_1);
  if ((*(char *)(param_1 + 0x10) == '\0') && ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

