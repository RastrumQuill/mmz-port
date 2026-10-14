// sub_08036878 at 0x08036878 (thumb)

undefined8 sub_08036878(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  uVar5 = *(undefined4 *)(param_1 + 0x2c4);
  uVar7 = *(undefined4 *)(param_1 + 0x2c8);
  uVar4 = *(undefined4 *)(param_1 + 0x2cc);
  uVar6 = *(undefined4 *)(param_1 + 0x2d0);
  iVar2 = (int)*(char *)(param_1 + 0x2e4);
  cVar1 = *(char *)(param_1 + 0x2e5);
  if (*(int *)(param_1 + 0x2e0) != -1) {
    uVar3 = sub_0801F3D0(*(int *)(param_1 + 0x2e0));
    uVar3 = uVar3 & 0xff;
    if (uVar3 != 0xff) {
      uVar8 = (ushort)(&DAT_020011d6)[uVar3 * 0xc] | 0x80;
      if (param_2 != 0) {
        *(int *)(param_1 + 0x2c4) =
             *(int *)(param_1 + 0x2c4) + ((&DAT_020011dc)[uVar3 * 6] - (&DAT_020011e4)[uVar3 * 6]);
        *(int *)(param_1 + 0x2c8) =
             *(int *)(param_1 + 0x2c8) +
             ((&DAT_020011e0)[uVar3 * 6] - *(int *)(&DAT_020011e8 + uVar3 * 0x18));
      }
      if (iVar2 == 0) {
        uVar8 = uVar8 << 0x10;
      }
      goto LAB_08036986;
    }
  }
  *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + iVar2;
  *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + (int)cVar1;
  *(undefined4 *)(param_1 + 0x2cc) = uVar5;
  *(undefined4 *)(param_1 + 0x2d0) = uVar7;
  uVar8 = sub_080361A0(param_1,iVar2,(int)cVar1,param_2);
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x2c4) = uVar5;
    *(undefined4 *)(param_1 + 0x2c8) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x2cc) = uVar4;
  *(undefined4 *)(param_1 + 0x2d0) = uVar6;
LAB_08036986:
  return CONCAT44(in_lr,uVar8);
}

