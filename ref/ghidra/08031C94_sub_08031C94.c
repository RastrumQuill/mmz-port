// sub_08031C94 at 0x08031C94 (thumb)

undefined4 sub_08031C94(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xb8) + 0xc800;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + 0x3c00;
    uVar1 = sub_08008360();
    *(undefined4 *)(param_1 + 0x50) = uVar1;
  }
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

