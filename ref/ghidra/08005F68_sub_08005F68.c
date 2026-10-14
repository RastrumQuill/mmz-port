// sub_08005F68 at 0x08005F68 (thumb)

undefined4 sub_08005F68(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)(param_2 + 0x1a) = 0;
  sub_08005974(param_1);
  if (((*(int *)(param_1 + 0x3c) != 0) || (*(int *)(param_2 + 0x3c) != 0)) &&
     ((*(short *)(param_1 + 0x1a) != 0 || (*(short *)(param_2 + 0x1a) != 0)))) {
    iVar4 = *(int *)(param_2 + 0x30);
    local_2c = *(int *)(param_1 + 0x24) - iVar4;
    iVar2 = *(int *)(param_2 + 0x34);
    iVar3 = *(int *)(param_1 + 0x28) - iVar2;
    local_28 = iVar3;
    local_24 = sub_080C8AD0((uint)*(ushort *)(param_2 + 0x38) * local_2c,
                            (uint)*(ushort *)(param_1 + 0x2c) + (uint)*(ushort *)(param_2 + 0x38));
    local_24 = iVar4 + local_24;
    local_20 = sub_080C8AD0(iVar3 * (uint)*(ushort *)(param_2 + 0x3a),
                            (uint)*(ushort *)(param_1 + 0x2e) + (uint)*(ushort *)(param_2 + 0x3a));
    local_20 = local_20 + iVar2;
    uVar1 = sub_080C88FC(local_2c * local_2c + local_28 * local_28);
    local_2c = sub_080C8AD0(local_2c << 8,uVar1);
    local_28 = sub_080C8AD0(local_28 << 8,uVar1);
    if ((*(int *)(param_1 + 0x3c) != 0) && (*(short *)(param_1 + 0x1a) != 0)) {
      sub_080C8AA0(param_1,&local_24,&local_2c);
    }
    if ((*(int *)(param_2 + 0x3c) != 0) && (*(short *)(param_2 + 0x1a) != 0)) {
      local_2c = -local_2c;
      local_28 = -local_28;
      sub_080C8AA0(param_2,&local_24,&local_2c);
    }
  }
  return in_lr;
}

