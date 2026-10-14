// sub_08028898 at 0x08028898 (thumb)

undefined8 sub_08028898(int param_1)

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
    DAT_02000a0e = *(ushort *)(param_1 + 6) & 0xf;
    iVar4 = *(int *)(param_1 + 0xc);
    if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(iVar4 + 4)) {
      uVar5 = (uint)(*(ushort *)(param_1 + 6) >> 4);
      if (uVar5 < 10) {
LAB_080289c0:
        uVar2 = (&DAT_08869ac0)[*(short *)(iVar4 + 2)];
        uVar3 = 0;
LAB_080289dc:
        sub_0810D2D4(&DAT_0886a17c + uVar2,uVar3,(10 - uVar5) * 2,0,uVar5 + 1);
      }
      else {
LAB_080289f0:
        uVar2 = (&DAT_08869ac0)[*(short *)(iVar4 + 2)];
        uVar3 = 0;
LAB_08028a0e:
        sub_0810D2D4(&DAT_0886a17c + uVar2,uVar3,0,uVar5 - 10 & 0xffff,uVar5 + 1);
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      uVar3 = 1;
      goto LAB_08028a3a;
    }
LAB_08028a28:
    DAT_02000a00 = DAT_02000a00 & 0xfeff;
    DAT_02000a0e = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if ((*(uint *)(param_1 + 0xd0) & 1) == 0) {
          *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
        }
        DAT_02000a0e = *(ushort *)(param_1 + 6) & 0xf;
        iVar4 = *(int *)(param_1 + 0xc);
        if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(iVar4 + 4)) {
          uVar5 = (uint)(*(ushort *)(param_1 + 6) >> 4);
          if (9 < uVar5) {
            uVar2 = (&DAT_08869ac0)[*(short *)(iVar4 + 2)];
            uVar3 = 1;
            goto LAB_08028a0e;
          }
          uVar2 = (&DAT_08869ac0)[*(short *)(iVar4 + 2)];
          uVar3 = 1;
          goto LAB_080289dc;
        }
      }
      else {
        if (bVar1 != 4) goto LAB_08028a38;
        if ((*(uint *)(param_1 + 0xd0) & 3) == 0) {
          *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
        }
        DAT_02000a0e = *(ushort *)(param_1 + 6) & 0xf;
        iVar4 = *(int *)(param_1 + 0xc);
        if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(iVar4 + 4)) {
          uVar5 = (uint)(*(ushort *)(param_1 + 6) >> 4);
          if (9 < uVar5) goto LAB_080289f0;
          goto LAB_080289c0;
        }
      }
      goto LAB_08028a28;
    }
    if (bVar1 == 0) {
      DAT_02000a00 = DAT_02000a00 | 0x100;
      DAT_02000a0c = 0;
      DAT_02000a0e = DAT_02000a0c;
      *(undefined2 *)(param_1 + 6) = 0;
    }
  }
LAB_08028a38:
  uVar3 = 0;
LAB_08028a3a:
  return CONCAT44(in_lr,uVar3);
}

