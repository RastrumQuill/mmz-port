// sub_08038CD0 at 0x08038CD0 (thumb)

undefined4 sub_08038CD0(int param_1,uint param_2)

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
  iVar2 = *(int *)(param_1 + 0x24);
  local_3c = *(undefined4 *)(iVar2 + 0x4c);
  local_38 = *(undefined4 *)(iVar2 + 0x50);
  local_34 = *(undefined4 *)(iVar2 + 0x54);
  local_30 = *(undefined4 *)(iVar2 + 0x58);
  local_2c = *(undefined4 *)(iVar2 + 0x5c);
  local_28 = *(undefined4 *)(iVar2 + 0x60);
  local_24 = (undefined4 *)(param_1 + 0xc4);
  do {
    sub_080C8AA4(param_1,&local_3c,&local_34,&local_2c);
    uVar1 = param_2 * 0x1000000 - 0x1000000;
    param_2 = uVar1 >> 0x18;
  } while (uVar1 != 0);
  *(undefined4 *)(param_1 + 0xc0) = local_3c;
  *local_24 = local_38;
  return in_lr;
}

