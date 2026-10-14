// sub_0808DBE8 at 0x0808DBE8 (thumb)

undefined4 sub_0808DBE8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uVar5 = (uint)*(byte *)(param_1 + 0x11);
  bVar1 = *(byte *)(iVar3 + 0xd);
  uVar4 = (uint)bVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 0xd) = bVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar2 = uVar5 * 2 + -1;
  *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + iVar2 * 0x1800;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + 0x2b00;
  *(int *)(param_1 + 100) = iVar2 * *(int *)(&DAT_0885c5d0 + uVar4 * 8);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(&DAT_0885c5d4 + uVar4 * 8);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar3 + 0xb4);
  *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(&DAT_0885c618 + uVar4 * 2);
  *(undefined *)(param_1 + 0x12) = (&DAT_0885c62a)[uVar4];
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined *)(param_1 + 0x25) = 0x18;
  if (uVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)(uVar5 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar5 & 1) << 4);
  sub_0801CF00(param_1,0x2c04);
  sub_0808DD84(param_1);
  return in_lr;
}

