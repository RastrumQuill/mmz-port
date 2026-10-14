// sub_0809EA34 at 0x0809EA34 (thumb)

undefined4 sub_0809EA34(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,1);
  sub_0809C980(param_1);
  *(uint *)(param_1 + 0x4c) =
       *(int *)(iVar1 + 0xd8) + (uint)*(byte *)(param_1 + 0x11) * 0x2000 + 0x2000;
  *(int *)(param_1 + 0x50) = *(int *)(iVar1 + 0xdc) + 0x9000;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0809E9FC(param_1);
  return in_lr;
}

