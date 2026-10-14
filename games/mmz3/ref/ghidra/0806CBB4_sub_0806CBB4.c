// sub_0806CBB4 at 0x0806CBB4 (thumb)

undefined4 sub_0806CBB4(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08362e00);
    puVar2 = (uint *)(*(int *)(param_1 + 0x2c) + 0xb4);
    *puVar2 = *puVar2 | 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = sub_08025794(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    sub_08007390(param_1 + 0x74,&DAT_08362d58);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

