// sub_080CB304 at 0x080CB304 (thumb)

undefined4 sub_080CB304(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar3 = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    if ('\x03' < *(char *)(param_1 + 0x71)) {
      iVar5 = sub_081284E0((*(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54)) * 0x100 >>
                           0x10,((*(int *)(param_1 + 0x58) + 0xf00) - *(int *)(DAT_0202dbf0 + 0x58))
                                * 0x100 >> 0x10);
      uVar2 = (((uint)(iVar5 << 0x10) >> 0x18) + 0x80) * 0x1000000;
      *(int *)(param_1 + 0x5c) =
           (int)*(short *)((int)&DAT_08128c10 + (uVar2 + 0x40000000 >> 0x17)) << 2;
      *(int *)(param_1 + 0x60) = (int)*(short *)((int)&DAT_08128c10 + (uVar2 >> 0x17)) << 2;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    if (((*(uint *)(param_1 + 0x8c) & 4) != 0) || (sVar1 = sub_08007C7C(iVar4,iVar5), sVar1 != 0)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080CB1C0(param_1);
    }
  }
  return in_lr;
}

