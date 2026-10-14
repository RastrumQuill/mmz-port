// sub_080A88C4 at 0x080A88C4 (thumb)

undefined4 sub_080A88C4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(iVar2 + 0x58) + -0xd00;
  *(int *)(param_1 + 0x58) = iVar3 + (*(int *)(iVar5 + 0x58) - iVar3 >> 1);
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar4 = *(int *)(iVar2 + 0x54) + -0x3400;
    *(int *)(param_1 + 0x54) = iVar4 + (*(int *)(iVar5 + 0x54) - iVar4 >> 1);
    iVar2 = sub_081284E0((iVar4 - *(int *)(iVar5 + 0x54)) * 0x100 >> 0x10,
                         (iVar3 - *(int *)(iVar5 + 0x58)) * 0x100 >> 0x10);
    uVar1 = ((uint)(iVar2 << 0x10) >> 0x18) + 0xc0;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0x54) + 0x3500;
    *(int *)(param_1 + 0x54) = iVar4 + (*(int *)(iVar5 + 0x54) - iVar4 >> 1);
    iVar2 = sub_081284E0((iVar4 - *(int *)(iVar5 + 0x54)) * 0x100 >> 0x10,
                         (iVar3 - *(int *)(iVar5 + 0x58)) * 0x100 >> 0x10);
    uVar1 = ((uint)(iVar2 << 0x10) >> 0x18) + 0x40;
  }
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       ((int)*(short *)(iVar5 + 0xbc) *
        (int)*(short *)((int)&DAT_08128c10 + (((uVar1 & 0xff) + 0x40) * 0x1000000 >> 0x17)) >> 8);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       ((int)*(short *)(iVar5 + 0xbc) * (int)(short)(&DAT_08128c10)[uVar1 & 0xff] >> 8);
  if (iVar4 < *(int *)(iVar5 + 0x54)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  iVar2 = *(int *)(iVar5 + 0x54) - iVar4;
  if (iVar2 < 0) {
    iVar2 = iVar4 - *(int *)(iVar5 + 0x54);
  }
  if (iVar2 < 0x801) {
    sub_0801CF00(param_1,0x8d07);
  }
  else {
    sub_0801CF00(param_1,0x8d06);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

