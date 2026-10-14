// sub_08053818 at 0x08053818 (thumb)

undefined4 sub_08053818(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0xb4) = 1;
    sub_0801CF00(param_1,0xb600);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(*(int *)(param_1 + 0xc0) + 0xd) == '\x02') {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

