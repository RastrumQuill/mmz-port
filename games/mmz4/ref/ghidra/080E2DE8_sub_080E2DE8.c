// sub_080E2DE8 at 0x080E2DE8 (thumb)

undefined4 sub_080E2DE8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0801CF00(param_1,0x9607);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_080E2C9C(param_1 + 0x54,0,1);
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    sub_0801CF00(param_1,0x9606);
    sVar1 = FUN_081288bc(0xffffff63,0x14);
    *(int *)(param_1 + 100) = (int)sVar1;
    uVar2 = FUN_081288bc(0xc900,0x1400);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0xff;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    iVar3 = *(int *)(param_1 + 100) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar3 >> 8;
  }
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

