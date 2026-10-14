// sub_080BF258 at 0x080BF258 (thumb)

undefined8 sub_080BF258(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (((param_2 == 0) || (param_2 = param_2 + -1, param_2 == 0)) &&
     (iVar1 = sub_08006B84(DAT_0202f084), iVar1 != 0)) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x48;
    *(undefined4 *)(iVar1 + 0x14) = 0x80bf0b1;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x58) = uVar4;
    *(int *)(iVar1 + 100) = param_1;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    iVar5 = *(int *)(param_1 + 0x2c);
    if (iVar5 == 0) {
      *(int *)(iVar1 + 0x28) = param_1;
      *(int *)(param_1 + 0x2c) = iVar1;
    }
    else {
      iVar2 = *(int *)(iVar5 + 0x2c);
      while (iVar2 != 0) {
        iVar5 = *(int *)(iVar5 + 0x2c);
        iVar2 = *(int *)(iVar5 + 0x2c);
      }
      *(int *)(iVar1 + 0x28) = iVar5;
      *(int *)(iVar5 + 0x2c) = iVar1;
    }
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11;
    param_2 = (int)(uVar3 + ((int)uVar3 >> 2) * -4 + 1) / 2 + 2;
  }
  return CONCAT44(in_lr,param_2);
}

