// sub_080BE200 at 0x080BE200 (thumb)

undefined4 sub_080BE200(ushort *param_1,ushort *param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_24;
  
  param_4 = param_4 & 0xff;
  local_24 = 0xf;
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar3 = uVar1 >> 5 & 0x1f;
    uVar4 = uVar1 >> 10 & 0x1f;
    *param_3 = (ushort)(((uVar1 & 0x1f) + ((int)(((uVar2 & 0x1f) - (uVar1 & 0x1f)) * param_4) >> 8))
                        * 0x10000 >> 0x10) |
               (ushort)((int)((uVar3 + ((int)(((uVar2 >> 5 & 0x1f) - uVar3) * param_4) >> 8)) *
                             0x10000) >> 0xb) |
               (ushort)((int)((uVar4 + ((int)(((uVar2 >> 10 & 0x1f) - uVar4) * param_4) >> 8)) *
                             0x10000) >> 6);
    param_3 = param_3 + 1;
    local_24 = local_24 + -1;
  } while (-1 < local_24);
  return in_lr;
}

