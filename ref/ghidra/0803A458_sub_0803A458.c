// sub_0803A458 at 0x0803A458 (thumb)

undefined4 sub_0803A458(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd) == '\x01') {
    *(undefined *)(*(int *)(param_1 + 0xc4) + 0xdb) = 1;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08029778(param_1,4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080297C0(param_1);
  return in_lr;
}

