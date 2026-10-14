// sub_08055764 at 0x08055764 (thumb)

undefined4 sub_08055764(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar1 + 0xc) < 2) {
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (*(char *)(iVar1 + 0xf) == '\x03') {
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
    else {
      *(int *)(param_1 + 0x4c) = *(int *)(iVar1 + 0x4c) + 0x1800;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080557E0(param_1);
  }
  return in_lr;
}

