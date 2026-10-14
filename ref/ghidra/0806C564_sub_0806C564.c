// sub_0806C564 at 0x0806C564 (thumb)

undefined4 sub_0806C564(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(char *)(param_1 + 0xd) == '\0') && (*(int *)(iVar1 + 0xc0) == 0)) {
    sub_0800561C(param_1 + 0x74,&DAT_082b0e74);
  }
  else {
    sub_0800561C(param_1 + 0x74,&DAT_082b0eac);
  }
  *(undefined2 *)(param_1 + 0x8c) = 0x20;
  if (1 < *(byte *)(iVar1 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

