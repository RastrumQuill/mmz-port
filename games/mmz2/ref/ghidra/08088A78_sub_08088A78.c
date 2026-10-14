// sub_08088A78 at 0x08088A78 (thumb)

undefined4 sub_08088A78(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_08012738();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x2602);
  sub_080128D4(param_1);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083417f0,param_1 + 0x54,0xc);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0xc0) = *(int *)(iVar4 + 0xc4) + -0x3000;
    *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + -0x800;
    uVar2 = 0xffffff00;
  }
  else {
    *(int *)(param_1 + 0xc0) = *(int *)(iVar4 + 200) + 0x3000;
    *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + 0x800;
    uVar2 = 0x100;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x5e00;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08088B8C(param_1);
  return in_lr;
}

