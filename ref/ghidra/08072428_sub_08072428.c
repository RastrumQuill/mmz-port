// sub_08072428 at 0x08072428 (thumb)

undefined4 sub_08072428(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,2);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(iVar2 + 0xd) = 2;
    *(undefined *)(iVar2 + 0xe) = 1;
    *(undefined *)(param_1 + 0x12) = 0x60;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(char *)(param_1 + 0xf) == '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

