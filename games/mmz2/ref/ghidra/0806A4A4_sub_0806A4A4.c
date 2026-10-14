// sub_0806A4A4 at 0x0806A4A4 (thumb)

undefined4 sub_0806A4A4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08065A24();
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_0833e2b0);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0806a4f6:
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) goto LAB_0806a50a;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      iVar1 = sub_0801E11C(0,param_1,&DAT_0833e2a8);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (iVar1 == 0) goto LAB_0806a50a;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      goto LAB_0806a4f6;
    }
  }
  iVar1 = sub_0801E4D8(iVar1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0806a50a:
  sub_0806B0FC(param_1);
  sub_080EF118(param_1,*(undefined4 *)(&UNK_0833e284 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

