// sub_0808EFD4 at 0x0808EFD4 (thumb)

undefined4 sub_0808EFD4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_08365d64)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar1 = 4;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar1 = 6;
  }
  sub_0800736C(param_1 + 0x74,&DAT_08365be4,param_1 + 0x54,uVar1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x808eea9;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  *(undefined *)(param_1 + 0xc0) = 0;
  sub_0808F094(param_1);
  return in_lr;
}

