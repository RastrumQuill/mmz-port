// sub_0800B138 at 0x0800B138 (thumb)

undefined4 sub_0800B138(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar6 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    (&DAT_02000a04)[uVar6] = (&DAT_02000a04)[uVar6] & 0xfffc | 2;
    DAT_02000a50 = DAT_02000a50 | 0x4000;
    DAT_02000a5d = 0xff;
    DAT_02000a5a = 0xff;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(&DAT_02000a0c + uVar6 * 2) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = *(int *)(DAT_020359b8 + 0x54);
  if (*(int *)(param_1 + 0x34) < 0x1e0) {
    if (iVar3 < 0x1d800) {
      iVar3 = 0x1d800 - iVar3;
    }
    else {
      iVar3 = 0;
    }
    iVar7 = 0xff;
  }
  else {
    if (*(int *)(param_1 + 0x34) < 0x5a0) {
      DAT_02000a5d = 0xfb;
      DAT_02000a5e = 0xfd;
      if (0x56800 < iVar3) {
        iVar7 = 0x5e000 - iVar3 >> 8;
        iVar3 = iVar3 + -0x56800;
        goto LAB_0800b2b2;
      }
      iVar7 = 0x5e000 - iVar3 >> 8;
    }
    else {
      if (iVar3 < 0x96000) {
        DAT_02000a5d = 0xfb;
        DAT_02000a5e = 0xfd;
        if (iVar3 < 0x7e801) {
          iVar7 = 0x86000 - iVar3 >> 8;
          iVar3 = 0;
          *(undefined2 *)(param_1 + 0x12) = 0;
        }
        else {
          iVar7 = 0x86000 - iVar3 >> 8;
          iVar3 = iVar3 + -0x7e800;
        }
        goto LAB_0800b2b2;
      }
      if (iVar3 < 0xd2000) {
        DAT_02000a5d = 0xfb;
        DAT_02000a5e = 0xfd;
        if (0xb8800 < iVar3) {
          iVar7 = 0xc0000 - iVar3 >> 8;
          iVar3 = iVar3 + -0xb8800;
          goto LAB_0800b2b2;
        }
        iVar7 = 0xc0000 - iVar3 >> 8;
      }
      else if (iVar3 < 0x10e000) {
        DAT_02000a5d = 0xfb;
        DAT_02000a5e = 0xfd;
        if (0xf2800 < iVar3) {
          iVar7 = 0xfa000 - iVar3 >> 8;
          iVar3 = iVar3 + -0xf2800;
          goto LAB_0800b2b2;
        }
        iVar7 = 0xfa000 - iVar3 >> 8;
      }
      else {
        iVar7 = 0xff;
      }
    }
    iVar3 = 0;
  }
LAB_0800b2b2:
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar3 < 0x1001) {
    sVar1 = *(short *)(param_1 + 0x12);
    if (sVar1 != 0) {
      *(short *)(param_1 + 0x12) = sVar1 + 9;
      if (((ushort)(sVar1 - 0x77U) < 0x10) || (0xff < (ushort)(sVar1 + 9U))) {
        *(undefined2 *)(param_1 + 0x12) = 0;
      }
    }
  }
  else {
    if (*(short *)(param_1 + 0x10) != 0) {
      *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + -0x20;
    }
    *(ushort *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 3U & 0xff;
  }
  iVar2 = *(int *)(param_1 + 0x6c) + ((int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] >> 2) +
          (uint)*(ushort *)(param_1 + 0x10);
  *(int *)(param_1 + 0x6c) = iVar2;
  iVar5 = *(int *)(param_1 + 0x68);
  iVar4 = iVar2 - iVar5;
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = -iVar4;
  }
  if (0xa00 < iVar3) {
    if (iVar4 < 0) {
      iVar2 = iVar5 + -0xa00;
    }
    else {
      iVar2 = iVar5 + 0xa00;
    }
  }
  *(int *)(param_1 + 0x68) = iVar2;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if (0xff < iVar7) {
    iVar7 = 0xff;
  }
  DAT_02000a56 = (ushort)iVar7 & 0xff;
  return in_lr;
}

