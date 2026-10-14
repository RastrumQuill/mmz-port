// sub_08077158 at 0x08077158 (thumb)

undefined4 sub_08077158(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_08363bc0)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  if (*(byte *)(param_1 + 0x10) == 0) {
    *(undefined *)(param_1 + 0xb8) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    iVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar1 + 0x1800;
  }
  else if (*(byte *)(param_1 + 0x10) < 3) {
    *(undefined *)(param_1 + 0xb9) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801749C(param_1);
    if (((DAT_02002444 & 0x20) == 0) || (uVar2 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
      uVar2 = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar3 = 6;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar3 = 10;
    }
    sub_0800736C(param_1 + 0x74,&DAT_08363a80,param_1 + 0x54,uVar3);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar2;
    *(undefined4 *)(param_1 + 0x98) = 0x8076fd9;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  sub_0807724C(param_1);
  return in_lr;
}

