// sub_0801CE3C at 0x0801CE3C (thumb)

undefined8 sub_0801CE3C(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = param_1 + 0x2c;
  if ((*(byte *)(param_1 + 0x35) & 0x40) == 0) {
    uVar3 = 0x4e;
    do {
      uVar5 = uVar3 - 1;
      uVar2 = uVar5;
      if ((int)uVar5 < 0) {
        uVar2 = uVar3 + 6;
      }
      iVar4 = (int)uVar2 >> 3;
      uVar3 = uVar5 + iVar4 * -8;
      if (((((int)(uint)*(byte *)(iVar6 + iVar4) >> (uVar3 & 0xff) & 1U) == 0) ||
          (((int)(uint)*(byte *)(param_1 + 0x36 + iVar4) >> (uVar3 & 0xff) & 1U) == 0)) ||
         (iVar4 = sub_080B47F0(iVar6,uVar5 & 0xff), iVar4 * 0x1000000 < 1)) goto LAB_0801ce9c;
      uVar3 = uVar5;
    } while (1 < (int)uVar5);
    sub_080B4EDC(iVar6,0x4e);
    uVar1 = 1;
  }
  else {
LAB_0801ce9c:
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

