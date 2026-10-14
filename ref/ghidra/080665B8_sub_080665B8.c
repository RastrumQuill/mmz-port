// sub_080665B8 at 0x080665B8 (thumb)

undefined4 sub_080665B8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,3);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 1;
    if (*(char *)(param_1 + 0xc1) == '\0') {
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined *)(iVar1 + 0xd) = 6;
      *(undefined *)(iVar1 + 0xe) = 1;
    }
  }
  return in_lr;
}

