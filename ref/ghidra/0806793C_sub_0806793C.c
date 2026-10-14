// sub_0806793C at 0x0806793C (thumb)

undefined4 sub_0806793C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar1 = *(int *)(param_1 + 0x50) + -0x200;
  *(int *)(param_1 + 0x50) = iVar1;
  if (iVar1 < *(int *)(param_1 + 0xbc)) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x13) = 0x7f;
  }
  return in_lr;
}

