// sub_0803FF78 at 0x0803FF78 (thumb)

undefined4 sub_0803FF78(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    uVar1 = sub_08001EAC(0xd9);
    *(undefined2 *)(param_1 + 0xc4) = uVar1;
  }
  sub_080297C0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

