// sub_08014314 at 0x08014314 (thumb)

undefined4 sub_08014314(undefined *param_1,undefined param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  iVar2 = 0xb;
  puVar1 = (undefined4 *)(param_1 + 0xc0);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined2 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined2 *)(param_1 + 0x14a) = 0;
  *(undefined2 *)(param_1 + 0x14c) = 0;
  *(undefined2 *)(param_1 + 0x14e) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined2 *)(param_1 + 0x158) = 0xffff;
  *(undefined2 *)(param_1 + 0x15a) = 0xffff;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
  DAT_02022b6e = 0;
  DAT_030017a0 = 0;
  DAT_03001ba2 = 0;
  DAT_03001ba1 = 0;
  DAT_03001ba0 = 0;
  FUN_08001d6c();
  return in_lr;
}

