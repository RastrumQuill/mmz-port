// sub_08060A10 at 0x08060A10 (thumb)

undefined4 sub_08060A10(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  
  param_2 = param_2 & 0xff;
  iVar2 = *(int *)(param_1 + 0x2c);
  local_3c = *(undefined4 *)(iVar2 + 0x54);
  local_38 = *(undefined4 *)(iVar2 + 0x58);
  local_34 = *(undefined4 *)(iVar2 + 0x5c);
  local_30 = *(undefined4 *)(iVar2 + 0x60);
  local_2c = *(undefined4 *)(iVar2 + 100);
  local_28 = *(undefined4 *)(iVar2 + 0x68);
  local_24 = (undefined4 *)(param_1 + 0xc0);
  do {
    sub_080FE2CC(param_1,&local_3c,&local_34,&local_2c);
    uVar1 = param_2 * 0x1000000 - 0x1000000;
    param_2 = uVar1 >> 0x18;
  } while (uVar1 != 0);
  *(undefined4 *)(param_1 + 0xbc) = local_3c;
  *local_24 = local_38;
  return in_lr;
}

