// sub_08036104 at 0x08036104 (thumb)

undefined4 sub_08036104(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,8);
    *(undefined *)(*(int *)(param_1 + 0x24) + 0xe) = 1;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 8;
    sub_08001EE8((int)*(short *)(param_1 + 0xcc));
    sub_0800561C(param_1 + 0x74,&DAT_082ad6fc);
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

