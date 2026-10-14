// sub_0806C244 at 0x0806C244 (thumb)

undefined4 sub_0806C244(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (iVar1 = sub_0806CCC4(param_1), iVar1 != 0)) {
    iVar1 = sub_08063614(param_1);
    if (iVar1 != 0) {
      puVar2 = (uint *)(*(int *)(param_1 + 0x2c) + 0xb4);
      *puVar2 = *puVar2 | 2;
      if (*(int *)(param_1 + 0xc0) == 0) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362d08 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_0806CC70(param_1);
    if (((*(char *)(param_1 + 0xd) == '\a') || (*(char *)(param_1 + 0xd) == '\t')) ||
       (iVar1 = sub_08063614(param_1), iVar1 == 0)) {
      sub_080FE2C0(param_1,*(undefined4 *)(&UNK_08362d30 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      *(undefined *)(param_1 + 0xba) = *(undefined *)(param_1 + 0xd);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0806C2FC(param_1);
  }
  return in_lr;
}

