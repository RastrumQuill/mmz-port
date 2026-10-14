// sub_0808C054 at 0x0808C054 (thumb)

undefined4 sub_0808C054(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined4 local_3c [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  byte abStack_24 [4];
  
  local_3c[0] = 0x2402;
  local_3c[1] = 0x2402;
  local_3c[2] = 0x2407;
  local_3c[3] = 0x2407;
  sub_08128BBC(abStack_2c,0,4);
  abStack_2c[3] = 1;
  sub_08128BBC(abStack_28,0,4);
  abStack_28[1] = 1;
  sub_08128B5C(abStack_24,&DAT_08129478,4);
  uVar6 = (uint)*(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xb9) = 0;
  sub_0801CC9C(param_1);
  uVar4 = (uint)abStack_2c[uVar6];
  if (uVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar4 = uVar4 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef | (byte)(uVar4 << 4);
  uVar4 = (uint)abStack_28[uVar6];
  if (uVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar4 = uVar4 & 1;
  *(char *)(param_1 + 0x4d) = (char)uVar4;
  *pbVar5 = *pbVar5 & 0xdf | (byte)(uVar4 << 5);
  sub_0801CF00(param_1,*(undefined2 *)(local_3c + uVar6));
  sub_0801CFF0(param_1);
  if (uVar6 == 1) {
    iVar3 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3 + 0x200;
  }
  else if (uVar6 < 2) {
    if (uVar6 == 0) {
      uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar2;
    }
  }
  else {
    if (uVar6 == 2) {
      uVar2 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    else {
      if (uVar6 != 3) goto LAB_0808c1a8;
      uVar2 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
  }
LAB_0808c1a8:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885c2b0 + (uint)abStack_24[uVar6] * 0x18,param_1 + 0x54,5);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x808ca5d;
  iVar3 = sub_0808BFD4(param_1,param_1 + 0x54,1,uVar6);
  *(int *)(param_1 + 0xb4) = iVar3;
  if (iVar3 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    sub_0808C328(param_1);
  }
  return in_lr;
}

