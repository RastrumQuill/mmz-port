// sub_0809A034 at 0x0809A034 (thumb)

undefined4 sub_0809A034(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x6100);
  uVar3 = *(byte *)(param_1 + 0x11) & 1;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  pbVar2 = (byte *)(param_1 + 0x4a);
  *pbVar2 = *pbVar2 & 0xef | (byte)(uVar3 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  *(undefined *)(param_1 + 0x4d) = 1;
  *pbVar2 = *pbVar2 & 0xdf | 0x20;
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  if (0xf < uVar3) {
    *(undefined *)(param_1 + 0x13) = 0x20;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
        iVar4 = ((uVar3 & 7) >> 1) * -8;
      }
      else {
        iVar4 = ((uVar3 & 7) >> 1) << 3;
      }
    }
    else if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      iVar4 = ((uVar3 & 7) >> 1) << 3;
    }
    else {
      iVar4 = ((uVar3 & 7) >> 1) * -8;
    }
    goto LAB_0809a1b6;
  }
  if (7 < uVar3) {
    *(undefined *)(param_1 + 0x25) = 0x17;
    *(undefined *)(param_1 + 0x13) = 0x20;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
        iVar4 = ((*(byte *)(param_1 + 0x11) & 7) >> 1) * -8;
      }
      else {
        iVar4 = ((*(byte *)(param_1 + 0x11) & 7) >> 1) << 3;
      }
    }
    else if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      iVar4 = ((*(byte *)(param_1 + 0x11) & 7) >> 1) << 3;
    }
    else {
      iVar4 = ((*(byte *)(param_1 + 0x11) & 7) >> 1) * -8;
    }
    goto LAB_0809a1b6;
  }
  *(undefined *)(param_1 + 0x25) = 0x16;
  bVar1 = *(byte *)(param_1 + 0x11) >> 1;
  uVar3 = (uint)bVar1;
  *(byte *)(param_1 + 0x13) = bVar1 << 2;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) goto LAB_0809a1ae;
    iVar4 = uVar3 * 3;
  }
  else if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
    iVar4 = uVar3 * 3;
  }
  else {
LAB_0809a1ae:
    iVar4 = uVar3 * -3;
  }
  iVar4 = iVar4 << 1;
LAB_0809a1b6:
  *(int *)(param_1 + 100) = iVar4;
  *(undefined4 *)(param_1 + 0x60) = 0x100;
  *(undefined4 *)(param_1 + 0x68) = 0x20;
  *(undefined2 *)(param_1 + 0xbe) = 0x20;
  *(undefined *)(param_1 + 0x12) = 0;
  return in_lr;
}

