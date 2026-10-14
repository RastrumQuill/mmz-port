// sub_0801EDD8 at 0x0801EDD8 (thumb)

undefined8 sub_0801EDD8(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 10) >> 4;
  bVar1 = *(byte *)((&DAT_08333a58)[bVar2 & 1] + (uint)*(byte *)(param_1 + 9));
  uVar6 = (uint)bVar1;
  if ((*(byte *)(param_1 + 0x196) & bVar1) != 0) {
    param_3 = param_3 + -1;
    uVar4 = *(byte *)(param_1 + 0x195) - 1 & 0x3f;
    uVar5 = (uint)*(byte *)(param_1 + 0x198 + uVar4);
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    do {
      if ((uVar5 & *(byte *)((&DAT_08333a58)[(bVar2 & 1) == 0] + (uint)*(byte *)(param_1 + 9))) != 0
         ) break;
      uVar4 = uVar4 - 1 & 0x3f;
      uVar3 = (uint)*(byte *)(param_1 + 0x198 + uVar4);
      if ((uVar5 & ~uVar3 & uVar6) != 0) {
        param_3 = param_3 + -1;
      }
      param_2 = param_2 - 1;
      if (param_3 == 0) goto LAB_0801ee6e;
      uVar5 = uVar3;
    } while (param_2 != 0);
  }
  uVar6 = 0;
LAB_0801ee6e:
  return CONCAT44(in_lr,uVar6);
}

