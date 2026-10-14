// sub_080403E8 at 0x080403E8 (thumb)

undefined8 sub_080403E8(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0;
  uVar5 = 0x7fffffff;
  iVar4 = 0;
  do {
    uVar1 = (uint)(byte)(&DAT_080fea04)[iVar4] + (param_2 & 0xff) * 0xd & 0xff;
    iVar2 = *(int *)(DAT_0202f5c0 + 0x54) -
            (((short)(&DAT_080fe64c)[uVar1] * 0x1800 >> 8) + *(int *)(param_1 + 0x54)) >> 2;
    iVar3 = *(int *)(DAT_0202f5c0 + 0x58) -
            ((*(short *)((int)&DAT_080fe64c + ((uVar1 + 0x40) * 0x1000000 >> 0x17)) * -0x1800 >> 8)
             + -0x1c00 + *(int *)(param_1 + 0x58)) >> 2;
    iVar2 = sub_080FE124(iVar2 * iVar2 + iVar3 * iVar3);
    uVar1 = (uint)(iVar2 << 0x10) >> 0xe;
    if (uVar1 < uVar5) {
      uVar5 = uVar1;
      iVar6 = iVar4;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  return CONCAT44(in_lr,iVar6);
}

