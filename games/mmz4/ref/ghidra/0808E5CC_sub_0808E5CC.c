// sub_0808E5CC at 0x0808E5CC (thumb)

undefined4 sub_0808E5CC(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x58);
    iVar2 = FUN_081288bc(*(ushort *)(param_1 + 0xb8) - 0xb0,5);
    uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar1 & 0x7fffffff;
    *(uint *)(param_1 + 0x68) = iVar2 + (uVar1 * 2 >> 0x11 & 7) + 0x20;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_0808e69c;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = *(int *)(param_1 + 0x5c) * *(int *)(param_1 + 0x68);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar2 = *(int *)(param_1 + 100) + (iVar2 >> 8);
  *(int *)(param_1 + 0x58) = iVar2;
  if ((*(int *)(param_1 + 0xb4) + 0x17fff < iVar2) || (*(char *)(iVar3 + 0xc) == '\x04')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    return in_lr;
  }
LAB_0808e69c:
  sub_0801CFF0(param_1);
  return in_lr;
}

