// sub_080360BC at 0x080360BC (thumb)

undefined4 sub_080360BC(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0xb4;
    sub_0807BCC8(param_1);
    uVar2 = sub_08001EAC(0x2d);
    *(undefined2 *)(param_1 + 0xcc) = uVar2;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xc;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

