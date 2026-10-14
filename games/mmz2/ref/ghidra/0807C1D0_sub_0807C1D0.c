// sub_0807C1D0 at 0x0807C1D0 (thumb)

undefined4 sub_0807C1D0(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  puVar2 = (uint *)(param_1 + 0x8c);
  if ((*puVar2 & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *puVar2 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0807C2D4(param_1);
    return in_lr;
  }
  iVar1 = sub_08065A24(param_1);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_083403e8 + (uint)*(byte *)(param_1 + 0xbd) * 0x30);
    return in_lr;
  }
  if ((*puVar2 & 1) == 0) {
LAB_0807c274:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0807c2b8;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = sub_0801E11C(0,param_1,&UNK_083403c0 + (uint)*(byte *)(param_1 + 0xbd) * 8);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 == 0) goto LAB_0807c2b8;
    *(undefined *)(param_1 + 0xf) = 0;
    goto LAB_0807c274;
  }
  iVar1 = sub_0801E4D8(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_083403e8 + (uint)*(byte *)(param_1 + 0xbd) * 0x30);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    sub_0807CD80(param_1);
    return in_lr;
  }
LAB_0807c2b8:
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0834038c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

