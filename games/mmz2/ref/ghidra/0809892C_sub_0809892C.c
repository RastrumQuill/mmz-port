// sub_0809892C at 0x0809892C (thumb)

undefined4 sub_0809892C(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  do {
    iVar1 = sub_08006B84(DAT_0202f07c);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 8;
      *(undefined *)(iVar1 + 9) = 2;
      *(undefined4 *)(iVar1 + 0x14) = 0x80989b5;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined4 *)(iVar1 + 0x28) = param_1;
      uVar3 = param_2[1];
      *(undefined4 *)(iVar1 + 0x54) = *param_2;
      *(undefined4 *)(iVar1 + 0x58) = uVar3;
      iVar2 = sub_080EF150(param_3 << 8,0x376c);
      if (uVar4 != 0) {
        iVar2 = -iVar2;
      }
      *(int *)(iVar1 + 0x5c) = iVar2;
      *(undefined4 *)(iVar1 + 0x60) = 0xfffff900;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return in_lr;
}

