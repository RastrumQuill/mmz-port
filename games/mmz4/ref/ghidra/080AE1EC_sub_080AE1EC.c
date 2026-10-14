// sub_080AE1EC at 0x080AE1EC (thumb)

undefined4 sub_080AE1EC(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CC9C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801CF00(param_1,0xa200);
    sub_08005784(param_1 + 0x74,&DAT_0885f9dc);
    *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + -0x6800;
    *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + -0x4200;
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0xbe) + 0x40) * 0x1000000 >> 0x17)) *
         7 >> 1;
    *(int *)(param_1 + 0x60) = (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xbe)] * 7 >> 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (((*(uint *)(param_1 + 0x8c) & 1) == 0) || ((*(byte *)(param_1 + 0x97) & 0xf0) != 0x30)) {
    sVar1 = sub_08007020(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar1 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080ADEA0(param_1);
    }
  }
  else {
    sub_08002B10(0x40);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

