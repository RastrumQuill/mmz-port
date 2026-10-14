// sub_080620D0 at 0x080620D0 (thumb)

undefined4 sub_080620D0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  iVar2 = *(int *)(DAT_0202e130 + 0x58) + -0x1000;
  puVar4 = (uint *)(param_1 + 0xb4);
  uVar1 = *puVar4;
  if ((uVar1 & 0x10) == 0) {
    iVar2 = *(int *)(DAT_0202e130 + 0x58) + -0x3000 + (uint)*(byte *)(param_1 + 0xc0) * 0x4000;
  }
  iVar3 = *(int *)(param_1 + 0x58);
  pcVar5 = (char *)(param_1 + 0xc1);
  if (((iVar2 - iVar3) + 0x400U < 0x801) || (*pcVar5 != '\0')) {
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffc;
    *(undefined4 *)(param_1 + 0x68) = 0;
    iVar2 = *(int *)(param_1 + 0x60) * 0xe0;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar2 >> 8;
  }
  else if (iVar2 < iVar3) {
    if (iVar3 < *(int *)(param_1 + 0xbc) + 0x1800) {
      *puVar4 = uVar1 & 0xfffffffe | 2;
      *(undefined4 *)(param_1 + 0x68) = 0x20;
    }
    else {
      *puVar4 = uVar1 & 0xfffffffd | 1;
      *(undefined4 *)(param_1 + 0x68) = 0xfffffff0;
    }
  }
  else if (*(int *)(param_1 + 0xbc) + 0xd800 < iVar3) {
    *puVar4 = uVar1 & 0xfffffffd | 1;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffe0;
  }
  else {
    *puVar4 = uVar1 & 0xfffffffe | 2;
    *(undefined4 *)(param_1 + 0x68) = 0x10;
  }
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 == 0) goto LAB_080621f2;
  iVar3 = *(int *)(param_1 + 0x60);
  if (0x3ff < iVar3 + 0x200U) {
    if (iVar2 < 0) {
      if (iVar3 < 0) goto LAB_080621f2;
    }
    else if (-1 < iVar3) goto LAB_080621f2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar2;
LAB_080621f2:
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *pcVar5 = '\0';
  iVar2 = *(int *)(param_1 + 0xbc);
  if (*(int *)(param_1 + 0x58) < iVar2) {
    *(int *)(param_1 + 0x58) = iVar2;
    *pcVar5 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xbc) + 0xf000;
  if (iVar2 < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = iVar2;
    *pcVar5 = '\x01';
  }
  return in_lr;
}

