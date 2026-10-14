// sub_080F5238 at 0x080F5238 (thumb)

ulonglong sub_080F5238(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *param_2 - *param_1 >> 4;
  iVar2 = param_2[1] - param_1[1] >> 4;
  uVar1 = sub_081284F8(iVar3 * iVar3 + iVar2 * iVar2);
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

