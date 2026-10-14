// sub_08056CF0 at 0x08056CF0 (thumb)

undefined4 sub_08056CF0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa614);
    *(undefined *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xb5) = 1;
    *(undefined2 *)(param_1 + 0xd2) = 0x7800;
    sub_080573FC(param_1);
  }
  return in_lr;
}

