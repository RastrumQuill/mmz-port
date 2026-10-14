// sub_08094C68 at 0x08094C68 (thumb)

undefined8 sub_08094C68(undefined4 param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = (param_3 & 0xfffff000) - 1;
  iVar4 = 0;
  do {
    uVar1 = sub_08007020(param_2 & 0xfffff000 | 0x800,iVar3);
    if ((ushort)((uVar1 & 0xf) - 2) < 0xc) {
      uVar2 = 1;
      goto LAB_08094cae;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x1000;
  } while (iVar4 < 3);
  uVar2 = 0;
LAB_08094cae:
  return CONCAT44(in_lr,uVar2);
}

