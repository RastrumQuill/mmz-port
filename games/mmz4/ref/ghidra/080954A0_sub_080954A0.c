// sub_080954A0 at 0x080954A0 (thumb)

undefined4 sub_080954A0(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined auStack_1c [4];
  byte abStack_18 [4];
  
  sub_08128B5C(auStack_1c,&DAT_08129514,4);
  sub_08128B5C(abStack_18,&DAT_08129518,4);
  uVar4 = (uint)abStack_18[*(byte *)(param_1 + 0x11)];
  uVar4 = uVar4 + (0x140 - uVar4) * (*(byte *)(param_1 + 10) >> 4 & 1) * 2 & 0xff;
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = *(short *)((int)&DAT_08128c10 + ((uVar4 + 0x40) * 0x1000000 >> 0x17)) * 0x180;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    iVar3 = (short)(&DAT_08128c10)[uVar4] * 0x180;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar3 >> 8;
    uVar1 = auStack_1c[*(byte *)(param_1 + 0x11)];
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(undefined *)(param_1 + 0x13) = uVar1;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_0801CFF0(param_1);
  iVar3 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x5c),
                       *(undefined *)(param_1 + 0x13));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  iVar3 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x60),
                       *(undefined *)(param_1 + 0x13));
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  sub_08095A8C(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

