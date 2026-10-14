// sub_0808157C at 0x0808157C (thumb)

undefined4 sub_0808157C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(byte *)(iVar3 + 0xc) < 2) &&
     (iVar5 = *(int *)(param_1 + 0x2c), *(char *)(iVar5 + 0xc) != '\x04')) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined *)(param_1 + 0x25) = 0xf;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
      *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
      sub_08017700(param_1,0x4d04);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar1 = *(int *)(iVar3 + 0x54);
    iVar2 = *(int *)(iVar5 + 0x54);
    iVar4 = *(int *)(iVar3 + 0x58);
    iVar3 = *(int *)(iVar5 + 0x58);
    *(int *)(param_1 + 0x54) = iVar2;
    iVar1 = FUN_080fe2f8(((iVar1 + (uint)*(byte *)(param_1 + 0x11) * 0x2800 + -0x1400) - iVar2) *
                         (uint)*(byte *)(param_1 + 0x12),6);
    *(int *)(param_1 + 0x54) = iVar2 + iVar1;
    iVar5 = *(int *)(iVar5 + 0x58);
    *(int *)(param_1 + 0x58) = iVar5;
    iVar3 = FUN_080fe2f8(((iVar4 + -0x500) - iVar3) * (uint)*(byte *)(param_1 + 0x12),6);
    *(int *)(param_1 + 0x58) = iVar5 + iVar3;
    sub_080177F4(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

