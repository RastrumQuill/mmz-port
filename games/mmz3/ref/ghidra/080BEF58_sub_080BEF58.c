// sub_080BEF58 at 0x080BEF58 (thumb)

undefined4 sub_080BEF58(int param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  do {
    iVar1 = sub_0800710C(DAT_0203062c);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 1;
      *(undefined *)(iVar1 + 9) = 0x2f;
      *(undefined4 *)(iVar1 + 0x14) = 0x80bf089;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined *)(iVar1 + 0x10) = 3;
      *(char *)(iVar1 + 0x12) = (char)iVar3;
      *(undefined *)(iVar1 + 0x13) = param_3;
      *(int *)(iVar1 + 0x54) = param_1 + -0x800;
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      *(uint *)(iVar1 + 0x54) = param_1 + -0x800 + (uVar2 * 0x10 >> 0x14);
      *(undefined4 *)(iVar1 + 0x58) = param_2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return in_lr;
}

