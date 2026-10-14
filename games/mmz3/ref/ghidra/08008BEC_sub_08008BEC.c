// sub_08008BEC at 0x08008BEC (thumb)

undefined4 sub_08008BEC(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  DAT_02002648 = *param_2;
  DAT_0200264c = param_2[1];
  piVar5 = *(int **)(&DAT_08336ac0 + param_1 * 4);
  iVar3 = *piVar5;
  DAT_020023c0 = DAT_020023c0 & 0xc1ff;
  sub_080048A0(&DAT_02002480,0x8009851);
  DAT_02002488 = &DAT_02002480;
  DAT_0202e482 = 0;
  DAT_02002650 = (ushort)iVar3 | 0x80;
  iVar3 = iVar3 * 0xc;
  piVar1 = (int *)(&DAT_0863c578 + iVar3);
  sub_08006F34(&DAT_02002638,(undefined *)(*(int *)(&DAT_0863c57c + iVar3) + (int)piVar1),
               (undefined *)(*piVar1 + (int)piVar1),
               (undefined *)(*(int *)(&DAT_0863c580 + iVar3) + (int)piVar1),piVar5[3]);
  DAT_02002c54 = 0xffff;
  DAT_02002c56 = 0xffff;
  DAT_0202e484 = piVar5[0x1e];
  DAT_0202e488 = piVar5[0x1f];
  sub_08009168(piVar5,piVar5[3]);
  uVar2 = 0;
  do {
    sub_08009478((int)(short)uVar2,piVar5);
    uVar4 = (int)(short)uVar2 + 1;
    uVar2 = uVar4 & 0xffff;
  } while ((int)(uVar4 * 0x10000) >> 0x10 < 3);
  DAT_0202e48c = 0x7fffffff;
  DAT_0202e490 = 0x7fffffff;
  DAT_0202e494 = 0;
  DAT_0202e498 = 0;
  DAT_0202e49c = 0x3c0000;
  DAT_0202e4a0 = 0x280000;
  DAT_02002652 = 0;
  DAT_02002653 = 0;
  uVar2 = 0;
  do {
    (&DAT_0202f4a4)[(short)uVar2] = 0;
    uVar4 = (int)(short)uVar2 + 1;
    uVar2 = uVar4 & 0xffff;
  } while ((int)(uVar4 * 0x10000) >> 0x10 < 4);
  return in_lr;
}

