// sub_080A8CB4 at 0x080A8CB4 (thumb)

undefined4 sub_080A8CB4(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (((((*(uint *)(iVar6 + 0x8c) & 0x200) != 0) || (*(short *)(iVar6 + 0xa4) == 0)) &&
      ((DAT_0202e918 & 8) == 0)) || (1 < *(byte *)(iVar6 + 0xc))) {
    sub_0801CFF0(param_1);
    bVar1 = *(byte *)(param_1 + 0xf);
    if (bVar1 == 1) {
      sVar3 = *(short *)(param_1 + 0xbe) + -1;
      *(short *)(param_1 + 0xbe) = sVar3;
      if (sVar3 != -1) {
        return in_lr;
      }
    }
    else {
      if (1 < bVar1) {
        if (bVar1 != 2) {
          return in_lr;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
        sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
        if (sVar3 == 0) {
          return in_lr;
        }
        bVar1 = *(byte *)(param_1 + 9);
        *(undefined4 *)(param_1 + 0xc) = 2;
        goto LAB_080a8da0;
      }
      if (bVar1 != 0) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(ushort *)(param_1 + 0xbe) =
           (ushort)*(byte *)(iVar6 + 0xd4 + (uint)*(byte *)(param_1 + 0x10)) << 4;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    bVar1 = *(byte *)(param_1 + 9);
    *(undefined4 *)(param_1 + 0xc) = 2;
LAB_080a8da0:
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)bVar1 * 4) + 8)
    ;
    sub_080A8EA4(param_1);
    return in_lr;
  }
  piVar4 = (int *)(param_1 + 0xc0);
  if (*piVar4 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar5 = sub_0802AD94(0,param_1,&DAT_0885f400);
      *piVar4 = iVar5;
    }
    if (*piVar4 == 0) goto LAB_080a8de8;
  }
  iVar5 = sub_0802B3CC(*piVar4);
  if (iVar5 != 0) {
    *piVar4 = 0;
  }
LAB_080a8de8:
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885f2bc + (uint)*(byte *)(param_1 + 0xd) * 4));
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) == 0) {
    iVar5 = (uint)bVar1 * 0x20;
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar6 + 0x54) +
         ((int)*(short *)(iVar6 + 0xc0) *
          (int)*(short *)((int)&DAT_08128c10 +
                         (((uint)(*(ushort *)(iVar6 + 0xc4) >> 8) + iVar5 + 0x40) * 0x1000000 >>
                         0x17)) >> 8);
    sVar3 = *(short *)((int)&DAT_08128c10 +
                      (((uint)(*(ushort *)(iVar6 + 0xc4) >> 8) + iVar5) * 0x1000000 >> 0x17));
    sVar2 = *(short *)(iVar6 + 0xc0);
  }
  else {
    iVar5 = (uint)bVar1 * 0x20;
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar6 + 0x54) +
         ((int)*(short *)(iVar6 + 0xc2) *
          (int)*(short *)((int)&DAT_08128c10 +
                         (((uint)(*(ushort *)(iVar6 + 0xc6) >> 8) + iVar5 + 0x40) * 0x1000000 >>
                         0x17)) >> 8);
    sVar3 = *(short *)((int)&DAT_08128c10 +
                      (((uint)(*(ushort *)(iVar6 + 0xc6) >> 8) + iVar5) * 0x1000000 >> 0x17));
    sVar2 = *(short *)(iVar6 + 0xc2);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + ((int)sVar2 * (int)sVar3 >> 8);
  return in_lr;
}

