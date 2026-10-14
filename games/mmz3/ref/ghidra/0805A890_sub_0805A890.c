// sub_0805A890 at 0x0805A890 (thumb)

undefined4 sub_0805A890(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb403);
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0xbc) = 0x6403;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x60;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar2 < *(int *)(param_1 + 0x58)) {
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 1;
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  return in_lr;
}

