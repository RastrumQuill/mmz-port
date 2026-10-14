// sub_0808FFD0 at 0x0808FFD0 (thumb)

undefined4 sub_0808FFD0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x7600);
  sub_080128D4(param_1);
  uVar4 = *(byte *)(param_1 + 0x11) + 1 & 1;
  if (uVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08342250,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x809063d;
  *(undefined4 *)(param_1 + 0x9c) = 0x8090669;
  piVar6 = (int *)(param_1 + 0xb4);
  iVar3 = *(int *)(iVar2 + 0x54);
  *(int *)(param_1 + 0x54) = iVar3;
  *piVar6 = iVar3;
  piVar5 = (int *)(param_1 + 0xb8);
  *piVar5 = *(int *)(iVar2 + 0x58) + -0x2400;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  sub_0808FF1C(param_1,1,0);
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(int *)(param_1 + 0x58) = *piVar5 + -0x10000;
    *(undefined *)(param_1 + 0xd) = 2;
  }
  else {
    if (*(byte *)(param_1 + 0x11) == 2) {
      iVar2 = *piVar6;
      iVar3 = -0x10000;
    }
    else {
      iVar2 = *piVar6;
      iVar3 = 0x10000;
    }
    *(int *)(param_1 + 0x54) = iVar2 + iVar3;
    *(int *)(param_1 + 0x58) = *piVar5 + -0x4000;
  }
  sub_0808FF98(param_1);
  return in_lr;
}

