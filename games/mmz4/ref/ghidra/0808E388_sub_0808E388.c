// sub_0808E388 at 0x0808E388 (thumb)

undefined4 sub_0808E388(int param_1)

{
  byte bVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar3 = (uint)*(byte *)(param_1 + 0xd);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080BFDBC(param_1,param_1 + 0x54,0,0);
    sub_0808E764(param_1);
    sub_0801CF00(param_1,0x2c05);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) - *(int *)(iVar4 + 0x54);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) - *(int *)(iVar4 + 0x58);
    puVar2 = (undefined2 *)(&DAT_0885c618 + uVar3 * 2);
    *(undefined2 *)(param_1 + 0x50) = *puVar2;
    *(undefined2 *)(param_1 + 0x52) = *puVar2;
    *(undefined2 *)(param_1 + 0xb8) = *puVar2;
    *(undefined *)(param_1 + 0x24) = (&DAT_0885c62a)[uVar3];
    *(undefined *)(param_1 + 0x12) = (&DAT_0885c62a)[uVar3];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(uint *)(param_1 + 0x54) =
       *(int *)(iVar4 + 0x54) + ((uint)bVar1 * 2 + -1) * *(int *)(&DAT_0885c5d0 + uVar3 * 8);
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + *(int *)(&DAT_0885c5d4 + uVar3 * 8);
  return in_lr;
}

