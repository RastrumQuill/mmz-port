// sub_081048B0 at 0x081048B0 (thumb)

undefined4 sub_081048B0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xbd01);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (*(int *)(*(int *)(param_1 + 0x28) + 0xde0) != 0) {
      sub_08002B10(0x1a3);
    }
    sub_08002B10(0x131);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08104A3C(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0xb4) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(int *)(iVar1 + 0xde0) == 0) {
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      return in_lr;
    }
    iVar5 = *(int *)(param_1 + 0xb8);
    iVar3 = *(int *)(param_1 + 0x58) - iVar5;
    if (iVar3 < 0) {
      iVar3 = iVar5 - *(int *)(param_1 + 0x58);
    }
    if ((uint)(iVar3 >> 8) < 0x10) {
      iVar3 = *(int *)(iVar1 + 0xdd4) + 3;
    }
    else if ((uint)(iVar3 >> 8) < 0x20) {
      iVar3 = *(int *)(iVar1 + 0xdd4) + 2;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0xdd4) + 1;
    }
    *(int *)(iVar1 + 0xdd4) = iVar3;
    *(int *)(iVar1 + 0xdfc) = *(int *)(iVar1 + 0xdfc) + 1;
    if (*(int *)(param_1 + 0x2c) == 0) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        puVar4 = &DAT_08868c20;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        puVar4 = &DAT_08868c38;
      }
      sub_08005760(param_1 + 0x74,puVar4,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      sub_0801CF00(param_1,0xbd00);
      *(undefined4 *)(param_1 + 0xc) = 1;
      uVar2 = *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    }
    else {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = *(undefined *)(param_1 + 0x11);
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xb5) = 1;
      *(undefined4 *)(param_1 + 0xc) = 4;
      uVar2 = *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

