// sub_08035A90 at 0x08035A90 (thumb)

undefined4 sub_08035A90(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(*(int *)(param_1 + 0x24) + 0xe) = 1;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08001EAC(0x96);
  }
  sub_080297C0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && ((DAT_02022b6e & 1) == 0)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

