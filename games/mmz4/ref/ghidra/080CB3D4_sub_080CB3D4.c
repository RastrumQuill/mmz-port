// sub_080CB3D4 at 0x080CB3D4 (thumb)

undefined4 sub_080CB3D4(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar2 = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    if ('\x03' < *(char *)(param_1 + 0x71)) {
      *(int *)(param_1 + 0x5c) =
           (int)*(short *)((int)&DAT_08128c10 +
                          ((*(byte *)(param_1 + 0x11) + 0x40) * 0x1000000 >> 0x17)) << 2;
      *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0x11)] << 2;
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    if (((*(uint *)(param_1 + 0x8c) & 4) != 0) || (sVar1 = sub_08007C7C(iVar3,iVar4), sVar1 != 0)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080CB1C0(param_1);
    }
  }
  return in_lr;
}

