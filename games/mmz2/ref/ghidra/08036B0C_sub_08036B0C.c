// sub_08036B0C at 0x08036B0C (thumb)

undefined8 sub_08036B0C(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_08039F4C(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0xb4);
    if (((iVar3 != 0) && (*(byte *)(iVar3 + 0xc) < 2)) && (*(int *)(iVar1 + 0xb8) != 0)) {
      uVar2 = sub_080EF124(iVar3,param_2,param_3,param_4);
      uVar2 = uVar2 & 0xffff;
      goto LAB_08036b4c;
    }
  }
  uVar2 = 0;
LAB_08036b4c:
  return CONCAT44(in_lr,uVar2);
}

