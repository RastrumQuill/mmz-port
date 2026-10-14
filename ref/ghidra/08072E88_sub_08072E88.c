// sub_08072E88 at 0x08072E88 (thumb)

undefined4 sub_08072E88(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,5);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 4;
    DAT_02022ae1 = DAT_02022ae1 & 0xe7;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(iVar2 + 0xd) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(iVar2 + 0xe) = 1;
  }
  return in_lr;
}

