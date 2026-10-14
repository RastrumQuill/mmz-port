// sub_080E7300 at 0x080E7300 (thumb)

undefined4 sub_080E7300(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  short asStack_10 [4];
  
  sub_08128B5C(asStack_10,&DAT_08129c18,8);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 100) + (int)asStack_10[*(uint *)(param_1 + 0x74) & 3];
  sub_0801CFF0(param_1);
  iVar1 = *(int *)(param_1 + 0x74) + -1;
  *(int *)(param_1 + 0x74) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080E735C(param_1);
  }
  return in_lr;
}

