// sub_0801AA20 at 0x0801AA20 (thumb)

undefined8 sub_0801AA20(uint *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  cVar1 = sub_08009AFC(uVar4,uVar5);
  if (cVar1 == '@') {
    if ((uVar4 & 0xfff) < 0x800) {
      iVar2 = -0x1000;
    }
    else {
      iVar2 = 0x1000;
    }
    cVar1 = sub_08009AFC((uVar4 & 0xfffff000) + iVar2,uVar5);
    if (cVar1 == '@') {
      uVar3 = 0x40;
      goto LAB_0801aa76;
    }
  }
  uVar3 = 0;
LAB_0801aa76:
  return CONCAT44(in_lr,uVar3);
}

