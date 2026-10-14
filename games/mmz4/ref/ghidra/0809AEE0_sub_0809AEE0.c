// sub_0809AEE0 at 0x0809AEE0 (thumb)

undefined4 sub_0809AEE0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xb7) = 1;
    if (*(char *)(param_1 + 0xb6) == '\0') {
      sub_08066388(*(undefined4 *)(param_1 + 0x28),param_1);
      *(char *)(param_1 + 0xb6) = '\x01';
    }
    sub_08005784(param_1 + 0x74,&DAT_0885db28);
    sub_0801CF00(param_1,0x6401);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

