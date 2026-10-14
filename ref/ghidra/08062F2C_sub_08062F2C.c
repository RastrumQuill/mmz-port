// sub_08062F2C at 0x08062F2C (thumb)

undefined4 sub_08062F2C(int param_1)

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
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  iVar1 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -2;
  if (iVar1 < *(int *)(param_1 + 0xbc)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc);
  }
  return in_lr;
}

