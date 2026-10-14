// sub_0801BB74 at 0x0801BB74 (thumb)

undefined8 sub_0801BB74(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  uVar2 = 4;
  if ((bVar1 & 1) != 0) {
    uVar2 = 8;
  }
  uVar3 = 4;
  if ((bVar1 & 1) != 1) {
    uVar3 = 8;
  }
  if ((uVar2 & *(byte *)(param_1 + 0x12d)) != 0) {
    param_3 = param_3 + -1;
    uVar5 = *(byte *)(param_1 + 0x12e) - 1 & 0x3f;
    uVar6 = (uint)*(byte *)(param_1 + 0x130 + uVar5);
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    do {
      if ((uVar6 & uVar3) != 0) break;
      uVar5 = uVar5 - 1 & 0x3f;
      uVar4 = (uint)*(byte *)(param_1 + 0x130 + uVar5);
      if ((uVar6 & ~uVar4 & uVar2) != 0) {
        param_3 = param_3 + -1;
      }
      param_2 = param_2 - 1;
      if (param_3 == 0) goto LAB_0801bc00;
      uVar6 = uVar4;
    } while (param_2 != 0);
  }
  uVar2 = 0;
LAB_0801bc00:
  return CONCAT44(in_lr,uVar2);
}

