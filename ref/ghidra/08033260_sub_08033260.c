// sub_08033260 at 0x08033260 (thumb)

undefined4 sub_08033260(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
    sub_080014E8(&DAT_08500370,(DAT_02023068 - 0x300) * 0x20 + 0x10000);
    sub_0800179C(&DAT_0850037c,(DAT_020230ec - 7) * 0x20 + 0x200);
    sub_08093C9C(param_1,0);
    *(undefined2 *)(param_1 + 0xcc) = 1;
    uVar2 = sub_080941B8(param_1);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

