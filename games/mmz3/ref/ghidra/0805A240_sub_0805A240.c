// sub_0805A240 at 0x0805A240 (thumb)

undefined4 sub_0805A240(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb403);
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0xbc) = 0x6403;
    *(undefined *)(param_1 + 0xe) = 0;
    uVar1 = FUN_080fe2f8(*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54),0x34);
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined4 *)(param_1 + 0x60) = 0xfffff640;
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
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

