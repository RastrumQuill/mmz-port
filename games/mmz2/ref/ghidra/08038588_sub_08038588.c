// sub_08038588 at 0x08038588 (thumb)

undefined4 sub_08038588(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar2 = 4;
  uVar3 = 0;
  do {
    iVar2 = iVar2 + -1;
    if ((iVar2 == param_2) || (iVar2 == param_3)) {
      uVar1 = sub_080EF124(param_1,param_2,param_3,param_4,param_5);
      uVar3 = uVar3 | uVar1;
    }
  } while (iVar2 != 0);
  if (uVar3 != 0) {
    sub_0803537C(param_1);
    *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
    sub_08034FA0(param_1);
    sub_08036BB4(param_1);
  }
  return in_lr;
}

