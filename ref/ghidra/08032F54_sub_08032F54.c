// sub_08032F54 at 0x08032F54 (thumb)

undefined4 sub_08032F54(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x13);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 0xcc) = 0;
    *(undefined *)(*(int *)(param_1 + 0x20) + 0x11) = 1;
    sub_0801412C(4,param_1 + 0x4c);
  }
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0xd) = 0x1d;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

