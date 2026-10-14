// sub_0805F628 at 0x0805F628 (thumb)

undefined4 sub_0805F628(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08007390(param_1 + 0x74,&DAT_08361a88);
  iVar1 = sub_0806093C(param_1);
  if (0 < iVar1 * 0x1000000) {
    *(undefined *)(param_1 + 0xf) = 4;
    sub_08060768(param_1,0);
    *(undefined *)(param_1 + 0x12) = 4;
  }
  return in_lr;
}

