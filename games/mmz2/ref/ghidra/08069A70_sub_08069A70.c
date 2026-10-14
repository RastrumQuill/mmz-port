// sub_08069A70 at 0x08069A70 (thumb)

undefined4 sub_08069A70(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    iVar1 = sub_08065A24(param_1);
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833e184 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08069ACC(param_1);
  }
  return in_lr;
}

