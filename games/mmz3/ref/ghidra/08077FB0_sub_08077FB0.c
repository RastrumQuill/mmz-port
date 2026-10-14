// sub_08077FB0 at 0x08077FB0 (thumb)

undefined4 sub_08077FB0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_08363d08)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if (*(char *)(param_1 + 0x10) == '\x02') {
    if (((DAT_02002445 & 2) == 0) || (uVar1 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
      uVar1 = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar2 = 6;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar2 = 10;
    }
    sub_0800736C(param_1 + 0x74,&DAT_08363cd0,param_1 + 0x54,uVar2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar1;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_08363c28,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x900;
  }
  *(undefined4 *)(param_1 + 0x98) = 0x8077ed9;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0x12) = 0x28;
  *(undefined *)(param_1 + 0x25) = 0x1f;
  sub_080780B8(param_1);
  return in_lr;
}

