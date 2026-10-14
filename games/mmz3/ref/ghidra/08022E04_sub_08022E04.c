// sub_08022E04 at 0x08022E04 (thumb)

undefined8 sub_08022E04(int param_1)

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
    DAT_020023cc._2_2_ = *(ushort *)(param_1 + 6) & 0xf;
    iVar4 = *(int *)(param_1 + 0xc);
    if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(iVar4 + 4)) {
      uVar5 = (uint)(*(ushort *)(param_1 + 6) >> 4);
      if (uVar5 < 10) {
        uVar2 = (&DAT_0836e9d8)[*(short *)(iVar4 + 2)];
        uVar3 = 0;
LAB_08022f0c:
        sub_080E96C4(&DAT_0836f268 + uVar2,uVar3,(10 - uVar5) * 2,0,uVar5 + 1);
      }
      else {
        uVar2 = (&DAT_0836e9d8)[*(short *)(iVar4 + 2)];
        uVar3 = 0;
LAB_08022f3e:
        sub_080E96C4(&DAT_0836f268 + uVar2,uVar3,0,uVar5 - 10 & 0xffff,uVar5 + 1);
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      uVar3 = 1;
      goto LAB_08022f6a;
    }
LAB_08022f58:
    DAT_020023c0 = DAT_020023c0 & 0xfeff;
    DAT_020023cc._2_2_ = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      DAT_020023c0 = DAT_020023c0 | 0x100;
      DAT_020023cc._0_2_ = 0;
      DAT_020023cc._2_2_ = (ushort)DAT_020023cc;
      *(undefined2 *)(param_1 + 6) = 0;
    }
  }
  else if (bVar1 == 2) {
    if ((*(uint *)(param_1 + 0xd0) & 1) == 0) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
    }
    DAT_020023cc._2_2_ = *(ushort *)(param_1 + 6) & 0xf;
    iVar4 = *(int *)(param_1 + 0xc);
    if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(iVar4 + 4)) {
      uVar5 = (uint)(*(ushort *)(param_1 + 6) >> 4);
      if (9 < uVar5) {
        uVar2 = (&DAT_0836e9d8)[*(short *)(iVar4 + 2)];
        uVar3 = 1;
        goto LAB_08022f3e;
      }
      uVar2 = (&DAT_0836e9d8)[*(short *)(iVar4 + 2)];
      uVar3 = 1;
      goto LAB_08022f0c;
    }
    goto LAB_08022f58;
  }
  uVar3 = 0;
LAB_08022f6a:
  return CONCAT44(in_lr,uVar3);
}

