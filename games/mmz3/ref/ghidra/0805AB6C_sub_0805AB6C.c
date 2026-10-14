// sub_0805AB6C at 0x0805AB6C (thumb)

undefined4 sub_0805AB6C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb40b);
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0xbc) = 0x640b;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    if (*(char *)(param_1 + 0xc4) != '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    }
    sub_08007390(param_1 + 0x74,&DAT_08361378);
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x60;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar2 < *(int *)(param_1 + 0x58)) {
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    if (*(int *)(param_1 + 0xd4) == 0) {
      *(undefined *)(param_1 + 0xd) = 0x14;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  return in_lr;
}

