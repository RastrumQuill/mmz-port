// sub_0808DAAC at 0x0808DAAC (thumb)

undefined4 sub_0808DAAC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar3 + 0xbc);
  *(byte *)(param_1 + 0xb9) = 0x30;
  *(byte *)(param_1 + 0xba) = 0;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  *(uint *)(param_1 + 0x54) =
       *(int *)(iVar3 + 0x54) +
       (uVar4 * 2 + -1) *
       (*(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0xb9) + 0x40) * 0x1000000 >> 0x17)) *
        4 + 0x3600);
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar3 + 0x58) + 0xc00 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xba)] * 6;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined *)(param_1 + 0x25) = 0x19;
  if (uVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)(uVar4 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar4 & 1) << 4);
  sub_0801CF00(param_1,0x2c02);
  uVar2 = sub_0808DA24(param_1,1,uVar4,0);
  *(undefined4 *)(param_1 + 100) = uVar2;
  uVar2 = sub_0808DA24(param_1,2,uVar4,1);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = sub_0808DA24(param_1,2,uVar4,0);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  sub_0808DD84(param_1);
  return in_lr;
}

