// sub_0801C5AC at 0x0801C5AC (thumb)

undefined8 sub_0801C5AC(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 1);
  if (bVar1 == 1) {
    if ((*(uint *)(param_1 + 0xd0) & 3) == 0) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
    }
    DAT_02000f9c._2_2_ = *(ushort *)(param_1 + 6) & 0xf;
    iVar4 = *(int *)(param_1 + 0xc);
    if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(iVar4 + 4)) {
      uVar5 = (uint)(*(ushort *)(param_1 + 6) >> 4);
      if (uVar5 < 10) {
        uVar2 = (&DAT_0834c47c)[*(short *)(iVar4 + 2)];
        uVar3 = 0;
LAB_0801c6b4:
        sub_080DE5BC(&DAT_0834c9e4 + uVar2,uVar3,(10 - uVar5) * 2,0,uVar5 + 1);
      }
      else {
        uVar2 = (&DAT_0834c47c)[*(short *)(iVar4 + 2)];
        uVar3 = 0;
LAB_0801c6e6:
        sub_080DE5BC(&DAT_0834c9e4 + uVar2,uVar3,0,uVar5 - 10 & 0xffff,uVar5 + 1);
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      uVar3 = 1;
      goto LAB_0801c712;
    }
LAB_0801c700:
    DAT_02000f90 = DAT_02000f90 & 0xfeff;
    DAT_02000f9c._2_2_ = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      DAT_02000f90 = DAT_02000f90 | 0x100;
      DAT_02000f9c._0_2_ = 0;
      DAT_02000f9c._2_2_ = (ushort)DAT_02000f9c;
      *(undefined2 *)(param_1 + 6) = 0;
    }
  }
  else if (bVar1 == 2) {
    if ((*(uint *)(param_1 + 0xd0) & 1) == 0) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
    }
    DAT_02000f9c._2_2_ = *(ushort *)(param_1 + 6) & 0xf;
    iVar4 = *(int *)(param_1 + 0xc);
    if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(iVar4 + 4)) {
      uVar5 = (uint)(*(ushort *)(param_1 + 6) >> 4);
      if (9 < uVar5) {
        uVar2 = (&DAT_0834c47c)[*(short *)(iVar4 + 2)];
        uVar3 = 6;
        goto LAB_0801c6e6;
      }
      uVar2 = (&DAT_0834c47c)[*(short *)(iVar4 + 2)];
      uVar3 = 6;
      goto LAB_0801c6b4;
    }
    goto LAB_0801c700;
  }
  uVar3 = 0;
LAB_0801c712:
  return CONCAT44(in_lr,uVar3);
}

